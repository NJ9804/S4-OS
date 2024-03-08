a=0
b=1
echo "Enter the limit"
read n
echo "The fibonnaci series is "
echo $a
echo $b
for((i=2;i<=n;i++))
{
	((c=a+b))
	echo $c
	((a=b))
	((b=c))
}

