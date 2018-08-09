#!/bin/sh
echo "Jarvis:what is your name?"
read NAME
echo "Jarvis:Well done!Your tasks have been completed. Anything else Mr. Stark?" 
mkdir $NAME
cd $NAME
touch $NAME.cpp
