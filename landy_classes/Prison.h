/**************************************************************************************************/
//LANDY CAMOU
//CLASS PRISON
/**************************************************************************************************/

#include <string>
#include <iostream>
using namespace std;
class Prison
{
public:
	
	Prison();
	Prison(int, int);
	static int cellCounter;       //variable that counts how many cells have been assigned already, so it can't be more that 40 cells
	int const NumberofCells = 5;   // should be 40 but for checking purpose it is set to 5, 
	void setCells(int);
	void setNumberOfBeds(int);
	void setNumberOfPris(int);
	int getNumberOfBeds();
	int getNumberOfPris();
	int getNumberofCells();
	
	void Print();

	//set functions By Users

	void setCellsByUser();
	void setNumbOfBedByUser();
	void setNumbOfPrisByUser();

private:
	
	int NumberOfBeds, NumberOfPris;
	

};