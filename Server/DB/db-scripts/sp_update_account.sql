USE db;

DROP PROCEDURE IF EXISTS sp_update_alias;

delimiter //

CREATE PROCEDURE sp_update_account (
    IN account_id INT,
    IN new_name NVARCHAR(100)
)
BEGIN
    UPDATE account SET name = new_name
    WHERE id = account_id;
END//

delimiter ;