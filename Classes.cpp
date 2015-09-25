
//Andre Jorge
//Class project for making class called prison
#include <iostream>
#include <cstdlib>

class prison{
    private: 
        const int num_cells = 40;
    public:
    	int get_num_cells= num_cells -1;
	
};

class prisioner{
    public:
        int num_prisioners;
        int prs_count;
        int sentence;
        int time_served;
        int time_torelease;
        int num_ofkids;
        int last_residence;
        int approved_visitors;
        float hours_worked;
        float pay_rate;
        float comm_balance;
        int cell_num;
        int health_condition;
        
};

class Guards{
    public:
        int fav_weapon;
        int roids;
        int prefplacetobeatprisioners;
        int num_infractions;
        int contraband;
        int probationary_stat;
        int gang_aff;
};
int main(int argc, char** argv) {
    return 0;
}
