CREATE DATABASE Duck;
SHOW DATABASES;
USE Duck;

CREATE TABLE userProfile
(
   userID       int NOT NULL AUTO_INCREMENT,
   firstName    varchar(256) NOT NULL,
   lastname     varchar(256) NOT NULL,
   age			int NOT NULL,
   email        varchar(256) NOT NULL UNIQUE,
   PRIMARY KEY(userID, email)
);

CREATE TABLE message
(
   messageID  	int NOT NULL AUTO_INCREMENT,
   user1ID		int,
   user2ID		int,
   FOREIGN KEY(user1ID) REFERENCES userProfile(userID),
   FOREIGN KEY(user2ID) REFERENCES userProfile(userID),
   message      VARCHAR(2000),
   PRIMARY KEY(messageID)
);

CREATE TABLE friendsList
(
   friendsID    int NOT NULL AUTO_INCREMENT,
   user1ID		int,
   user2ID		int,
   FOREIGN KEY(user1ID) REFERENCES userProfile(userID),
   FOREIGN KEY(user2ID) REFERENCES userProfile(userID),
   PRIMARY KEY(friendsID)
);

DROP TABLE scores;
SHOW TABLES;

DESC scores;