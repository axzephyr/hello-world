//include the library
#include<iostream>
#include<cmath>
using namespace std;
//initialize the main function
int main(){
//define the variables as the base,heightand the area of the triangle
float base,height,area;
//ask the user for the height and the base, capture the two values
cout <<" The base length of the triangle is "<<endl;
cin >>base;
cout <<" The height of the triangle is "<<endl;
cin >>height;
//calculate the area using the data
area = base*height*(1)/2;
//display the area
cout <<" the area of the triangle is "<<area<<" square units "<<endl;
//terminate the program
return 0;
}

