/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 7-10-17
 * Purpose: use loop to determine projected membership price
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
    float mp=2500.0 , per=.04; //$ and %
    int year=1;//year
    
    cout<<"These are the price projection if starting membership = $2500"<<endl;
    cout<<"with 4% increase each year"<<endl;
    cout<<"Year"<<"       "<<"Price Projection"<<endl;
    
    
    while(year<=6)
    {
        cout<<
        mp=(mp+(mp*per));
        cout<<year<<"         $"<<mp<<endl;
        year++;
    }
        
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here
    
    //Exit
    return 0;
}

  