// Andre Abrams, 9/3/2015
// Homework - Prison Classes

#include <iostream>
#include <cstdlib>
using namespace std;

class Prison
{
public:
	Prison( );
	int getCells();
	void setNumOfBedsPerCell( int );
	int getNumOfBedsPerCell( );
	void setCellCap( int );
	int getCellCap( );
	void setNumOfBeds();
	int getNumOfBeds();
    void setNumOfPrisoners( int );
	int getNumOfPrisoners( );

private:
	static const int cells = 40;
	int prisoners;
	int bedsPerCell;
	int cellCapacity;
	int numOfBeds;
};

Prison::Prison()
{
	bedsPerCell = 0;
	cellCapacity = 1;
}

int Prison::getCells( )
{
	return cells;
}
void Prison::setNumOfBedsPerCell( int numOfBedsPerCell )
{
	bedsPerCell = numOfBedsPerCell;
}

int Prison::getNumOfBedsPerCell( )
{
	return bedsPerCell;
}

void Prison::setCellCap( int cellCapInput )
{
	if (cellCapInput <= bedsPerCell + 1)
	{
		cellCapacity = cellCapInput;
	}
}

int Prison::getCellCap( )
{
	return cellCapacity;
}
void Prison::setNumOfBeds() 
{
	numOfBeds = (cellCapacity)* cells;

	cout << "---------------------\n";
	cout << "There are " << bedsPerCell << " beds per cell." << endl;
	cout << "The prison has " << cells << " cells." << endl;
	cout << "The prison has a cell capacity of " << cellCapacity << " prisoners per cell." << endl;
	cout << "So the prison holds " << numOfBeds << " prisoners." << endl;
	cout << "---------------------\n";
}
int Prison::getNumOfBeds() {
	return numOfBeds;
}
void Prison::setNumOfPrisoners( int numOfPrisoners )
{
	prisoners = numOfPrisoners;
}

int Prison::getNumOfPrisoners( )
{
	return prisoners;
}
