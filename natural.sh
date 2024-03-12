echo "Enter the limit"
read n
sum=0
for((i=1;i<=n;i++))
{
	((sum=sum+i))
}
echo "The sum is $sum"
