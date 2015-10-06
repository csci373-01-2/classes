// Andre Abrams, 9/3/2015
// Homework - Prison Classes

#include <iostream>
using namespace std;

class Prison
{
public:
	void prison( );
	void setNumOfBeds( int );
	int getNumOfBeds( );
	void setNumOfPrisoners( int );
	int getNumOfPrisoners( );
	void setCellCap( );
	int getCellCap( );


private:
	static const int cells = 40;
	int prisoners;
	int bedsPerCell;
	static const int cellCapacity = 3;
};

void Prison::setNumOfBeds( int numOfBeds )
{
	bedsPerCell = numOfBeds;
}

int Prison::getNumOfBeds( )
{
	return bedsPerCell;
}

void Prison::setNumOfPrisoners( int numOfPrisoners )
{
	prisoners = numOfPrisoners;
}

int Prison::getNumOfPrisoners( )
{
	return prisoners;
}

void Prison::setCellCap( )
{
	int cellCapacity = bedsPerCell + 1;
}

int Prison::getCellCap( )
{
	return cellCapacity;
}