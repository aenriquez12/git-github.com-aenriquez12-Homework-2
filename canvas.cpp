//*****************************************************************************************************************************************
// Team # 11                           CSCI 2380                          Fall 2024                        Homework # 2 
// Anthony Enriquez 
// Fabian Garza
//*****************************************************************************************************************************************




#include "canvas.h"


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
      for(int j = 0; j< width; j++) C[i][j] = ' ';          
    }
  }
}






Canvas::Canvas(char x)
{
  
  _width = 5;                                              // Assign width values
  
  
  
 
  C = new char* [5];                                         //created dynamic character 2D array
  for(int i= 0; i< 5; ++i)
  {
    C[i] = new char [_width];    
    for(int j = 0; j<_width; j++) C[i][j] = ' ';            // initialize current row's cells with white space characters
  }

   
  switch(x)                                                 // creates different cases depending on the letter inputed an
  {
    case 'A':                                               // If the input is 'A'
      {

      
        C[0][1] = '#';
        C[0][2] = '#';
        C[0][3] = '#';

        C[1][0] = '#';
        C[1][4] = '#';

        C[2][0] = '#';
        C[2][1] = '#';
        C[2][2] = '#';
        C[2][3] = '#';
        C[2][4] = '#';

        C[3][0] = '#';
        C[3][4] = '#';

        C[4][0] = '#';
        C[4][4] = '#';
      }
        break;
    case 'B':                                           // If the input is 'B'
      {      
        C[0][0] = '#';
        C[0][1] = '#';
        C[0][2] = '#';
        C[0][3] = '#';

        C[1][0] = '#';
        C[1][4] = '#';
       
        C[2][0] = '#';
        C[2][1] = '#';
        C[2][2] = '#';
        C[2][3] = '#';

        C[3][0] = '#';
        C[3][4] = '#';

        C[4][0] = '#';
        C[4][1] = '#';
        C[4][2] = '#';
        C[4][3] = '#';
      }
        break;

    case 'C':                                               // If the input is 'C'
      {
        C[0][1] = '#';
        C[0][2] = '#';
        C[0][3] = '#';
        C[0][4] = '#';

        C[1][0] = '#';

        C[2][0] = '#';

        C[3][0] = '#';

        C[4][1] = '#';
        C[4][2] = '#';
        C[4][3] = '#';
        C[4][4] = '#';
      }
        break;
    case 'D':                                       // If the input is 'D'
    {
        C[0][0] = '#';
        C[0][1] = '#';
        C[0][2] = '#';
        C[0][3] = '#';

        C[1][0] = '#';
        C[1][4] = '#';
       
        C[2][0] = '#';
        C[2][4] = '#';

        C[3][0] = '#';
        C[3][4] = '#';

        C[4][0] = '#';
        C[4][1] = '#';
        C[4][2] = '#';
        C[4][3] = '#';
    }
        break;

  }

}


int Canvas::width(){
    return _width;                                  // Return the stored width value
}

string Canvas::to_string(){
  
  
}

void Canvas::replace(char old_char, char new_char){
}

Canvas::~Canvas()
{

  delete[] C;                                       // destroys the nullptr and prevents memory leak
}


