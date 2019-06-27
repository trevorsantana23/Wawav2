// Code written by: Trevor Santana
#include <iostream>
#include <string>

using namespace std;

void names(string fname);

void myFunction(); //declaration of function.


int main(int argc, char *argv[]) { //Main program (The "brain").
names("Trevor");
names("Rebecca");
names("Matthew");
	myFunction();
	myFunction();
	myFunction();
}

void names(string fname){
	cout << fname << " Santana\n";
}


void myFunction(){ //Defining the function.
	cout << "Hello!\n";
}
