#include "grid.h"
#include <iostream>
#include <cassert>

//Helper functions: you may use them as a template.

// Check if no more tokens can be placed
bool isGridFull() {
    for (int row = 0; row < 2; ++row) {
        for (int col = 0; col < 2; ++col) {
            if (grid.fields(row, col) == ' ') {
                return false;
            }
        }
    }
    return true;
}

//Place a vertical or horizontal line, depending on direction
void drawLine(int row, int col, char direction) {
  switch (direction)
  {
  case 'u':
    assert((row+1 <= 2));
    // You can access these fields in the i-th row and the j-th column of the grid via the function call grid.fields(i, j).
    grid.vertical(row + 1, col) = true;
    break;

  case 'd':
    // TODO implement here
    grid.vertical(row, col) = true;
    break;

  case 'l':
    throw "NotImplementedException";
    break;
  
  case 'r':
    grid.horizontal(row, col) = true;
    break;

  default:

    std::cout << "invalid character, try again: ";
    std::cin >> row >> col >> direction; 
    drawLine(row, col, direction);
    break;
  }
}

//Does adding a line result in drawing an unclaimed box?
bool shouldPlaceToken(int row, int col) {
  //TODO
  return false;
}

int main() {
  std::cout << "starting program" << "\n";
  
  // Feature-Demo: Draw a box with an 'X' in the upper left corner of the board.

  // TODO get input from User: row col direction ex. 2 0 u
  
  while (true /* Whatever condition */)
  {

    if (isGridFull())
    {
      std::cout << "grid full" << "\n";
      
      return 0;
    }
    // get input from user
    std::cout << "input: " << "\n";
    
    int row;
    int col;
    char dir; 
    
    // convert to unicode
    
    std::cin >> row >> col >> dir;   
    
    drawLine(row, col, dir);

    grid.printGrid();
  }
    

  grid.vertical(0, 0) = true;
  grid.vertical(0, 1) = true;
  grid.horizontal(0, 0) = true;
  grid.horizontal(1, 0) = true;
  grid.fields(0, 0) = 'X';
  
  // Feature-Demo: Print the grid.
  grid.printGrid();  

  return 0;
}