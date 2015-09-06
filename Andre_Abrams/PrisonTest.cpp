#include <iostream>
using namespace std;

class Prisoner
{
public:
	void PrisonTime( int, int );
	void setNumChildren( int );
	void setRes( string );
	void setVisitor( string );
	void setHoursWorked( int );
	void setPayRate( float );
	void setBalance( );
	void setCellNum( int );
	void setHealth( int );

private:
	int sentenceMonths;
	int timeServed;
	int untilRelease;
	int numOfChildren;
	string residence;
	string visitors[3];
	int hoursWorked;
	float payRate;
	float balance;
	int cellNum;
	int health;
	

};

void Prisoner::PrisonTime( int sentence, int timeSpent )
	{
		sentenceMonths = sentence;
		timeServed = timeSpent;
		untilRelease = sentence - timeSpent;
	}

void Prisoner::setNumChildren( int children )
	{
		numOfChildren = children;
	}

void Prisoner::setRes( string lastRes )
	{
		residence = lastRes;
	}

void Prisoner::setVisitor( string vis )
	{
		for( int i = 0; i < 3; i++ )
			visitors[i] = vis;
	}

void Prisoner::setHoursWorked( int hours )
	{
		hoursWorked = hours;
	}

void Prisoner::setPayRate( float pay )
	{
		payRate = pay;
	}

void Prisoner::setBalance( )
	{
		balance  = hoursWorked * payRate;
	}

void Prisoner::setCellNum( int cell )
	{
		if( cell > 0 && cell <= 40)
			cellNum = cell;
		else
			cout << "Invalid cell number. Must be between 1 and 40." << endl;
	}

void Prisoner::setHealth( int healthVal )
	{
		if( healthVal >= 0 && healthVal <= 5)
			health = healthVal;
		else
			cout << "Invalid health value. Must be between 1 and 5." << endl;
	}