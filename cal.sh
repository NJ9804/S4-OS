echo "Enter the 1st number"
read a
echo "Enter the 2nd number"
read b
echo "Enter the op"
read c
if [[ $c == '+' ]]
then
	((s=$a $c $b))
	echo "The sum is $s"
elif [[ $c == '-' ]]
then
	((s=$a $c $b))
	echo "The diff is $s"
elif [[ $c == "*" ]]
then
	((s=$a $c $b))
	echo "The multi is $s"
else
	((s=a/b))
	echo "The div is $s"
fi


