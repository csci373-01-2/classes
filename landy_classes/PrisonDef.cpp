//*********************************************************************************************************
//LANDY CAMOU
//DEFINITION OF THE CLASS PRISON
//**********************************************************************************************************

#include "Prison.h"
#include <iostream>
using namespace std;


int Prison::cellCounter = 0;   //setting static variable cellCounter to zero.

//CONSTRUCTORS
//Default constructor

Prison::Prison()
{
	NumberOfBeds = 1;
	NumberOfPris = 1;
	cellCounter++;             //adding 1 to cellCounter each time default constructor is used to create an object of class Prison
	setCells(cellCounter);    //calling setCells function to check if we dont have more than 40 cells
}

Prison::Prison(int numBeds, int NumPris)
{
	setNumberOfBeds(numBeds);
	setNumberOfPris(NumPris);
	cellCounter++;				//adding 1 to cellCounter each time constructos with entries is used to create an object of class Prison
	setCells(cellCounter);      //calling setCells function to check if we dont have more than 40 cells
}

//set and get functions definition

void Prison::setCells(int cellCount)   //this function checks if we dont have more than 40 cells
{
	if (cellCount > NumberofCells)
	{
		cout << "\n \n No More Cells allowed for this Prison... \n\n";
		system("pause");
		exit(0);
	}
	
}

int Prison::getNumberofCells()
{
	return NumberofCells;

}


void Prison::setNumberOfBeds(int b)
{
	if (b <= 0)   //checking for an invalid number of beds
	{
		cout <<b<< " is an Invalid Number of Beds... It will be set to 1... \n";
		NumberOfBeds = 1;
	}else
	NumberOfBeds = b;
}
void Prison::setNumberOfPris(int p)
{
	if (p <= 0)   //checking for an invalid number of prisoners
		cout << p<< " is an Invalid Number of Prisoners... It will be set to 1.. \n";
	
	if (p > getNumberOfBeds() + 1)    //checking if number of prisoners is greater than  beds in the cell

	{     //we can have 1 more prisoner than beds in the cells
		cout << "Too many Prisoners for this Cell... Number Of Prisoners will be set to the Max Number of Prisoners allowed... \n";
		cout << "Number of beds is: " << getNumberOfBeds() << "  so, the number of prisoners allowed are: " << getNumberOfBeds() + 1 << " \n\n";
		//setting the number of prisoners to the max allowed which is 1 more then the number of beds
		NumberOfPris = getNumberOfBeds() + 1;    
	}
	else
		NumberOfBeds = p;


}

int Prison::getNumberOfBeds()
{
	return NumberOfBeds;

}

int Prison::getNumberOfPris()
{
	return NumberOfPris;

}

//SET BY USER FUNCTIONS

void Prison::setNumbOfBedByUser()
{
	while ((cout << "\n Please Enter the Number of Beds for this Cell: ") && (!(cin >> NumberOfBeds) || NumberOfBeds <= 0))
	{
		cout << NumberOfBeds << "Beds  is an Invalid Number... \n";
		cout << "The Number of Beds Must Be Grater Than Zero... Please Try Again !! \n\n";
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

void Prison::setCellsByUser()
{

}

void Prison::setNumbOfPrisByUser()
{
	while ((cout << "\n Please Enter the Number of Prisoners for this Cell: ") && (!(cin >> NumberOfPris) || NumberOfPris < 0 || NumberOfPris > NumberOfBeds + 1))
	{
		cout << "That is an Invalid Number... \n";
		cout << "Prisoners Number Must Be Grater Than Zero But NOT grater than The Number Of Beds + 1... Please Try Again !! \n\n";
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

}

void Prison::Print()
{

	cout << "\n Numbers of Beds: " << NumberOfBeds << "\n";
	cout << "Number of Prisoners: " << NumberOfPris << "\n";

}