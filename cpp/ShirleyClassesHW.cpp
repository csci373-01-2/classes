/*
You will write a classes for a prison, the prisoners and guards.

Initialize the prison has 40 cells. Write setter and getters for number of beds and number of prisoners. A cell can only have one more prisoner than beds. Make the number beds a private member.

Write a class for prisoners. Prisoners should have

sentence months int
time served int
time to release
number of children
place of last residence
approved visitors
hours worked
pay rate (float)
commisary balance
cell number
health condition [1-5]


Write a class for guards:

favorite weapon
steroid use [0 or 1]
preferred place to beat prisoners
number of infractions
contraband
probationary status
gang affiliation
*/

#include <iostream> 
using namespace std;

struct prison;
int prison = 40;

class prisoners
{
	public:
			int sentence; 
			int time_served; 
			int num_of_children; 
			char* residence;
			char* visitors;
			int hours_worked;
			float salary;
			int commisary_bal;
			int cell_num;
			int health_condition;

	private:
			int num_of_beds;
};


class guards

{
	public:
			char* fav_weapon;
			int steroids;
			char* location_of_abuse;
			int num_infractions;
			char* contraband;
			char* gang;
};


int main( )
{

cout << "This program was made by Chris Shirley" << endl;
	
char a[] = "1 Blue Lane Tary, NY 13502";	
char b[] = "Jane Smith and Tom Kerry";
char c[]= "AK-47";
char d[]= "Cafeteria";
char e[]= "maraijuana pipe";
char f[]= "East Dingos";

prisoners Inmate1; 

Inmate1.sentence = 25; 
Inmate1.time_served = 16;
Inmate1.num_of_children =2;
Inmate1.residence = a;
Inmate1.visitors = b;
Inmate1.hours_worked = 32532;
Inmate1.salary = .10;
Inmate1.commisary_bal = 4.00;
Inmate1.cell_num = 39;
Inmate1.health_condition = 5;

guards Guard1;

Guard1.fav_weapon = c;
Guard1.steroids = 1;
Guard1.location_of_abuse = d;
Guard1.num_infractions = 37;
Guard1.contraband = e;
Guard1.gang = f;

int num_of_beds = 10;
int num_of_prisoners = 1;

	cout << "The number of beds is: " << num_of_beds << endl;
	cout << "The number of prisoner is: " << num_of_prisoners << endl;

return 0;
}



