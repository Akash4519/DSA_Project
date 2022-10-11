CREATE TABLE Person (
    PersonID int,
    LastName varchar(255),
    FirstName varchar(255),
    Address varchar(255),
    City varchar(255)
);
INSERT INTO Person (PersonID, LastName, FirstName, Address,City)
VALUES ('12334', 'Tom B. Erichsen', 'Skagen 21', 'Stavanger', 'Norway');
SELECT *FROM Person