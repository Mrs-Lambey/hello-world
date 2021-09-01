/**********************************/
/* Mrs. La-Dene Forrester Lambey */
/* Intro to functions.           */
/* Average function example      */
/*********************************/

//declare header files
#include <iostream>

using namespace std; 


// Average() defined here:
double average(double num1, double num2){
  return (num1 + num2)/2;
}

int main() {
  
     cout << average(42.0, 24.0) << "\n";
     cout << average(1.0, 2.0) << "\n";
  
}