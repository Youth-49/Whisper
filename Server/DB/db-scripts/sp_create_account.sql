USE db;

DROP PROCEDURE IF EXISTS sp_create_account;

delimiter //

CREATE PROCEDURE sp_create_account (
    IN name NVARCHAR(100),
    IN passkey VARCHAR(100)
)
BEGIN
    INSERT INTO account VALUES (DEFAULT, name, passkey);
    SELECT * FROM account WHERE id = (SELECT LAST_INSERT_ID());
END//

delimiter ;