#!/bin/sh
echo "what is your name?"
read NAME
mkdir $NAME
cd $NAME
echo "Task completed.May the force be with you."
for i in 1 2 3 4 5
do
touch $NAME$i.cpp
done
