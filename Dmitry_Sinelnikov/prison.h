#include <iostream>
#ifndef LIB_PRISON_H_
using std::cout;
using std::endl;
#define LIB_PRISON_H_

class Prison {
 private:
  static const int cells = 40;
  int numOfBedsPerCell;
  int cellCapacity;
  int prisoners;
  int numOfBeds;

 public:
  Prison();
  int getCells();
  void setNumOfBedsPerCell(int numOfBedsPerCellInput);
  int getNumOfBedsPerCell();
  void setCellCap(int cellCapacityInput);
  int getCellCap();
  void setNumOfBeds();
  int getNumOfBeds();
  void setNumOfPrisoners(int NumOfPrisonersInput);
  int getNumOfPrisoners();
};
#endif  // LIB_PRISON_H_