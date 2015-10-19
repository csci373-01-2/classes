//*********************************************************************************************************
//LANDY CAMOU
//DEFINITION OF THE CLASS GUARDS
//**********************************************************************************************************


#include "GuardsHeader.h"
using namespace std;


//CONSTRUCTORS

//Default constructor

Guards::Guards()
{
	FavoriteWeapon = "None";
	BeatingPlace = "None";
	Gang = "None";
	ProbStatus = "None";
	Steroid = 0;
	Infractions = 0;
}

Guards::Guards(string weapon, string place, string gang, string status, bool steroid, int infrac)
{
	FavoriteWeapon = weapon;
	BeatingPlace = place;
	Gang = gang;
	ProbStatus = status;
	setSteroid ( steroid);
	setInfractions(infrac);
}

void Guards::setFavoriteWeapon(string w)
{
	FavoriteWeapon = w;

}
void Guards::setBeatingPlace(string b)
{
	BeatingPlace = b;

}

void Guards::setGang(string g)
{
	Gang = g;

}

void Guards::setProbStatus(string s)
{
	ProbStatus = s;

}

void Guards::setSteroid(int s)
{
	if (s == 1 || s== 0)
		Steroid = s;
	else{
		cout <<s<< "is an Invalid Steroid Indicator.... for Yes enter 1, for No enter 0 \n";
		cout << "Steroid Indicator will be set to No \n \n";
		Steroid = 0;
	}
}

void Guards::setInfractions(int i)
{
	if (i < 0)
	{		
		cout <<i<< "is an Invalid Number of Infractions... Infractions will be set to 0 \n";
	    Infractions = 0;
	}
	else
	Infractions = i;
}

//get functions definition

string Guards::getFavoriteWeapon()
{
	return FavoriteWeapon;
}

string Guards::getBeatingPlace()
{
	return BeatingPlace;
}

string Guards::getGang()
{
	return Gang;
}

string Guards::getProbStatus()
{
	return ProbStatus;
}

int Guards::getSteroid()
{
	return Steroid;
}

int Guards::getInfractions()
{
	return Infractions;
}

//print function definition
void Guards::Print()
{
	cout << "Favorite Weapon:  " << FavoriteWeapon << " \n" << "Beating Pplace:  " << BeatingPlace << " \n" << "Gang:  " << Gang << " \n";
	cout << "Probation Status:  " << ProbStatus << "\n" << "Steroide Use:  " << Steroid << "\n" << "Infractions:  " << Infractions << "\n";
	

}