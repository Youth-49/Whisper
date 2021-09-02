USE db;

DROP PROCEDURE IF EXISTS sp_update_read_record;

delimiter //

CREATE PROCEDURE sp_update_read_record (
    IN record_id INT
)
BEGIN
    UPDATE record SET unread = 0 WHERE id = record_id;
END//

delimiter ;