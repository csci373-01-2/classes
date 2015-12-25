#include <cstdlib>
#include <iostream>

#include "../lib/Prison.h"

Prison::Prison() {
  numOfBedsPerCell = 0;
  cellCapacity = 1;
}

int Prison::getCells() {
  return cells;
}

void Prison::setNumOfBedsPerCell(int numOfBedsPerCellInput) {
  numOfBedsPerCell = numOfBedsPerCellInput;
}

int Prison::getNumOfBedsPerCell() {
  return numOfBedsPerCell;
}


void Prison::setCellCap(int cellCapacityInput) {
  if (cellCapacityInput <= numOfBedsPerCell+1) {
  cellCapacity = cellCapacityInput;
  }
}
int Prison::getCellCap() {
  return cellCapacity;
}

void Prison::setNumOfBeds() {
  numOfBeds = (cellCapacity) * cells;

  cout << "---------------------\n";
  cout << "There are " << numOfBedsPerCell
       << " beds per cell." << endl;
  cout << "The prison has "<< cells << " cells." << endl;
  cout << "The prison has a cell capacity of "
       << cellCapacity << " prisoners per cell." << endl;
  cout << "So the prison holds " << numOfBeds << endl;
  cout << "---------------------\n";
}

int Prison::getNumOfBeds() {
  return numOfBeds;
}

void Prison::setNumOfPrisoners(int numOfPrisonersInput) {
  if (numOfPrisonersInput <= numOfBeds) {
  prisoners = numOfPrisonersInput;
  }
}
int Prison::getNumOfPrisoners() {
  return prisoners;
}