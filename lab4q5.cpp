//include the library
#include<iostream>
using namespace std;
//initialize the main function
int main(){
//define three variables as the angles of a triangle
double A,B,C;
//write the lines to add two of the angles
cout <<" The first angle A of the triangle is (in degrees) "<<endl;
//absorb the angles
cin >>A;
cout <<" The second angle B of the triangle is (in degrees) "<<endl;
cin >>B;
//perform the required calculations
C = 180-(A+B);
cout <<" Angle C is "<<C<<" degrees "<<endl;
 









//terminate the program
return 0;
}
