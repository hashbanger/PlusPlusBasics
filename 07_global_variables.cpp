#include<iostream>

using namespace std;

int age {18};

int main(){

int age{17}; // overwrites the outer in case of local scope

cout << "The age is "<<age<<endl;

return 0;
}
