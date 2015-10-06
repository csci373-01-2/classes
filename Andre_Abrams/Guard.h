// Andre Abrams, 9/3/2015
// Homework - Prison Classes

#include <iostream>
using namespace std;

class Guard
{
public:
	void faveWeapon( string );
	bool steroidUse( int );
	void favePlace( string );
	void numOfInfractions( int );
	void contraband( string );
	void probationStat( string );
	void gangAffil( string );

private:
	string favWeapon;
	bool steroids;
	string favPlace;
	int infractions;
	string contraB;
	string probation;
	string gang;
};

void Guard::faveWeapon( string weapon )
{
	favWeapon = weapon;
}

bool Guard::steroidUse( int roids )
{
	steroids = roids;
	return steroids;
}

void Guard::favePlace( string place)
{
	favPlace = place;
}

void Guard::numOfInfractions( int infrac )
{
	infractions = infrac;
}

void Guard::contraband( string illegal )
{
	contraB = illegal;
}

void Guard::probationStat( string probie )
{
	probation = probie;
}

void Guard::gangAffil( string gangBanger )
{
	gang = gangBanger;
}