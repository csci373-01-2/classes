#include <iostream>
#include <string>
using namespace std;

class prison{
public:
	prison(int c =40) {setCells(c);}
	void setCells(int c) {cells_ = c;}
	int getCells() {return cells_;}
	void setBeds(int b) {beds_ = b;}
	int getBeds() {return beds_;}
	void setPrisoners(int p) {
		if (beds_ +1 >= prisoners_)
			prisoners_ = p;
		else
		{
			cout<<"A cell can only have one more prisoner than beds. Enter an appropriate integer: ";
			void setPrisoners(int p);
		}
	}
	int getPrisoners() {return prisoners_;}
private:
	int cells_;
	int beds_;
	int prisoners_;
}

class inmates{
public:
	void setSentMonths(int m) {sentMonths_ = m;}
	int getSentMonths() {return sentMonths_;}
	void setTimeServed(int m) {timeServed_ = m;}
	int getTimeServed() {return timeServed_;}
	void setTimeRelease() {timeRelease_ = sentMonths_ - timeServed_;}
	int getTimeRelease() {return timeRelease_;}
	void setNumChild(int c) {numChild_ = c;}
	int getNumChild() {return numChild_;}
	void setPlaceLastRes(string p) {placeLastRes_ = p;}
	string getPlaceLastRes() {return placeLastRes_;}
	void setApprVisitors(int v) {apprVisitors_ = v;}
	int getApprVisitors() {return apprVisitors_;}
	void setHrsWorked(int h) {hrsWorked_ = h;}
	int getHrsWorked() {return hrsWorked_;}
	void setPayRt(float d) {payRt_ = d;}
	float getPayRt() {return payRt_;}
	void setCommBalance() {commBalance_ = hrsWorked_ * payRt_;}
	float getCommBalance() {return commBalance_;}
	void setCellNum(string c) {cellNum_ = c;}
	string getCellNum() {return cellNum_;}
	void setHealthCondi(int h) {
		if (1<=h<=5)
			healthCondi_=h;
		else
		{
			cout<<"Invalid rating, enter an appropriate integer: ";
			void setHealthCondi(int h);
		}
	}
private:
	int sentMonths_;
	int timeServed_;
	int timeRelease_;
	int numChild_;
	string placeLastRes_;
	int apprVisitors_;
	int hrsWorked_;
	float payRt_;
	float commBalance_;
	string cellNum_;
	int healthCondi_;
}

class guards{
public:
	void setFavWeapon(string w) {favWeapon_ = w;}
	string getFavWeapon() {return favWeapon_;}
	void setSteriodUse(bool s) {steriodUse_ = s;}
	void getSteriodUse() {
		if (steriodUse_=1)
			cout<<"Y";
		else
			cout<<"N";
	}
	void setFavPlaceBeat(string p) {favPlaceBeat_ = p;}
	string getFavPlaceBeat() {return favPlaceBeat_;} 
	void setNumIntractions(int i) {numIntractions_ = i;}
	int getNumIntractions() {return numIntractions_;}
	void setContraband(string c) {contraband_ = c;}
	string getContraband() {return contraband_;}
	void setProbMonths(int m) {probMonths_ = m;}
	int getProbMonths() {return probMonths_;}
	void setGang(string g) {gang_ = g;}
	string getGang() {return gang_;}
private:
	string favWeapon_;
	bool steriodUse_;
	string favPlaceBeat_;
	int numIntractions_;
	string contraband_;
	int probMonths_;
	string gang_;
}