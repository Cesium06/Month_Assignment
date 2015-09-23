#include "Month.h"
#include <string>
#include <iostream>

//Enumeration to compare numeric values for each month
//Used for clarity when coding
enum MonthsOfYear
{
	undef,	//0
	January,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December	//12
};

///////////////////////
//Constructors////////
///////////////////////

Month::Month(){
	MonthNumber = January;
	MonthName = "January";

}

//Contructor sets the value of MonthNumber based on parameter string
Month::Month(std::string name){

	if (name == "January"){
		setMonthName(name);
	}
	else if (name == "February"){
		setMonthName(name);
	}
	else if (name == "March"){
		setMonthName(name);
	}
	else if (name == "April"){
		setMonthName(name);
	}
	else if (name == "May"){
		setMonthName(name);
	}
	else if (name == "June"){
		setMonthName(name);
	}
	else if (name == "July"){
		setMonthName(name);
	}
	else if (name == "August"){
		setMonthName(name);
	}
	else if (name == "September"){
		setMonthName(name);
	}
	else if (name == "October"){
		setMonthName(name);
	}
	else if (name == "November"){
		setMonthName(name);
	}
	else if (name == "December"){
		setMonthName(name);
	}

	//Used to determine whether a name is an actual MonthName
	//If it is not, set MonthNumber to 0 and MonthName to whatever user input
	else{
		MonthName = "January";
		MonthNumber = January;
	}
}


///////////////////////
//Method declarations//
///////////////////////

//Set Declarations
//Follows simliar pattern of above constructor. accepts month name and sets the member variables
void Month::setMonthName(std::string name){

	if (name == "January"){
		MonthNumber = January;
		MonthName = name;
	}
	else if (name == "February"){
		MonthNumber = February;
		MonthName = name;
	}
	else if (name == "March"){
		MonthNumber = March;
		MonthName = name;
	}
	else if (name == "April"){
		MonthNumber = April;
		MonthName = name;
	}
	else if (name == "May"){
		MonthNumber = May;
		MonthName = name;
	}
	else if (name == "June"){
		MonthNumber = June;
		MonthName = name;
	}
	else if (name == "July"){
		MonthNumber = July;
		MonthName = name;
	}
	else if (name == "August"){
		MonthNumber = August;
		MonthName = name;
	}
	else if (name == "September"){
		MonthNumber = September;
		MonthName = name;
	}
	else if (name == "October"){
		MonthNumber = October;
		MonthName = name;
	}
	else if (name == "November"){
		MonthNumber = November;
		MonthName = name;
	}
	else if (name == "December"){
		MonthNumber = December;
		MonthName = name;
	}

	else{
		MonthNumber = January;
		MonthName = "January";
	}
}


//This method accept the month's number and assigns that to MonthNumber
//This also assigns the MonthName based on the month value
//Enum is used for comparions January Through December is 1-12, 0 is a value reserved for invalid month names
void Month::setMonthNumber(int monthNumber){
	if (monthNumber == January){
		MonthName = "January";
		MonthNumber = monthNumber;
	}
	else if (monthNumber == February){
		MonthName = "February";
		MonthNumber = monthNumber;
	}
	else if (monthNumber == March){
		MonthName = "March";
		MonthNumber = monthNumber;
	}
	else if (monthNumber == April){
		MonthName = "April";
		MonthNumber = monthNumber;
	}
	else if (monthNumber == May){
		MonthName = "May";
		MonthNumber = monthNumber;
	}
	else if (monthNumber == June){
		MonthName = "June";
		MonthNumber = monthNumber;
	}
	else if (monthNumber == July){
		MonthName = "July";
		MonthNumber = monthNumber;
	}
	else if (monthNumber == August){
		MonthName = "August";
		MonthNumber = monthNumber;
	}
	else if (monthNumber == September){
		MonthName = "September";
		MonthNumber = monthNumber;
	}
	else if (monthNumber == October){
		MonthName = "October";
		MonthNumber = monthNumber;
	}
	else if (monthNumber == November){
		MonthName = "November";
		MonthNumber = monthNumber;
	}
	else if (monthNumber == December){
		MonthName = "December";
		MonthNumber = monthNumber;
	}
	else{
		MonthNumber = January;
		MonthName = "January";
	}
}

//Get Declarations
//Retrurns the MonthName in 2 ways. First if it's an invalid name, tell the user
//Second if its a valid name, simply return the MonthName to the user
std::string Month::getMonthName(){
	if (MonthNumber == undef){
		return MonthName + " is an invalid month!";
	}
	else
		return MonthName;
}
//Retrurns the MonthNumber in 2 ways. First if it's an invalid number, reply with undef (0 from enumerations)
//Second if its a valid number, simply return the MonthNumber to the user
int Month::getMonthNumber(){
	if (MonthNumber == undef){
		std::cout << "This is invalid: ";
		return undef;
	}
	else
		return MonthNumber;
}


/////////////////
////Overloads////
////////////////
//Prefix
Month& Month::operator++(){

	MonthNumber++;
	this->setMonthNumber(this->MonthNumber);	//Update Month and Numerical Month
	return *this;
}

//Postfix
Month Month::operator++(int value){
	Month temp = *this;

	++*this;

	this->setMonthNumber(this->MonthNumber);	//Update Month and Numerical Month

	return temp;
}

//Prefix
Month& Month::operator--(){
	MonthNumber--;
	this->setMonthNumber(this->MonthNumber);	//Update Month and Numerical Month

	return *this;
}

//Postfix
Month Month::operator--(int value){
	Month temp = *this;
	--*this;

	this->setMonthNumber(this->MonthNumber);		//Update Month and Numerical Month
	return temp;
}

//Overloaded output/input stream for the Month class

std::ostream& operator<<(std::ostream& os, Month& Month){
	os << "Month: " << Month.getMonthName() << std::endl;
	os << "Month Number: " << Month.getMonthNumber() << std::endl;
	return os;
}

std::istream& operator>>(std::istream& inputStream, Month& Month){
	std::cout << "Please enter a valid month's numerical representation (1 to 12)?" << std::endl;
	inputStream >> Month.MonthNumber;

	Month.setMonthNumber(Month.MonthNumber);

	return inputStream;
}