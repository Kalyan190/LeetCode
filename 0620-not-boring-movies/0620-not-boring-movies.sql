# Write your MySQL query statement below
select * from Cinema 
where description not like 'boring' and id % 2 <> 0
order by rating  desc;