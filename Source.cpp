/*
//Name: Jonathan Cesari
//Date: 9/21/2015
//Program: Assignment 3, Question 7
//Problems: N/A
//Comments: Produces a month based on Month class that can be incremented or decremented. Operations have been overloaded.
*/
#include <iostream>
#include <string>
#include "Month.h"

using namespace std;

int main(int argc, const char * argv[]) {
	//Object instansation
	Month newMonth;

	//User enter variables to be used to create output
	string month = "";
	char incrementValue;
	bool cont = true;	//Used to maintain loop
	bool increment = false; //Used to allow incrementing

	while (cont){
			
		//Request numerical value of the money, overloaded cin and cou
		cin >> newMonth;
		cout << newMonth;

		//Ask user whether they'd like to increment/decrement the month by 1
		cout << "Do you wish to increment the month? (Enter 0 for No and 1 For Yes)" << endl; 
		cin >> increment;

		//If yes....
		while (increment){
			//Add or subtract?
			cout << "Enter '+' to add 1. Enter '-' to subtract 1." << endl;
			cin >> incrementValue;

			//Add or subtract based on users request, uses overloaded deincrement and increment functions
			if (incrementValue == '+')
				newMonth++;
			else if (incrementValue == '-')
				newMonth--;
			else
				return 0;
			
			//Outputs name with build in functions
			cout << newMonth;


			//Asks if you'd like to continue altering month value
			if (newMonth.getMonthNumber() != 0){
				cout << "Do you wish to increment the month? (Enter 0 for No and 1 For Yes)" << endl;
				cin >> increment;
			}
			//Breaks if no
			else{
				increment = false;
				break;
			}
		}

		//Asks user if they wish to enter another month, starts over
		cout << "Do you wish to enter another month? (Enter 0 for No and 1 For Yes)" << endl;
		cin >> cont;

	}

	return 0;
}
