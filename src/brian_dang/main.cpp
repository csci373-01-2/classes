#include <iostream>
#include <cstdlib> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Jail {
	int beds_;
	
	public:
		int cell_slots = 40;
		int setter;
		int getters;
		
		void requirements (int,int);
		int codes() {return setter-getters;}
		float cell_num() { return cell_slots; }
};

Jail j1;

class Inmates {
	public:
		int sentence_length;
		int time_served;
		int children_count;
		std::string residence;
		std::string approved_visitors;
		int hours;
		float pay_rate;
		float balance;
		int cell_number;
		int health_cond;
		//list augmentations
		std::string name;
		std::string reason;
		
};

class Guard {
	public:
		std::string weapon_of_choice;
		bool steriods;
		std::string location_of_chioce;
		int infractions;
		std::string contraband;
		std::string probationary_status;
		std::string gang;
		//list augmentations
		std::string name;
};

int req_output;

int main(int argc, char *argv[]) {
	Inmates i1;
	i1.name = "Mike Derps";
	i1.reason = "Unclassified idiotic actions";
	i1.sentence_length = 5;
	i1.time_served = 4.5;
	i1.children_count = 2;
	i1.residence = "Bismark, Vermont";
	i1.approved_visitors = "Mae Derps";
	i1.hours = 45;
	i1.pay_rate = 13.37;
	i1.balance = 60.17;
	i1.cell_number = 1;
	i1.health_cond = 5;
	
	Inmates i2;
	i2.name = "Frank This";
	i2.reason = "A and B using smart phone.";
	i2.sentence_length = 36;
	i2.time_served = 1;
	i2.children_count = 0;
	i2.residence = "Doc, New Hampshire";
	i2.approved_visitors = "Doug This";
	i2.hours = 21;
	i2.pay_rate = 10;
	i2.balance = 210;
	i2.cell_number = 32;
	i2.health_cond = 4;
	
	Guard g1;
	g1.name = "Jotaro Kirishima";
	g1.weapon_of_choice = "Japanese Type 97 Sniper Rifle";
	g1.steriods = 0;
	g1.location_of_chioce = "N/A";
	g1.infractions = 0;
	g1.contraband = "None";
	g1.probationary_status = "N/A";
	g1.gang = "No gang affiliation";

	Guard g2;
	g2.name = "Alex Yun";
	g2.weapon_of_choice = "Taser";
	g2.steriods = 1;
	g2.location_of_chioce = "Engine room";
	g2.infractions = 23;
	g2.contraband = "Illegal handgun";
	g2.probationary_status = "3 years";
	g2.gang = "Suspected Shoe Gang";
	

	std::cout << "Welcome to CMD Jail Centre Inspection Service." << std::endl;
	std::cout << "This jail center has: " << j1.cell_num() << " cells." << std::endl;
	std::cout << "The first part of the inspection service is to find out if each cell meets the building codes.\nIn a given cell, there can be only 1 more inmate then there are beds.\n\n"  << std::endl;
	std::cout << "Please enter the amount of beds each cell has:" << std::endl;
	std::cin >> j1.setter;
	std::cout << "Please enter the amount of inmates each cell has:" << std::endl;
	std::cin >> j1.getters;
	req_output = j1.getters - j1.setter;
	if (req_output != 1){
		std::cout << "\nThis arrangement violated building codes!" << std::endl;
		goto endgame;
	}
	else{
		std::cout << "\nThis arrangement satisfies building codes!\n" << std::endl;
	} 
	std::cout << "We will now view the personnel in CMD Jail Centre." << std::endl;
	std::cout << "First the inmates:\n" << std::endl;
	std::cout <<"Name: " << i1.name << std::endl;
	std::cout <<"Reason for arrest: " << i1.reason << std::endl;
	std::cout <<"Sentence lenght in months: " << i1.sentence_length << std::endl;
	std::cout <<"Time served in months: " << i1.time_served << std::endl;
	std::cout <<"No. of children: " << i1.children_count << std::endl;
	std::cout <<"Place of last residence: " << i1.residence << std::endl;
	std::cout <<"Approved visitors: " << i1.approved_visitors << std::endl;
	std::cout <<"No. of hours worked: " << i1.hours << std::endl;
	std::cout <<"Pay rate: " << i1.pay_rate << std::endl;
	std::cout <<"Current commisary balance: " << i1.balance << std::endl;
	std::cout <<"Health condition (5 is best, 1 is worst): " << i1.health_cond << std::endl;
	std::cout <<"Notes: " << "Reevaluate this inmate ASAP.\n" << std::endl;
	system ("PAUSE");

	std::cout <<"Name: " << i2.name << std::endl;
	std::cout <<"Reason for arrest: " << i2.reason << std::endl;
	std::cout <<"Sentence lenght in months: " << i2.sentence_length << std::endl;
	std::cout <<"Time served in months: " << i2.time_served << std::endl;
	std::cout <<"No. of children: " << i2.children_count << std::endl;
	std::cout <<"Place of last residence: " << i2.residence << std::endl;
	std::cout <<"Approved visitors: " << i2.approved_visitors << std::endl;
	std::cout <<"No. of hours worked: " << i2.hours << std::endl;
	std::cout <<"Pay rate: " << i2.pay_rate << std::endl;
	std::cout <<"Current commisary balance: " << i2.balance << std::endl;
	std::cout <<"Health condition (5 is best, 1 is worst): " << i2.health_cond << std::endl;
	std::cout <<"Notes: " << "None noted\n" << std::endl;
	system ("PAUSE");
	
	std::cout << "\n" << std::endl;
	
	std::cout << "Guard list:\n" << std::endl;
	std::cout <<"Name: " << g1.name << std::endl;
	std::cout <<"Issued weapon: " << g1.weapon_of_choice << std::endl;
	std::cout <<"Steriod use? (1 means person used it): " << g1.steriods << std::endl;
	std::cout <<"Location of choice to beat(shoot) inmates: " << g1.location_of_chioce << std::endl;
	std::cout <<"No. of infractions: " << g1.infractions << std::endl;
	std::cout <<"Probationary status?: " << g1.probationary_status << std::endl;
	std::cout <<"Gang affiliation?: " << g1.gang << std::endl;
	std::cout <<"Notes: " << "Weapon is loaded with blanks.\nInvestigate how person obtained a functional WWII sniper rifle.\n" << std::endl;
	system ("PAUSE");

	std::cout <<"Name: " << g2.name << std::endl;
	std::cout <<"Issued weapon: " << g2.weapon_of_choice << std::endl;
	std::cout <<"Steriod use? (1 means person used it): " << g2.steriods << std::endl;
	std::cout <<"Location of choice to beat(taze) inmates: " << g2.location_of_chioce << std::endl;
	std::cout <<"No. of infractions: " << g2.infractions << std::endl;
	std::cout <<"Probationary status?: " << g2.probationary_status << std::endl;
	std::cout <<"Gang affiliation?: " << g2.gang << std::endl;
	std::cout <<"Notes: " << "Investigate gang affiliation.\n" << std::endl;
	
endgame:
	return 0;
}
