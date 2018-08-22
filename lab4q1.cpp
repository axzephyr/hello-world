//include library
#include<iostream>
using namespace std;
//write the main function
int main(){
//define a variable in float as centimetres
float centimetres;
//input the amount of cms
cout <<" Convert how many centimetres to kilometres and metres? "<<endl;
//command the program to get the variable centimetres
cin >>centimetres;
//define a variable as kilometres and convert centimetres into it.
float kilometres= centimetres/100000;
//print out the results
cout <<" this corresponds to "<<kilometres<<" km  "<<endl;
//define a variable as metres and express centimetres as metres
float metres= centimetres/100;
//print out the result
cout <<" this corresponds to "<<metres<<" mts"<<endl;






//end the program
return 0;
} 
