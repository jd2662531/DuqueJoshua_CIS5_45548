/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 7-05-2017
 * Purpose: Determines if the day times the month = the year in the following 
 * format: 6/10/60. 6*10=60 
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int month, day, year, magic; 
    
    cout<<"Enter a month in numeric form 1-12"<<endl;
    cin>>month; 
    cout<<"Enter a day in numeric form"<<endl;
    cin>>day;
    cout<<"Enter the last two digits of the year"<<endl;
    cin>>year;
    
    magic=month*day;
    
    if (year==magic)
        cout<<"This date is Magic"<<endl;
    else 
        cout<<"this date is not magic :("<<endl;
    
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
   
  
    //Exit stage right!
    return 0;
}

