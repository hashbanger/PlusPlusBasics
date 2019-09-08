// author - hashbanger

#include<iostream>

using namespace std;

int main(){

// int a = 0;  C like initialization 
//int a (0);   Constructor like initialization
// int a {0};  C++11 like initialization


cout<<"Enter length of room"<<endl;
int roomLength{0};
cin>>roomLength;

cout<<"Enter width of the room"<<endl;
int roomWidth{0};
cin>>roomWidth;

cout<<"The area of the room is: "<<roomWidth * roomLength<<endl;

return 0;
}
