/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 7-10-17
 * Purpose: use loop to display ocean levels each year
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
    int max=25, min=1;
    float lvl;
    
    
    cout<<"Year"<<"      "<<"Ocean Levels Growth"<<endl;
    while(min<=max)
    {
    
         cout<<min<<"         "<<(lvl+=1.5)<<" mm"<<endl;
         min++;
    }
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here
    
    //Exit
    return 0;
}

  