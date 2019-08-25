-- 过滤
SELECT *
FROM mytable
WHERE col IS NULL;

-- WHERE 子句可用的操作符

-- 操作符	说明
--   =	   等于
--   <	   小于
--   >	   大于
-- <> !=  不等于
-- <= !>  小于等于
-- >= !<  大于等于
-- BETWEEN	在两个值之间
-- IS NULL	为 NULL 值

-- 应该注意到，NULL 与 0、空字符串都不同

-- AND 和 OR 用于连接多个过滤条件。优先处理 AND，当一个过滤表达式涉及到多个 AND 和 OR 时，
-- 可以使用 () 来决定优先级，使得优先级关系更清晰。

-- IN 操作符用于匹配一组值，其后也可以接一个 SELECT 子句，从而匹配子查询得到的一组值。
-- NOT 操作符用于否定一个条件