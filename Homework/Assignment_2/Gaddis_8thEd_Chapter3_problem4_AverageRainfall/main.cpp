/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 6/29/17
 * Purpose:   
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip>
#include <string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    cout<<"this program averages the rainfall of 3 different months"<<endl;
    string month1, month2, month3, months; //three different months  
    float r1,r2,r3, average; 
    
    cout<<"enter the first month"<<endl;
    cin>>month1;
     
    cout<<"how much rain in inches fell on "<<month1<<"?"<<endl;
    cin>>r1;
    
    cout<<"enter the second month"<<endl;
    cin>>month2;
      
    cout<<"how much rain in inches fell on "<<month2<<"?"<<endl;
    cin>>r2;
    
    cout<<"enter the third month"<<endl;
    cin>>month3;
     
    cout<<"how much rain in inches fell on "<<month3<<"?"<<endl;
    cin>>r3;
    
    average=(r1+r2+r3)/3;
    months=month1+", "+month2+", "+month3;
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"The average rainfall for "<<months<<" is "<<setprecision(3)<<
            average<<" inches."<<endl;
    //Exit stage right!
    return 0;
}

