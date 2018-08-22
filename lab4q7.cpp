//include the library
#include<iostream>
#include<cmath>
using namespace std;
//begin the main function
int main(){
//define variables that corresponds to length of a side and the area of an equilateral triangle
float length,area;
//input the value of side of the triangle
cout <<" The side length of the equilateral triangle is "<<endl;
//input length
cin >>length;
//perform the calculations required
area = length*length*sqrt(3)/4;
//display the area
cout <<" the area of the triangle is "<<area<<" square units. "<<endl;








//terminate the program
return 0;
} 
