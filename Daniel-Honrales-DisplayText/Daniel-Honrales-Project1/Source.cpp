/*
Daniel Honrales - 9/21/17 - 3rd Period
Display Text
Starting a new project and displaying text in the console
*/

//Libraries
#include <iostream>// gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h>// gives access to _kbhit() and _getch() for pause()

//Namespaces
using namespace std;

//Functions{}
void pause() {
	cout << "Press any key to continue..."; 
	while (!_kbhit()); 
	_getch();
	cout << '\n';
}
//MAIN
void main() {
	
	//Define and Assign your variables
	int period = 3;
	
	//Display Text
	cout << "Daniel Honrales" << endl;
	cout << period << "rd Period" << endl;
	cout << "Hello World" << endl;
	
	pause(); //pauses to see the displayed text
}