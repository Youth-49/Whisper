USE db;

DROP PROCEDURE IF EXISTS sp_update_passkey;

delimiter //

CREATE PROCEDURE sp_update_passkey (
    IN account_id INT,
    IN old_passkey varchar(100), 
    IN new_passkey varchar(100)
)
BEGIN
    IF EXISTS (
        SELECT * FROM account
        WHERE id = account_id AND passkey = old_passkey
    ) THEN

        UPDATE account SET passkey = new_passkey
        WHERE id = account_id AND passkey = old_passkey;

        SELECT * FROM account WHERE id = account_id;
        
    END IF;
END//

delimiter ;