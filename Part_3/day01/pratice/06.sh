#!/bin/bash
s=0
for ((i = 1; i <= 100; i = i + 1)); do
	s=$(($s + $i))
done
echo "the sum is $s"
