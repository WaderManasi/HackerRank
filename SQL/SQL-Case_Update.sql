--Leetcode solution

--update salary set sex=decode(sex,'f','m','f');

update salary set sex = case when sex = 'f' then 'm' else 'f' end;