NUMBER=0

# continue until integer overflow
while true
do
	echo "$NUMBER"
	echo "-$NUMBER"
	NUMBER=$(( NUMBER+1 ))	 # increments num
done