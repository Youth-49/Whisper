USE db;

DROP PROCEDURE IF EXISTS sp_create_friend_link;

delimiter //

CREATE PROCEDURE sp_create_friend_link (
    IN account_id_1 INT,
    IN account_id_2 INT
)
BEGIN
    DECLARE big_id INT DEFAULT 1;
    DECLARE small_id INT DEFAULT 2;
    SET big_id = IF(account_id_1 > account_id_2, account_id_1, account_id_2);
    SET small_id = IF(account_id_1 < account_id_2, account_id_1, account_id_2);
    IF NOT EXISTS (
        SELECT * FROM friend_link
            WHERE small_account_id = small_id
                AND big_account_id = big_id
    ) THEN
        INSERT INTO friend_link VALUES (DEFAULT, small_id, big_id);
    END IF;
END//

delimiter ;