/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 6/29/17
 * Purpose:   
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip>
 
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float C, F; //tempeture in celsius and fahrenheit 
    cout<<"enter temperature in Celsius and it will be converted to Fahrenheit"
            <<endl;
    cin>>C;
    
    F=((9.0/5.0)*C)+32.0;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<C<<" degrees Celsius is "<<F<< " degrees F"<<endl;

    //Exit stage right!
    return 0;
}

