/**************************************************************************************************/
//LANDY CAMOU
//CLASS GUARDS
/**************************************************************************************************/

#include <string>
#include <iostream>
using namespace std;
class Guards
{
public:
	//constructors
	Guards();
	Guards(string, string, string, string, bool, int);
	//set functions
	void setFavoriteWeapon(string);
	void setBeatingPlace(string);
	void setGang(string);
	void setProbStatus(string);
	void setSteroid(int);
	void setInfractions(int);
	void Print();

	//get functions

	string getFavoriteWeapon();
	string getBeatingPlace();
	string getGang();
	string getProbStatus();
	int getSteroid();
	int getInfractions();

private:

	string FavoriteWeapon, BeatingPlace, Gang, ProbStatus;
	bool Steroid;
    int Infractions;
	

};