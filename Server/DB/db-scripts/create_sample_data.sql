USE db;

-- Register
CALL sp_create_account('Yan', 'Yan'); -- id = 1
CALL sp_create_account('Zhu', 'Zhu'); -- id = 2
CALL sp_create_account('Zhong', 'Zhong'); -- id = 3
CALL sp_create_account('Gao', 'Gao'); -- id = 4
CALL sp_create_account('Chang', 'Chang'); -- id = 5

-- Login
CALL sp_login(1, 'Yan');
CALL sp_login(2, 'Zhu'); 
CALL sp_login(3, 'Zhong'); 
CALL sp_login(4, 'Gao');
CALL sp_login(5, 'wrong_passkey'); 

-- Zhu request to add Yan. Yan request to add Zhong.
CALL sp_create_friend_link_request(2, 1);
CALL sp_create_friend_link_request(1, 3);

-- Yan accept Zhu. Zhong reject Yan.
CALL sp_reply_friend_link_request(1, 1);
CALL sp_reply_friend_link_request(2, 0);

-- Zhu set a alias for Yan and change it another.
CALL sp_update_alias(2, 1, 'no.1 in XUTELI school');
CALL sp_update_alias(2, 1, 'idol');

-- Yan and Zhong chat.
CALL sp_create_record(1, 2, CURTIME(), 'hi');
SELECT sleep(0.5);
CALL sp_update_read_record(1);
CALL sp_create_record(2, 1, CURTIME(), 'halo');
SELECT sleep(0.5);
CALL sp_create_record(2, 1, CURTIME(), 'you are my idol');
SELECT sleep(0.5);
CALL sp_update_read_record(2);
CALL sp_update_read_record(3);
CALL sp_create_record(1, 2, CURTIME(), 'yes i am!');

-- Gao change his passkey successfully. But Change fail.
CALL sp_update_passkey(4, 'Gao', 'new_key_for_Gao');
CALL sp_update_passkey(5, 'wrong_old_key', 'new_key_for_Change');


-- Gao request to add Chang remaining uncomfirmed.
CALL sp_create_friend_link_request(4, 5);
CALL sp_get_all_friend_request(5);


-- Get friends of Yan.
CALL sp_get_all_friend(1);