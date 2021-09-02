USE db;

DROP PROCEDURE IF EXISTS sp_update_alias;

delimiter //

CREATE PROCEDURE sp_update_alias (
    IN from_account_id INT,
    IN to_account_id INT,
    IN new_alias NVARCHAR(100)
)
BEGIN
    IF EXISTS (
        SELECT * FROM alias
        WHERE alias.from_account_id = from_account_id
            AND alias.to_account_id = to_account_id
    ) THEN 
        UPDATE alias SET name = new_alias 
        WHERE alias.from_account_id = from_account_id
            AND alias.to_account_id = to_account_id;
    ELSE
        INSERT INTO alias 
            VALUES (from_account_id, to_account_id, new_alias);
    END IF;
END//

delimiter ;