// //*****************************************************************************************************************************************
// // Team # 11                           CSCI 2380                          Fall 2024                        Homework # 2 
// // Anthony Enriquez 
// // Fabian Garza
// //*****************************************************************************************************************************************




#include "canvas.h"
#include <cstddef>



Canvas::Canvas(int width)
{
  if(width <= 0)                                            // check if the width is less than or equal to 0
  {
    _width = 0;                                             // set the width to 0
    C = nullptr;                                            // set the pointer C to nullptr
  }
  else                                                      //  set width value and create new 2d dynamic array
  { 
    _width = width;
    C = new char*[5];                                       // Create a new dynamic array of pointers for 5 rows
    for(int i=0; i<5; i++)                                  // Loops through the rows       
    {
      C[i] = new char[width];                               // Now it loops through the columms 
      for(int j = 0; j< width; j++) C[i][j] = ' ';          // initialize all elements to ' '
    }
  }
}






Canvas::Canvas(char x) {
    _width = 5; // width is fixed at 5
    C = new char*[5];
    for (int i = 0; i < 5; ++i) {
        C[i] = new char[_width];
    }

    // Initialize all elements to ' ' (space)
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < _width; ++j) {
            C[i][j] = ' ';
        }
    }

    // Define patterns based on the character passed ('A', 'B', 'C', 'D')
    if (x == 'A') {
        // Pattern for 'A'
        for (int i = 1; i < 4; ++i) {
            C[0][i] = '#';
        }
        C[1][0] = C[1][4] = '#';
        for (int i = 0; i < 5; ++i) {
            C[2][i] = '#';
        }
        C[3][0] = C[3][4] = '#';
        C[4][0] = C[4][4] = '#';
    } 
    else if (x == 'B') {
        // Pattern for 'B'
        for (int i = 0; i < 4; ++i) {
            C[0][i] = '#';
            C[2][i] = '#';
            C[4][i] = '#';
        }
        C[1][0] = C[1][4] = '#';
        C[3][0] = C[3][4] = '#';
    }
    else if (x == 'C') {
        // Pattern for 'C'
        for (int i = 1; i < 5; ++i) {
            C[0][i] = '#';
            C[4][i] = '#';
        }
        C[1][0] = C[3][0] = C[2][0] = '#';
    }
    else if (x == 'D') {
        // Pattern for 'D'
        for (int i = 0; i < 4; ++i) {
            C[0][i] = C[4][i] = '#';
        }
        C[1][0] = C[1][4] = '#';
        C[2][0] = C[2][4] = '#';
        C[3][0] = C[3][4] = '#';
    } else {
        // Default to a blank canvas if another character is provided
        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 5; ++j) {
                C[i][j] = ' ';
            }
        }
    }
}


int Canvas::width(){
    return _width;                                  // Return the stored width value
}

string Canvas::to_string()                          //Method to return the canvas as a string
{
  if(C == nullptr) return "";                       //Empty canvas case
  
  string results;
  for(int i=0; i<5; i++){  
    for(int j = 0; j<_width; j++){
        results += C[i][j];
    }
    results+= '\n';                                 //Added a newline at the end of each row
}
    return results;
}


void Canvas::replace(char old_char, char new_char)    //Method to replace every instance of old_char with new_char
{
    if(C == nullptr) return;        //Check if canvas is empty
    
    for(int i=0; i<5; i++)
  {    
    for(int j = 0; j<_width; j++)
    {
      if(C[i][j] == old_char) // replace old character by new character
          C[i][j] = new_char;
    }
  }
}

Canvas::~Canvas()                           //Destructor to deallocate memory
{
    if(C != nullptr){
    for (int i = 0; i < 5; ++i) {                      
    delete[] C[i];                                    
    }
    delete[] C;                                         
}
}
