//LANDY CAMOU
//MAIN
/*************************************************************************************************************************************************/
//The first part of this code use defaul constructor and constructor with entries. The data is type using those constructors from main.
//The second part of this code asks the user to enter the data by the setByUser Functions.


#include <istream>
#include "PrisonersHeader.h"
#include "GuardsHeader.h"
#include "Prison.h"
#include <vector>
using namespace std;

int main()
{
	//*********************************************************************************************************************************************************************
	//*********************************************************************************************************************************************************************
	//THIS CODE IS FOR ENTERING DATA FROM MAIN.... NOT FROM A USER

	
	cout << "PRISON \n\n";
	Prison Cell1;          //using default constructor... cell1 will have default values
	
	cout << "CELL 1\n \n";
	cout << "Cell 1 Beds: " << Cell1.getNumberOfBeds ()<< "\n \n";
	cout << "Cell 1 Prisoners: " << Cell1.getNumberOfPris() << "\n \n";

	Prison Cell2(2, 7);    //using constructor that receives data... cell2 will have 2 beds and 7 prisoners (if allowed)
						   //in this case 7 prisoners are too many for a 2 bed cell... so the prisoner number will be set to the maximun of prisoners allowed
	cout << "CELL 2 \n\n";
	cout << "Cell 2 Beds: " << Cell2.getNumberOfBeds() << "\n \n";
	cout << "Cell 2 Prisoners: " << Cell2.getNumberOfPris() << "\n \n";
	
	cout << "\n BY NOW YOU HAVE CREATED " << Prison::cellCounter << " CELLS.!! 	\n\n";

	//constructor data:  sentence in months, time served in months, children, worked hours, cell number, health indicator(1-5), residence, visitors, pay rate.
	//entering correct data
	cout << "\n PRISONERS \n";
	cout << "PRISONER 1: \n";
	Prisoners Prisoner1(18, 10, 2, 50, 2, 5, "New York", "Mom  Dad", 5.3);
	Prisoner1.Print();
	cout << "\n\n\n";

	// entering wrong data so set functions will set valid numbers or zeros
	
	cout << "PRISONER 2: \n";
	Prisoners Prisoner2(-8, -5, 4, 68, 7, 3, "New York", "Mom  Dad", -7);   //-8, -5 , -7 are invalid entries
	Prisoner2.Print();
	cout << "\n\n\n";

	cout << "PRISONER 3: \n";
	Prisoners Prisoner3(18, 20, 4, 68, 7, 3, "New York", "Mom  Dad", 4.5);   // 20 months time served is invalid becasue is greater than the sentence
	Prisoner3.Print();
	cout << "\n\n\n";


	//USING GUARDS CLASS
	cout << "\n\n\n GUARDS \n";
	//constructor data: favorite weapon, beating place, gang, probation status, steroid use (1 or 0), infractions
	Guards Guard1("Gun", "Office", "BadDogs", "whatever", 1, 45);
	Guard1.Print();



	//**********************************************************************************************************************************************************************
	//**********************************************************************************************************************************************************************
	

	

	//THIS CODE IS FOR GIVING THE USER THE ABILITY OF ENTERING DATA
	
	cout << "********   MY PRISON *************************** \n\n";

	Prisoners Prisoner1_1;
		Prisoner1_1.setSentByUser();
		Prisoner1_1.setTimeServByUser();
		Prisoner1_1.setChildrenByUser();
		Prisoner1_1.setCellNumByUser();
		Prisoner1_1.setHealthByUser();
		Prisoner1_1.setResidByUser();
		Prisoner1_1.setVisitByUser();
		Prisoner1_1.setPayRateByUser();
		Prisoner1_1.setWorkHouByUser();
		Prisoner1_1.Print();



		//CODE FOR CREATING A VECTOR OF PRISON OBJECTS
		int CreatedCells = Prison::cellCounter;     //getting the number of already created cells..this is just for printing vector objects purpose 
		vector<Prison> PrisonCellsVector;     //creating a vector of Prison objects (Cells)
		Prison Cell;
		Cell.setNumbOfBedByUser();
		Cell.setNumbOfPrisByUser();          //creating first cell of the of class Prison
		PrisonCellsVector.push_back(Cell);   //pushing Prison object into Prison Vector

		do
		{
			Prison Cell;
			Cell.setNumbOfBedByUser();            //do loop to continue pushing Prison objects into Prison Vector
			Cell.setNumbOfPrisByUser();           //should be 40 cells but here are only 5 just for checking
			PrisonCellsVector.push_back(Cell);

		} while (Prison::cellCounter < Cell.getNumberofCells());   //do loop finish once we have created the number of cells that are allowed for the prison
																	// it depends of the variable NumberofCells

		cout << "\n PRISON  CELLS \n\n ";
		for (int i = 0; i < Prison::cellCounter-CreatedCells; i++)                
		{                        
			                    //printing Prison Objects from Vector (cells)
			cout << "\nCell #" << i+1+CreatedCells << "\n";
			PrisonCellsVector[i].Print();
		}
		
	system("pause");
}