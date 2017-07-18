/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 7-17-17
 * Purpose:  Which Division made the most
 */

//System Libraries Here
#include <iostream>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float getSales();
float findHighest(float, float, float, float);

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables Here
    float NE,SE,NW,SW; // money in the divisons
    
    cout << "Enter NorthEast sales. " ;
    NE = getSales();
    cout << "Enter SouthEast sales. "; 
    SE = getSales();
    cout << "Enter NorthWest sales. ";
    NW = getSales();
    cout << "Enter SouthWest sales. ";
    SW = getSales();
    
    findHighest(NE,SE,NW,SW);
    //Process/Calculations Here
    
    //Output Located Here
   
    //Exit
    return 0;
}

 float getSales(){
      
       float sales;
      cout << "What is the sales for this division? $"; 
     cin >> sales;       
      if(sales > 0)
		{
               
                return sales;
		}
      else
      {
          cout<<"Enter positives"<<endl;
            exit(0);
      }
          
 }
float findHighest (float ne, float se, float nw, float sw) 
{
    if(ne >= se && ne >= nw && ne >= sw){
        cout << "The highest is: $" << ne << " at NorthEast.";
    }
    if(se >= ne && se >= nw && se >= sw){
        cout << "The highest is: $" << se << " at SouthEast.";
    }
    if(nw>= ne && nw >= sw && nw >= sw){
        cout << "The highest is: $" << nw << " at NorthWest.";
    }
    if(sw >= ne && sw >= se && sw >= nw){
        cout << "The highest is: $" << sw << " at SouthWest.";
    }
    
}
 