//include the library
#include<iostream>
using namespace std;
//write the main function
int main(){
//define two float variables as fahrenheit and celsius
float fahrenheit,celsius;
//input the tempratue in celsius
cout <<" Enter temprature in degree celsius... "<<endl;
//absorb the value in celsius
cin >>celsius;
//perform the necessary operations to convert celsius into fahrenheit
fahrenheit = (celsius*9.0)/5.0+32;
//display the converted value
cout <<" The temprature corresponds to "<<fahrenheit<<" degree Fahrenheit "<<endl;
//terminate the program
return 0;
}

