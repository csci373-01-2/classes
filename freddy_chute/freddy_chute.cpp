// Copyright 2015 Frederick Chute

#include <iostream>
using namespace std;

class Prison {
      public:
             int const get_beds_() {return beds_;} //getter for beds
             void set_beds_(int a) {beds_ = a;}//setter for beds
             int const get_prisoners_() {return prisoners_;}//getter for prisoners             
             void set_prisoners_(int b) {prisoners_ = b;}//setter for prisoners
             void prisoner_limit (int a, int b);
             //A cell can only have one more prisoner than beds
             int cells_;


             private:
              int beds_;//beds_ is a private member
              int prisoners_;




};

class Prisoner {  //a class for prisoners

      public:

             int months_; //sentence months
             int served_; //time served
             int release_; //time to release
             int children_; //number of children
             string residence_; // place of last residence
             string visitors_; //approved visitors;
             int hours_; //hours worked
             float pay_; //pay rate
             float balance_; //commisary balance
             int cellnumber_; //cell number
             int health_; //health condition
             void set_health (int a);  //health condition [1-5]



};

class Guard {


   public:
          string weapon_; //favorite weapon
          bool steroid_; //steroid use [0 or 1]
          string place_;  //preferred place to beat prisoners
          int infractions_; //number of infractions
          string contraband_; //contraband
          string probation_; //jprobationary status
          string gang_; //gang affiliation

};
void Prison::prisoner_limit (int a, int b) {
     if  ((a-b) < -1)//a
           std::cout << "Insufficient beds" << std::endl;
           //A cell can only have one more prisoner than beds.
     else {
          beds_= a;
          prisoners_=b;

          }

}


void Prisoner::set_health (int a)
{

     if ((a < 1) || (a > 5)) //if health is not between 1 and 5 output indication
     std::cout << "Health must be between 1 and 5" <<std::endl;
     else
         health_=a;

 }
int main (){

                          Prison p; //Initialize Prison has 40 cells
                          p.cells_=40;
                          p.set_beds_(80); //80 beds
                          p.set_prisoners_(81); // 81 prisoners

p.prisoner_limit(p.get_beds_(),p.get_prisoners_());
                          //Getter files used to ensure the 1 prisoner without
                          //a bed limit.

                          Prisoner a; //initialize Prisoner

                          a.months_=36;
                          a.served_= 23;
                          a.release_=13;
                          a.children_=2;
                          a.residence_ = "123 Orange Street";
                          a.visitors_= "None";
                          a.hours_=35;
                          a.pay_=1.50;
                          a.balance_=10;
                          a.cellnumber_=1;
                          a.health_=3;
                          a.set_health(a.health_); //checks health is  1-5



                          Guard b; //Initialize Guard

                          b.weapon_="Gun";
                          b.steroid_=1;
                          b.place_= "Shower";
                          b.infractions_=0;
                          b.contraband_="Meth";
                          b.probation_="Not on probation";
                          b.gang_="Aryan brotherhood";

return 0;
}
