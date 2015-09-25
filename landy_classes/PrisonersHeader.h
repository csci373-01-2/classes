/**************************************************************************************************/
//LANDY CAMOU
//CLASS PRISONERS
/**************************************************************************************************/

#include <string>
#include <iostream>
using namespace std;
class Prisoners
{
public:

	Prisoners();
	Prisoners(int, int, int, int, int, int, string, string, float);
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

private:

	int SentenceMonths, TimeServed, TimeToRelease, Children, WorkedHours, CellNumber, HealthCond;
	string LastResidence, Visitors;
	float PayRate, Balance;


};
