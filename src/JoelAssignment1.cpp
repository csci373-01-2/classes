//Created by Joel Sierra on 9/15/15.
//Copyright (c) 2015 Joel Sierra. All rights reserved.

#include <iostream> 
#include <string>
using namespace std;

class Prison{
public:
	int Cells; // initialaize the number of cells in the prison to 40.
	int c; //for cells
	void setCellsof(int c) //setter for number of cells
	{
		int Cells = c; //made cells equal to c
	}
	int getCellsof() //getter for number of cells
	{
	{return Cells;}
	}

	int prisoners; //Initalize prisoners. Private
	int p;
	void setprisonersof(int p) // setter for number of prisoners
	{
		int prisoners = p; // made prisoners equal to p
	}
	int getprisonersof()
	{
	{return prisoners;}
	}

    int NumBeds;
	int Nb; 
    	void setNumofBeds(int Nb)
    	{
           int NumBeds = Nb;
    	}
        int getNumofBeds()
        {
        {return NumBeds;}
        }

private:
	int Numbeds;

};

    class Prisoners{
    public:
        int Sm;
        void setSentenceofMonths(int Sm)
        {
        	int SentenceMonths = Sm;
        }
        int getSentenceofMonths()
        {
        {return SentenceMonths;}
        }

        int Ts;
        void setTimeofServed(int Ts)
        {
        	int TimeServed = Ts;
        }
        int getTimeofServed()
        {
        {return TimeServed;}
        }


        int Tr;
        void setTimeofReleased(int Tr)
        {
        	int TimeReleased = Tr;
        }
        int getTimeofReleased()
        {
        {return TimeReleased;}
        }


        int Nc;
        void setNumofChildren(int Nc)
        {
        	int NumChildren = Nc;
        }
        int getNumofChildren()
        {
        {return NumChildren;}
        }

        float Hw;
        void setHoursofWorked(float Hw)
        {
        	float HoursWorked = Hw;
        }
        float getHoursofWorked()
        {
        {return HoursWorked;}
        }

        float Cb;
        void setCommofBalance(float Cb)
        {
        	float CommBalance = Cb;
        }
        float getCommofBalance()
        {
        {return CommBalance;}
        }

        float Pr;
        void setPayofRate(float Pr)
        {
        	float PayRate = Pr;
        }
        float getPayofRate()
        {
        {return PayRate;}
        }

        int Hc;
        void setHealthofCondition(int Hc)
        {
        	int HealthCondition = Hc;
        }
        int getHealthofCondition()
        {
        {return HealthCondition;}
        }

        int Cn;
        void setCellofNumber(int Cn)
        {
        	int CellNumber = Cn;
        }
        int getCellofNumber()
        {
        {return CellNumber;}
        }

        string Av;
        void setApprovofVisitors(string Av)
        {
        	string ApprovVisitors = Av;
        }
        string getApprovofVisitors()
        {
        {return ApprovVisitors;}
        }

        string La;
        void setLastofAdd(string La)
        {
        	string LastAdd = La;
        }
        string getLastofAdd()
        {
        {return LastAdd;}
        }

    private:
	    int SentenceMonths;
	    int TimeServed;
	    int TimeReleased;
	    int NumChildren;
	    float CommBalance;
	    float HoursWorked;
	    float PayRate;
	    int HealthCondition;
	    int CellNumber;
	    string ApprovVisitors;
	    string LastAdd;
    };

    class Guards{
    public:
        string Fw;
        void setFavofWeapon(string Fw)
        {
        	string FavWeapon = Fw;
        }
        string getFavofWeapon()
        {
        {return FavWeapon;}
        }

        char Sd;
        void setSteroidof(char Sd)
        {
        	char Steroid = Sd;
        }
        char getSteroidof()
        {
        {return Steroid;}
        }

        string Pp;
        void setPreferredofPlace(string Pp)
        {
        	string PreferredPlace = Pp;
        }
        string getPreferredofPlace()
        {
        {return PreferredPlace;}
        }

        int Ni;
        void setNumofInfractions(int Ni)
        {
        	int NumofInfractions = Ni;
        }
        int getNumofInfractions()
        {
        {return NumInfractions;}
        }

        string CB;
        void setContraofBand(string CB)
        {
        	string ContraBand = CB;
        }
        string getContraofBand()
        {
        {return ContraBand;}
        }

        char Ps;
        void setProbationofStatus(char Ps)
        {
        	char ProbationStatus = Ps;
        }
        char getProbationofStatus()
        {
        {return ProbationStatus;}
        }

        string Ga;
        void setGangofAffiliation(string Ga)
        {
        	string GangAffiliation = Ga;
        }
        string getGangofAffiliation()
        {
        {return GangAffiliation;}
        }

    private:
	    string FavWeapon;
	    char Steroid;
	    string PreferredPlace;
	    int NumInfractions;
	    string ContraBand;
	    char ProbationStatus;
	    string GangAffiliation;
    };

int main()
{
Prison Cells;
Cells.setCellsof(40);

Prison NumBeds1;
NumBeds1.setNumofBeds(2);

Prison prisoners1;
prisoners1.setprisonersof(3);

Prisoners SentenceMonths1;
SentenceMonths1.setSentenceofMonths(48);

Prisoners TimeServed1;
TimeServed1.setTimeofServed(18);

Prisoners TimeReleased1;
TimeReleased1.setTimeofReleased(SentenceMonths1.getSentenceofMonths() - TimeServed1.getTimeofServed());

Prisoners NumChildren1;
NumChildren1.setNumofChildren(4);

Prisoners LastAdd1;
LastAdd1.setLastofAdd("666 Astoria Queens");

Prisoners ApprovVisitors1;
ApprovVisitors1.setApprovofVisitors("Yes");

Prisoners HoursWorked1;
HoursWorked1.setHoursofWorked(25.40);

Prisoners PayRate1;
PayRate1.setPayofRate(00.10);

Prisoners CommBalance1;
CommBalance1.setCommofBalance(2.00);

Prisoners CellNumber1;
CellNumber1.setCellofNumber(37);

Prisoners HealthCondition1;
HealthCondition1.setHealthofCondition(2);

Guards FavWeapon1;
FavWeapon1.setFavofWeapon("Twigs");

Guards Steroid1;
Steroid1.setSteroidof('1'); //1 for yes, 0 for no

Guards PreferredPlace1;
PreferredPlace1.setPreferredofPlace("Cafeteria");

Guards NumInfractions1;
NumInfractions1.setNumofInfractions(12);

Guards ContraBand1;
ContraBand1.setContraofBand("Cociane");

Guards ProbationStatus1;
ProbationStatus1.setProbationofStatus('Y');//Write function

Guards GangAffiliation1;
GangAffiliation1.setGangofAffiliation("The Silly Weinies");

//Output for prisoners
std::cout << "There are " << Cells.getCellsof() << " cells in this prison " << std::endl;
std::cout << "There are "<< NumBeds1.getNumofBeds()<< " beds and " << prisoners1.getprisonersof() << " prisoners " << " In this Cell " <<  std::endl;
std::cout << "This prisoner is sentenced to " << SentenceMonths1.getSentenceofMonths()<<" Months "<< std::endl;
std::cout << "This prisoner served " << TimeServed1.getTimeofServed()<<" Months "<< std::endl;
std::cout << "This prisoner will be released in " << TimeReleased1.getTimeofReleased()<<" Months "<< std::endl;
std::cout << "This prisoner has " << NumChildren1.getNumofChildren() <<" Children " << std::endl;
std::cout << "The prisoners last address is " << LastAdd1.getLastofAdd() << std::endl;
std::cout << "Is the prisoner approved for visitors? " << ApprovVisitors1.getApprovofVisitors() << std::endl;
std::cout << "The prisoner worked " << HoursWorked1.getHoursofWorked() << " hours " << std::endl;
std::cout << "The prisoner makes " << PayRate1.getPayofRate() << " per hour " << std::endl;
std::cout << "The prisoner has $" << CommBalance1.getCommofBalance() << " left in their commisary account " << std::endl;
std::cout << "The prisoners cell number is " << CellNumber1.getCellofNumber() << std::endl;
std::cout << "The prisoners health condition is " << HealthCondition1.getHealthofCondition() << std::endl;

//Output for Guards
    std::cout << "The the guards favorite weapon is a " << FavWeapon1.getFavofWeapon() << std::endl;
    std::cout << "This guards steriod use indicator is " << Steroid1.getSteroidof() << std::endl;
    std::cout << "This guards favorite place to beat prisoners is the " << PreferredPlace1.getPreferredofPlace() << std::endl;
    std::cout << "This guards has " << NumInfractions1.getNumofInfractions() << " Infractions " << std::endl;
    std::cout << "This guards has brought " << ContraBand1.getContraofBand() << " into the prison " << std::endl;
    std::cout << "Is this guard on probation? " << ProbationStatus1.getProbationofStatus() << std::endl;
    std::cout << "This guard is affiliated with the " << GangAffiliation1.getGangofAffiliation() << " Gang " << std::endl;
    system("pause");
    return 0;
    
}