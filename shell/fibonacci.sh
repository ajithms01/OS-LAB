echo "Enter the number of terms"
read n
n1=0
n2=1
echo "$n1"
for ((i=2;i<=n;i++))
do
next=$((n1+n2))
echo "$next"
n1=$n2
n2=$next
done
