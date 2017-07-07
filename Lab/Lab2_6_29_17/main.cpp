/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 6/29/17 
 * Purpose:  Calculate tax percentage and profit percentage of oil companies 
 *           and Government
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables Here
    float caltax=0.39f; // california state tax per gallon in cents
    float fedtax=0.184f; // Federal tax per gallon in  cents 
    float calcntx=0.10f; // Ca cap and trade tax per gallon in cents 
    float oilprft=.07f; // oil company profit per gallon 
    
    float catxper=.08f; // CA state sales tax percentage 8%
    float pumpp, btaxper, profper, basep, totaltx; //pump price, base tax 
                                                //percentage, profit percentage
                                                //base price, total tax
                                                     
                                                    
    
    //Input or initialize values Here
    cout<<"price of gas =$";
    cin>>pumpp;
    
    
    
    
    //Process/Calculations Here
    
    basep=(pumpp-caltax-fedtax-calcntx)/(1+catxper); // calculate base price
    totaltx=caltax+fedtax+calcntx+(basep*catxper);  // total tax calculation
    btaxper=totaltx/pumpp*100;// base tax percent calculation 
    profper=oilprft/basep*100;// profit percentage calculation 
    
    //Output Located Here
    cout<<"Tax percentage = "<<btaxper<<"%"<<endl;
    cout<<"Profit percentage = "<<profper<<"%"<<endl;

    //Exit
    return 0;
}

  