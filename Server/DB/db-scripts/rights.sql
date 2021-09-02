USE db;

DROP USER IF EXISTS 'app_user'@'%'

CREATE USER app_user identified by 'app_user';

GRANT EXECUTE ON db.* TO app_user@'%';
