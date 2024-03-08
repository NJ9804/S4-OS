echo "Enter the 1st number"
read a
echo "Enter the 2nd number"
read b
echo "Enter the 3rd number"
read c
if((a>b))
then 
	if((a>c))
	then 
		echo "$a is largest"
	fi
elif((b>a))
then 
	if((b>c))
	then
		echo "$b is the largest"
	else
		echo "$c is the largest"
	fi
else
	echo "$c is the largest"
fi
