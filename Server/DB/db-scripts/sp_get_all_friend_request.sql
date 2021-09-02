USE db;

DROP PROCEDURE IF EXISTS sp_get_all_friend_request;

delimiter //

CREATE PROCEDURE sp_get_all_friend_request (
    IN account_id INT
)
BEGIN
    SELECT 
        request.request_id,
        request.from_account_id,
        account.name AS from_account_name
    FROM (
        SELECT 
            friend_link_request.id AS request_id, 
            friend_link_request.from_account_id
        FROM friend_link_request
        WHERE to_account_id = account_id
            AND state = 0
    ) AS request
    INNER JOIN account
    ON account.id = request.from_account_id;
END//

delimiter ;