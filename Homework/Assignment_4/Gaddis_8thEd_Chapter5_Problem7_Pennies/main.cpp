/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 7-10-17
 * Purpose: Convert Celsius to F
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables Here
     float C, F; //tempeture in celsius and fahrenheit 
    
     cout<<"Celsius"<<"         "<<"Fahrenheit"<<endl;
     for(int C=0; C<=20; C++)
     {
         
     F=((9.0/5.0)*C)+32.0;   
     cout<<C<<"         "<<F<<endl;

     }
    
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here
    
    //Exit
    return 0;
}

  