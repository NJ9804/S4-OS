echo "Enter the number"
read n
f=1;
for((i=1;i<=n;i++))
{
	((f=f*i))
}
echo "The factorial is $f"
