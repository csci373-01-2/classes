/**************************************************************************************************/
//LANDY CAMOU
//CLASS PRISONERS
/**************************************************************************************************/

#include <string>
#include <iostream>
#include <istream>
using namespace std;
class Prisoners
{
public:
	//constructors
	Prisoners();
	Prisoners(int, int, int, int, int, int, string, string, float);
	//set functions
	void setSentence(int);
	void setTimeServed(int);
	void setTimeToRelease(int, int);
	void setChildren(int);
	void setCellNumber(int);
	void setHealth(int);
	void setResidence(string);
	void setVisitors(string);
	void setWorkedHours(int);
	void setPayRate(float);
	void setBalance(int, float);
	void Print();

	//GET FUNCTIONS
	int getSentence();
	int getTimeServed();
	int getTimeToRelease();
	int getChildren();
	int getCellNumber();
	int getHealth();
	string getResicence();
	string getVisitors();
	int getWorkedHours();
	float getPayRate();
	float getBalance();

	//SET BY USER FUNCTIONS
	void setSentByUser();
	void setTimeServByUser();
	void setChildrenByUser();
	void setCellNumByUser();
	void setHealthByUser();
	void setResidByUser();
	void setVisitByUser();
	void setWorkHouByUser();
	void setPayRateByUser();

private:

	int SentenceMonths, TimeServed, TimeToRelease, Children, WorkedHours, CellNumber, HealthCond;
	string LastResidence, Visitors;
	float PayRate, Balance;


};
