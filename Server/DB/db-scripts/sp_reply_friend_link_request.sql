USE db;

DROP PROCEDURE IF EXISTS sp_reply_friend_link_request;

delimiter //

CREATE PROCEDURE sp_reply_friend_link_request (
    IN request_id INT,
    IN state INT
)
BEGIN
    UPDATE friend_link_request 
        SET friend_link_request.state = state
        WHERE id = request_id;
    IF state = 1 THEN
        CALL sp_create_friend_link(
            (SELECT to_account_id 
            FROM friend_link_request
            WHERE id = request_id),
            (SELECT from_account_id
            FROM friend_link_request
            WHERE id =request_id)
            );
    END IF;
    -- return the request row
    SELECT * FROM friend_link_request WHERE id = request_id;
END//

delimiter ;