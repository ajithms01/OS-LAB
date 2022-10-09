echo "enter a number"
read n
if [ $(( n % 2 )) == 0 ]
then 
echo "Number is even"
else
echo "Number is odd"
fi
