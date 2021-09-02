USE db;

DROP PROCEDURE IF EXISTS sp_get_record_chunk;

delimiter //

CREATE PROCEDURE sp_get_record_chunk (
    IN account_id INT,
    IN friend_account_id INT,
    IN record_id INT,
    IN chunk_size INT
)
BEGIN
    IF (record_id = 0) THEN
        SELECT * FROM record 
        WHERE (
            (
                (from_account_id = account_id 
                    AND to_account_id = friend_account_id)
                OR
                (from_account_id = friend_account_id 
                        AND to_account_id = account_id)
            )
        )
        ORDER BY id DESC
        LIMIT 0, chunk_size;
    ELSE
        SELECT * FROM record 
        WHERE (
            (
                (from_account_id = account_id 
                    AND to_account_id = friend_account_id)
                OR
                (from_account_id = friend_account_id 
                        AND to_account_id = account_id)
            )
            AND
            id < (
                SELECT id FROM record
                WHERE id = record_id
            )
        )
        ORDER BY id DESC
        LIMIT 0, chunk_size;
    END IF;
END//

delimiter ;