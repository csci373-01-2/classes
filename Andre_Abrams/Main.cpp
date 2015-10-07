#include <iostream>
#include <cstdlib>
#include <string>
#include "Prison.h"
using namespace std;


int main(int argc, char *argv[]) 
{
	Prison johnJay;
	int localCells = -111;

	localCells = johnJay.getCells();
	cout << "The number of cells is: " << johnJay.getCells() << endl;
	johnJay.setNumOfBedsPerCell(2);
	cout << "The number of beds per cell is: " << johnJay.getNumOfBedsPerCell() << endl;
	johnJay.setCellCap(3);
	cout << "The cell capacity is: " << johnJay.getCellCap() << endl;
	johnJay.setNumOfBeds();
	cout << "The prison has a maximum capacity of: " << johnJay.getNumOfBeds() << endl;
	johnJay.setNumOfPrisoners(110);
	cout << "The number of prisoners is: " << johnJay.getNumOfPrisoners() << endl;
	cout << endl;

	system("pause");
	return 0;
}