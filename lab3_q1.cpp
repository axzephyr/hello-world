// first include library
#include<iostream>
using namespace std;
// write the main function
int main(){
// declaring basic data types
int q=6.023;
float w=2.303;
char e='a';
bool r=(2>=3);
double t=23;
// display the outcomes of the variables q,w,e,r
cout <<q<<endl;
cout <<w<<endl;
cout <<e<<endl;
cout <<r<<endl;
cout <<t<<endl;
// display the sizes allocated to each data type
cout <<"the size of int data type is "<<sizeof(q)<<" bytes"<<endl;
cout <<"the size of float data type is "<<sizeof(w)<<" bytes"<<endl;
cout <<"the size of char data type is "<<sizeof(e)<<" bytes"<<endl;
cout <<"the size of bool data type is "<<sizeof(r)<<" bytes"<<endl;
cout <<"the size of double data type is "<<sizeof(t)<<" bytes"<<endl;
// end the program
return 0;
}
