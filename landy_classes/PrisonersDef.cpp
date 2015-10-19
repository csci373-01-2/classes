//*********************************************************************************************************
//LANDY CAMOU
//DEFINITION OF THE CLASS PRISONERS
//**********************************************************************************************************


#include "PrisonersHeader.h"

using namespace std;


//CONSTRUCTORS

//Default constructor
Prisoners::Prisoners()
{
	SentenceMonths = 0;
	TimeServed = 0;
	TimeToRelease = 0;
	Children = 0;
	WorkedHours = 0; 
	CellNumber = 0;
	HealthCond = 0;
	LastResidence = "None";
	Visitors= "None";
	PayRate = 3.0;                //minimum pay rate
	Balance = 0;
}

//constructor with entries

Prisoners::Prisoners(int sent, int timeServ, int child, int workHou, int cellNum, int health, string Res, string Vis, float payR)
{
	setSentence(sent);
	setTimeServed(timeServ);
	setChildren(child);
	setWorkedHours(workHou);
	setCellNumber(cellNum);
	setHealth(health);
	LastResidence = Res;
	Visitors = Vis;
	setPayRate(payR);
	
}

//FUNCTIONS DEFINITION

void Prisoners::setSentence(int s)
{
	if (s <= 0)   //checking if sentence is an invalid number
	{
		cout << s<< " Months is an Invalid Sentence... \n";
		cout << "Sentence will be set to 0... \n\n";
		SentenceMonths = 0;
	}else
	SentenceMonths = s;
}


void Prisoners::setTimeServed(int t)
{
	if (t <  0 || t > SentenceMonths)   //checking if time served is less than zero or greater than sentence
	{
		cout << t <<" Months is an Invalid Time Served... \n";
		cout << "Time Served will be set to 0... \n \n";
		TimeServed = 0;
	}
	else
	{
		TimeServed = t;
	}

	setTimeToRelease(SentenceMonths, TimeServed);
}

void Prisoners::setTimeToRelease(int s, int t)
{
	TimeToRelease = s - t;      //calculating time to release
}

void Prisoners::setChildren(int ch)
{
	if (ch < 0)
	{
		cout << ch<< " is an Invalid Number of Children... \n";
		cout << "Number of Children  will be set to 0... \n \n";
		Children = 0;
	}else
	Children = ch;
}

void Prisoners::setWorkedHours(int wh)
{
	if (wh < 0)
	{
		cout << wh << " is an Invalid Number of Hours... \n";
		cout << "Worked Hours will be set to 0... \n \n";
		WorkedHours = 0;
	}else
	WorkedHours = wh;
}

void Prisoners::setCellNumber(int cell)
{
	
	if (cell <= 0 )
	{
		cout << "Cell Number "<<cell<< " is Invalid...\n";
		cout << "Cell Number will be set to 0... \n \n";
		CellNumber = 0;
	}else
	CellNumber = cell;
}

void Prisoners::setHealth(int h)
{
	if (h <= 0 || h>5 )
	{
		cout << h<< " is an Invalid Health Indicator... (It must be from 1 to 5... 1 is Poor, 5 is Excellent... \n";
		cout << "Health Indicator will be set to 0... \n \n";
		HealthCond = 0;
	}else
	HealthCond = h;
}

void Prisoners::setResidence(string r)
{
	LastResidence=r;
}

void Prisoners::setVisitors(string v)
{
	Visitors = v;
}

void Prisoners::setPayRate(float pr)
{
	if (pr <= 0)     //checking if pay rate is an invalid number
	{
		cout << pr<< " is an Invalid Pay Rate... \n";
		cout << "Pay Rate will be set to minimum Pay Rate  $3.00... \n \n"; //setting pay rate to the minimum
		PayRate = 3.0;
	}else
	PayRate = pr;

	setBalance(WorkedHours, PayRate); //calling setBalance Function to calculate Balance
}

void Prisoners::setBalance(int h, float pr)
{

	Balance = h*pr;
}


//get functions definition

int Prisoners::getSentence()
{
	return SentenceMonths;
}

int Prisoners::getTimeServed()
{
	return TimeServed;
}

int Prisoners::getTimeToRelease()
{
	return TimeToRelease;
}

int Prisoners::getChildren()
{
	return Children;
}

int Prisoners::getCellNumber()
{
	return CellNumber;
}

int Prisoners::getHealth()
{
	return HealthCond;
}

string Prisoners::getResicence()
{
	return LastResidence;
}

string Prisoners::getVisitors()
{
	return Visitors;
}

int Prisoners::getWorkedHours()
{
	return WorkedHours;
}

float Prisoners::getPayRate()
{
	return PayRate;
}

float Prisoners::getBalance()
{
	return Balance;
}

//print function definition
void Prisoners::Print()
{
	cout << "\nSentence:  " << SentenceMonths << " Months\n" << "Time Served:  " << TimeServed << " Months \n" << "Time To Release:  " << TimeToRelease << " Months \n";
	cout << "Children:  " << Children << "\n" << "Worked Hours:  " << WorkedHours << "\n" << "Cell Number:  " << CellNumber << "\n";
	cout << "Health Condition:  " << HealthCond << "\n" << "Residence:  " << LastResidence << "\n" << "Visitors:  " << Visitors << "\n";
	cout << "Pay Rate:  $" << PayRate << "\n" << "Balance:  $" << Balance << "\n";


}


//SET BY USER FUNCTIONS DEFINITION

void Prisoners::setSentByUser()
{
	while ((cout << "\n Please Enter the Prisoner Sentence in Months: ") && (!(cin >> SentenceMonths) || SentenceMonths <= 0))
	{
		cout << SentenceMonths << " Months  is an Invalid Number... \n";                    //while loop stays until user enter a correct value
		cout << "The Sentence  Must Be Grater Than Zero... Please Try Again !! \n\n";
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

void Prisoners:: setTimeServByUser()
{
	while ((cout << "\n Please Enter the Prisoner Time Served in Months: ") && (!(cin >> TimeServed) || TimeServed < 0 || TimeServed>SentenceMonths))
	{
		cout << TimeServed << " Months  is an Invalid Number... \n";							//while loop stays until user enter a correct value
		cout << "Time Served  Must Be Grater or Equal Than Zero But Less Than Sentence... Please Try Again !! \n\n";
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	setTimeToRelease(SentenceMonths, TimeServed);    //calculating time to release using already checked variables sentence and time served
}

void Prisoners::setChildrenByUser()
{
	while ((cout << "\n Please Enter the Prisoner Number of Children: ") && (!(cin >> Children) || Children < 0))
	{
		cout << Children << " Children is an Invalid Number... \n";
		cout << "Children Number  Must Be Grater or Equal Than Zero... Please Try Again !! \n\n";
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

void Prisoners::setCellNumByUser()
{

	while ((cout << "\n Please Enter the Prisoner Cell Number: ") && (!(cin >> CellNumber) || TimeServed < 0))
	{
		cout << "#" << CellNumber << " Cell  is an Invalid Number... \n";
		cout << "Cell Number  Must Be Grater Than Zero... Please Try Again !! \n\n";
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}


void Prisoners::setHealthByUser()
{

	while ((cout << "\n Please Enter the Prisoner Health Indicator (1-5) \n 1 is for POOR, 5 is for EXCELLENT: ") && (!(cin >> HealthCond) ||
		HealthCond <= 0 || HealthCond > 5))
	{
		cout << HealthCond << " is an Invalid Health Indicator... \n";
		cout << "Health Condition  Must Be between 1 and 5 ... Please Try Again !! \n\n";
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

void Prisoners::setResidByUser()
{
	cin.ignore(50, '\n');
	cin.clear();
	cout << "\n Please Enter the Prisoner Last Residence City: ";
	getline(cin, LastResidence);                                       //getting line entered by user so we can enter all words into LastResidence variable
	
	
}
void Prisoners::setVisitByUser()
{
	cout << "\n Please Enter the Prisoner Visitors: ";
	getline(cin, Visitors);											//getting line entered by user so we can enter all words into Visitors variable

}

void Prisoners::setPayRateByUser()
{
	while ((cout << "\n Please Enter the Prisoner Pay Rate: ") && (!(cin >> PayRate) || PayRate <= 0))
	{
		cout << "This is an Invalid Number... \n";
		cout << "Pay Rate   Must Be Grater Than Zero... Please Try Again !! \n\n";
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

}

void Prisoners::setWorkHouByUser()
{
	while ((cout << "\n Please Enter the Prisoner Worked Hours: ") && (!(cin >> WorkedHours) || WorkedHours < 0))
	{
		cout << "This is an Invalid Number... \n";
		cout << "Worked Hours  Must Be Grater or Equal Than Zero... Please Try Again !! \n\n";
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	setBalance(WorkedHours, PayRate);                   //calculating balance using already checked variables WorkedHours and PayRate
}
