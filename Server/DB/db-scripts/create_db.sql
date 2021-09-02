DROP DATABASE IF EXISTS db;

CREATE DATABASE db;

USE db;

CREATE TABLE account (
    id INT AUTO_INCREMENT,
    name NVARCHAR(100),
    passkey NVARCHAR(100),
    CONSTRAINT pk_account
        PRIMARY KEY (id)
);

ALTER TABLE account AUTO_INCREMENT = 314159;

CREATE TABLE record (
    id INT AUTO_INCREMENT,
    from_account_id INT,
    to_account_id INT,
    send_date_time DATETIME,
    content NVARCHAR(1000),
    unread INT,

    CONSTRAINT pk_account
        PRIMARY KEY (id),

    CONSTRAINT fk_record_from
        FOREIGN KEY (from_account_id)
        REFERENCES account(id)
        ON DELETE CASCADE,
    
    CONSTRAINT fk_record_to
        FOREIGN KEY (to_account_id)
        REFERENCES account(id)
        ON DELETE CASCADE
);

CREATE TABLE friend_link (
    id INT AUTO_INCREMENT,
    small_account_id int,
    big_account_id int,

    CONSTRAINT pk_friend_link
        PRIMARY KEY (id),

    CONSTRAINT fk_friend_link_big
        FOREIGN KEY (small_account_id)
        REFERENCES account(id)
        ON DELETE CASCADE,
    
    CONSTRAINT fk_friend_link_small
        FOREIGN KEY (big_account_id)
        REFERENCES account(id)
        ON DELETE CASCADE
);

CREATE TABLE friend_link_request (
    id INT AUTO_INCREMENT,
    from_account_id INT,
    to_account_id INT,
    state INT,

    CONSTRAINT pk_friend_link_request
        PRIMARY KEY (id),

    CONSTRAINT fk_friend_link_request_from
        FOREIGN KEY (from_account_id)
        REFERENCES account(id),
    
    CONSTRAINT fk_friend_link_request_to
        FOREIGN KEY (to_account_id)
        REFERENCES account(id)
);

CREATE TABLE alias (
    from_account_id INT,
    to_account_id INT,
    name nvarchar(100),

    CONSTRAINT pk_alias
        PRIMARY KEY (from_account_id, to_account_id),

    CONSTRAINT fk_alias_from
        FOREIGN KEY (from_account_id)
        REFERENCES account(id),
    
    CONSTRAINT fk_alias_to
        FOREIGN KEY (to_account_id)
        REFERENCES account(id)
);
