#include<iostream>

using namespace std;
int main(){

/*-------Character Types----------*/

char middleInit {'F'};
cout<<"My Full Name is : John "<<middleInit<<" Kennedy"<<endl;


/*-------Integer Types----------*/

unsigned short int examScore{55}; // same as unsigned short examScore
cout<<"My exam score was "<<examScore<<endl;

int countriesRepresented{13}; 
cout<<"The countries represented in the meeting was "<<countriesRepresented<<endl;

long peopleInGzb{12600000}; // same as unsigned short examScore;
cout<<"Total people in Ghaziabad "<<peopleInGzb<<endl;

long peopleOnEarth{7'456'600'000};  
cout<<"Total people on the Earth is "<<peopleOnEarth<<endl;

long long distanceToGalaxy{921'823'556'800'000};
// Not using the list declaration sometimes does not warns while converting to
//narrow types
cout<<"Total distance to galaxy is "<<distanceToGalaxy<<endl;

/*------Boolean Type------------*/

bool gameOver {false};
cout<<"The value of gameOver is "<<gameOver<<endl;

/*-----Overflow Example---------*/

short value1 {30000};
short value2 {1000};
short product {value1 * value2}; // will give a warning

cout<<"The product of "<<value1<<" and "<<value2<<" is "<<product<<endl; 

return 0;
}
