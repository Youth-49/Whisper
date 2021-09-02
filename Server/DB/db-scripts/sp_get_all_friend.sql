USE db;

DROP PROCEDURE IF EXISTS sp_get_all_friend;

delimiter //

CREATE PROCEDURE sp_get_all_friend (
    IN account_id INT
)
BEGIN
    SELECT 
        friend_account_id, 
        account.name AS friend_account_name,
        alias.name AS friend_alias
    FROM 
        ((
            SELECT big_account_id AS friend_account_id
            FROM friend_link 
            WHERE small_account_id = account_id
        )
        UNION 
        (
            SELECT small_account_id AS friend_account_id
            FROM friend_link 
            WHERE big_account_id = account_id
        )) 
        AS friend
    INNER JOIN account
    ON friend.friend_account_id = account.id
    LEFT JOIN alias
    ON friend_account_id = alias.to_account_id;
END//

delimiter ;