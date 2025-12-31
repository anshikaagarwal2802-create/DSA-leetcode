# Write your MySQL query statement below
select w.id from Weather w join Weather m  on  w.recordDate=date_add(m.recordDate,interval 1 day) where  w.temperature>m.temperature;
