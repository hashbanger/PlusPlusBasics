// author - hashbanger

#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){

cout<<"Hello World"<<endl;

cout<<"Hello";
cout<<"world"<<endl;

cout<<"Hello World!"<<endl;
cout<<"Hello"<<"World!"<<endl;
cout<<"Hello"<< "World!\n";
cout<<"Hello\nOut\nThere\n";

int num1;
int num2;
double num3;

cout<<"Enter an Integer: ";
cin>>num1;
cout << "You entered: "<< num1<<endl;

cout<<"Enter the first integer: ";
cin>>num1;

cout<<"Enter the second integer: ";
cin>>num2;
cout<<"You entered "<<num1<<" and "<<num2<<endl;

cout<<"Enter two space separated integers";
cin>> num1>>num2;
cout<<"You entered "<<num1<<" and "<<num2<<endl;

cout<<"Enter a double ";
cin>>num3;
cout<<"You entered "<<num3<<endl;

cout<< "Enter an integer";
cin>>num1;
cout<<"Enter a double";
cin>>num3;

cout<<"The integer is: "<<num1<<endl;
cout<<"And the double is: "<<num3<<endl;

return 0;
}
