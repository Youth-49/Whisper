USE db;

DROP PROCEDURE IF EXISTS sp_create_record;

delimiter //

CREATE PROCEDURE sp_create_record (
    IN from_account_id INT,
    IN to_account_id INT,
    IN send_date_time DATETIME,
    IN content NVARCHAR(1000)
)
BEGIN
    INSERT INTO record VALUES (
        DEFAULT, from_account_id, to_account_id,
        send_date_time, content, 1);
END//

delimiter ;