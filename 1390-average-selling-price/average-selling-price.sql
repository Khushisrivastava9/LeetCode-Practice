select p.product_id,ifnull(round(sum(units*price)/sum(units),2),0) as average_price
from Prices as p
LEFT JOIN UnitsSold as u
on p.product_id=u.product_id
and u.purchase_date between p.start_date and p.end_date
group by p.product_id