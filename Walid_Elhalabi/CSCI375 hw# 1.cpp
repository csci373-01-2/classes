#include <iostream>
#include<string>
using namespace std;

struct Prisons{
      
      void cells(){
      cout<< "Echo prison 40 cells available"<<endl;
}
};


     class Prisoners{
    
        public:
               void setBed (int b){ bed =b;}
               void setInmate(int i){inmate =i;}
               int getBed(){ return bed;}
               int getInmate(){return inmate;}
               void setSentence (int s) { sentence =s;}
               int getSentence() {return sentence;}
               void setChildren (int c) {children =c;}
               int getChildren () {return children;}
               void setResidence(string r) { residence = r;}
               string getResidence() {return residence;}
               void setVisitors(string v) { visitors= v;}
               string getVisitors() {return visitors;}
               int hours;
               int payrate; 
               int balance;
               void setCellnumber (int n) {cellnumber = n;}
               int getCellnumber() {return cellnumber;}
               int setHealth (int h) {health =h;}
               int getHealth() {return health;}
               void setHoodname(string h) {hoodname =h;}
               string getHoodname() {return hoodname;}
              
        private:
                int bed;
                int inmate;
                int sentence;
                int children;
                string residence;
                string visitors;
                int cellnumber;
                int health;
                string hoodname;
            
             
          
              
               
              };
               
               
               class Guards{
        private:       
               string weapon;
               int steroid;
               string location;
               string name;
               int infraction;
               int contrabands;
               string probation;
               string gang;
                     
        public:
                void setWeapon (string w) {weapon =w;}
                string getWeapon() {return weapon;}
                void setSteroid (int s) {steroid =s;}
                int getSteroid() {return steroid;}
                void setLocation (string l) {location =l;}
                string getLocation () {return location;}
                void setName(string n) {name = n;}
                string getName(){return name;}
                void setInfraction (int f) {infraction =f;}
                int getInfraction() {return infraction;}
                void setContrabands( int o) {contrabands =o;}
                int getContrabands() {return contrabands;}
                void setProbation (string p) {probation= p;}
                string getProbation () {return probation;}
                void setGang(string g) {gang =g;}
                string getGang() {return gang;}
                };            
                  
                   
          
             
int main ()
{
 Prisons cellinfo;
cellinfo.cells();

Prisoners p;
Guards g;

p.setBed(1);
cout<<"number of beds in each cell is:"<<p.getBed()<<endl;

p.setInmate(2);
cout<<"number of inmates in each cell is:"<<p.getInmate()<<endl;

p.setHoodname("SuperLily");
cout<<p.getHoodname()<<": inmate's streetname"<<endl;

p.setSentence(200);
cout<<p.getSentence()<<" months sentenced"<<endl;

p.setChildren(0);
cout<<"inmate has "<<p.getChildren()<<" children"<<endl;

p.setResidence("East Bleu");
cout<<"last place of residence "<<p.getResidence()<<endl;

p.setVisitors("Denied");
cout<<"access of visitors: "<< p.getVisitors()<<endl;

int hours = 25;
cout<<hours<<" hours inmate worked"<<endl;

int payrate= 2;
cout<<payrate<<" dollars inmate recieves per hour"<<endl;

int balance = 25 *2;
cout<<balance<<" dollars in inmate's balance"<<endl;

p.setCellnumber(24);
cout<<"inmate's cell number is "<<p.getCellnumber()<<endl;

p.setHealth(1);
cout<<p.getHealth()<<" inmate's condition is poor"<<endl;

g.setName("Nico Robin");
cout<<g.getName()<<": officer's name"<<endl;

g.setWeapon("baseball bat");
cout<<g.getWeapon()<<" officer's favorite weapon to influence inmates"<<endl;

g.setSteroid(1);
cout<<g.getSteroid()<<" officer is on high dosage of steroids"<<endl;

g.setLocation("bathroom");
cout<<"officer's preferred location to influence inmates is the "<<g.getLocation()<<endl;

g.setInfraction(9);
cout<<g.getInfraction()<<" total number of infractions accumulated"<<endl;

g.setContrabands(2);
cout<<g.getContrabands()<<" known contrabands possibly more location unknown"<<endl;

g.setProbation("revoked");
cout<<"officer was "<<g.getProbation()<<" from probation reasons unknown "<<endl;

g.setGang("NW/0A");
cout<<"officer affliated with "<<g.getGang()<<endl;
system("pause");
    return 0;
}
