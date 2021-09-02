USE db;

DROP PROCEDURE IF EXISTS sp_get_unread_record;

delimiter //

CREATE PROCEDURE sp_get_unread_record (
    IN account_id INT
)
BEGIN
    SELECT * FROM record
    WHERE to_account_id = account_id AND unread = 1;
END//

delimiter ;