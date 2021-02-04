NUMBER=0

# continue until integer overflow
while true
do
	echo $NUMBER\, -$NUMBER
	NUMBER=$(( NUMBER+1 ))	 # increments num
done
