USE db;

DROP PROCEDURE IF EXISTS sp_create_friend_link_request;

delimiter //

CREATE PROCEDURE sp_create_friend_link_request (
    IN from_account_id INT,
    IN to_account_id INT
)
BEGIN
    INSERT INTO friend_link_request VALUES (
        DEFAULT, from_account_id, to_account_id, 0
    );
    
    SELECT 
        request.*, account.name AS from_account_name
    FROM (
        SELECT * FROM friend_link_request 
        WHERE id = (SELECT LAST_INSERT_ID())
    ) AS request
    INNER JOIN account
    ON account.id = request.from_account_id;

END//

delimiter ;