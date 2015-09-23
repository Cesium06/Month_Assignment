#ifndef Month_h
#define Month_h
#include <stdio.h>
#include <iostream>

class Month{
public:
	////////////////
	//Constructors//
	////////////////
	Month();
	Month(std::string);

	/////////////////////
	//Method prototypes//
	/////////////////////

	//Set
	void setMonthName(std::string);
	void setMonthNumber(int);

	//Get
	std::string getMonthName();
	int getMonthNumber();

	//Override Prototype
	friend std::ostream& Month::operator<<(std::ostream&, Month&);
	friend std::istream& Month::operator>>(std::istream&, Month&);

	//Overloads for increment and decrement
	Month& operator++();    //Prefix
	Month operator++(int);  //Postfix

	Month& operator--();    //Prefix
	Month operator--(int);  //Postfix


	//Member Variables
private:
	std::string MonthName;
	int MonthNumber;

};


#endif /* Month_cpp */
