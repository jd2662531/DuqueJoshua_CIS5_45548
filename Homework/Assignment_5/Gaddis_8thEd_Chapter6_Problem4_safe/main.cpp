/* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 7-17-17
 * Purpose: Determine safest city
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float getnuma();
float findlow(float, float, float, float, float);

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables Here
    float N,E,S,W,C; // accidents in area
    
    cout << "Enter accidents for north." ;
    N = getnuma();
    cout << "Enter accidents for east. "; 
    E = getnuma();
    cout << "Enter accidents for south. ";
    S = getnuma();
    cout << " Enter accidents for west. ";
    W = getnuma();
    cout << "Enter accidents for central. ";
    C = getnuma();
    
    findlow(N,E,S,W,C);
    //Process/Calculations Here
    
    //Output Located Here
   
    //Exit
    return 0;
}

 float getnuma(){
      
       float sales;
       cout << "What is the total accidents for this City? :"; 
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
float findlow (float n, float e, float s, float w, float c) 
{
    if(n <= s && n <= e && n <= w && n<=c){
        cout << "The safest city is North with total accidents of " << n <<endl;
    }
   if(e <= s && e <= n && e <= w && e<=c){
        cout << "The safest city is East with total accidents of " << e <<endl;
    }
    if(s <= n && s <= e && s <= w && s<=c){
        cout << "The safest city is South with total accidents of " << s <<endl;
    }
   if(w <= s && w <= e && w <= n && w<=c){
        cout << "The safest city is West with total accidents of " << w <<endl;
    }
    if(c <= s && c <= e && c <= w && c<=n){
        cout << "The safest city is Central with total accidents of " << c <<endl;
    }
}
 