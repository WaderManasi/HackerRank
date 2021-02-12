--Leetcode solution

/* Write your PL/SQL query statement below */
--Left join
select  FirstName,LastName,City,State from Person left join Address on Person.PersonId = Address.PersonId;