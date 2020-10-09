#include "grid.h"
#include <iostream>

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
  //TODO
}

//Does adding a line result in drawing an unclaimed box?
bool shouldPlaceToken(int row, int col) {
  //TODO
  return false;
}

int main() {

  // TODO: Replace the following implementation by the actual Dots And Boxes program

  // Feature-Demo: Draw a box with an 'X' in the upper left corner of the board.
  grid.vertical(0, 0) = true;
  grid.vertical(0, 1) = true;
  grid.horizontal(0, 0) = true;
  grid.horizontal(1, 0) = true;
  grid.fields(0, 0) = 'X';
  
  // Feature-Demo: Print the grid.
  grid.printGrid();  

  return 0;
}