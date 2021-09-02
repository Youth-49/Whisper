USE db;

DROP PROCEDURE IF EXISTS sp_login;

delimiter //

CREATE PROCEDURE sp_login (
    IN account_id INT,
    IN input_passkey VARCHAR(100)
)
BEGIN
    SELECT * FROM account
    WHERE id = account_id AND passkey = input_passkey;
END//

delimiter ;