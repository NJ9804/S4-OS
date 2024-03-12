echo "1--Area of circle"
echo "2--Circumferance of circle"
echo "3--Area of rectangle"
echo "4--Area of square"
read c
case $c in
	 1) echo "Enter the radius"
		read r
		area=$( echo "scale=2;(3.14*$r*$r)"|bc)
		echo "$area is the area of circle"
		;;
	 2) echo "Enter the radius"
		read r
		area=$(echo "scale=2;(2*3.14*$r)"|bc)
		echo "$area is the circumferance"
		;;
	 3) echo "Enter the length"
		read l
		echo "Enter the breadth"
		read b
		((area=l*b))
		echo "$area is the area of rectangle"
		;;
	4) echo "Enter the side of square"
		read s
		((area=s*s))
		echo "$area is the area of square"
		;;
esac



