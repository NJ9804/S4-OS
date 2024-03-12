echo "Enter the limit"
read n
sum=0
for((i=1;i<=n;i++))
{
	((sum=sum+i))
}
avg=0
avg=$( echo "scale=2;($sum/$n)"|bc)
echo "The avg is $avg"
