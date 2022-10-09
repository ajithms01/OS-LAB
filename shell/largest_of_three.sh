echo "Enter first number :"
read n1
echo "Enter second number :"
read n2
echo "Enter third number :"
read n3

if [ $n1 -gt $n2 ] && [ $n1 -gt $n3 ]
then
echo "$n1 is largest"
elif [ $n2 -gt $n3 ]
then 
echo "$n2 is largest"
else
echo "$n3 is largest"
fi
