 /* 
 * File:   main.cpp
 * Author: Joshua Duque
 * Created on 7/27/17
 * Purpose: Blackjack! with Arrays and sorting.
 */

//System Libraries
#include <cstdlib>//Random function srand
#include <iostream>//Standard input/output
#include <ctime>//time for random and program
#include <cstdlib>   //srand
#include <string>// string 
#include <fstream> // file 
#include <cmath>     //Math functions
using namespace std;
//Function Prototypes
void deal(int&, int&, int&);// deal player function
void dealh(int&, int&, int&); //deal house function
//Execution Starts Here
int main(int argc, char** argv) {
   //Random Seed and Variable Declaration
    srand(static_cast<unsigned int>(time(0))); 
    //Declare all variables here
    char choice;//choice for menu
    string enter, name, how,how2;//enter program
    //open an output file
    cout<<"Type 'enter' to begin or type 'leave' to exit" <<endl;
    cin>>enter;
    
    while (enter != "leave" ){
        // Menu
        cin.get();
        cout<<"---------------------------------------------------------"<<endl;
        cout<<"BlackJack! Select an option"<<endl;
        cout<<"1: Rules and How to"<<endl;
        cout<<"2: Start!"<<endl;
        cout<<"3: End Game"<<endl;
        cout<<"---------------------------------------------------------"<<endl;
        //Input your choice
        cin>>choice;
        //Solve the problem chosen
        switch(choice){
            //summery 
            case '1':{
                ifstream input;
                input.open("how.txt");
                input>>how;
                cout<<how<<endl;
                input>>how2;
                cout<<how2<<endl;
                cout<<"Rules and How to play"<<endl;
                cout<<"The objective is to score 21 points."<<endl;
                cout<<"Cards 2-10 show its worth values."<<endl;
                cout<<"Face cards are all worth 10."<<endl;
                cout<<"Aces are worth 1 or 11."<<endl;
                cout<<"Your initially dealt two cards and asked to";
                cout<<" Hit or Sit."<<endl;
                cout<<"If you choose to hit, you will be given ";
                cout <<"another card."<<endl;
                cout<<"If you choose to sit, you will stay with ";
                cout<<"the current cards you have"<<endl;
                cout<<"The closest one to 21 without going over ";
                cout<< "wins."<<endl;
                cout<<"Going Over 21 is known as a bust";
                cout<<" and will result in a lost"<<endl;
                cout<<"If a draw is to occur, no one wins"<<endl;
                cout<<"Press Enter to continue"<<endl;
                input.close();
                cin.get();
            }
                break;                    
                               
            case '2':     {
                ofstream outputFile; 
                outputFile.open("Game.txt");
                cout<<"Enter your first name!"<<endl;
                cin>>name;
                cout<<" "<<endl;
                outputFile<<name<<endl;
                cout<<"Game is Out of 5. See if you can beat the house!"<<endl;
                cout<<" "<<endl;
                for(int count=0;count<5;count++)
                {
                    
                       //play the game
            
                        int card1,card2,value, suit, pT, total, hT; //card1
                        int win, lost,draw;
                        //card2, value to pass to by reference, suit , player total
                        //points, total to pass by reference, house total
                        char yn; //yes or no 
                        bool stay=true; //leave menu true or false
                        //initialize accumulator for running total
                        pT=0;// player total
                        hT=0;//house total
                      
                        //Player's Initial Hand
                        
                        cout<<"You have been dealt the following cards: ";
                      
                        deal(card1, suit, total);// call fuction
                        cout<<" and ";  
                        deal(card2, suit, total);// call deal fuction
                        pT=card1+card2;// add initial cards
                      
                        cout<<"Your score is now: ";
                        cout<<pT<<endl;//display initial score
                        cout<<"Would you like another card?"<<endl;
                                cout<<"Enter '1' for yes and '0' for no: ";
                                cin>>stay;
                        //Allow Player to Hit or Sit
                        
                        while (stay && pT<21)
                        {
                             cout<<"You have been dealt a ";
                            deal(value, suit, total); // deal player function call
                            pT+=value; //accumulate total player 
                            cout<<"Your score is now: ";
                            cout<<pT;
                                cout<<" "<<endl;
                                cout<<"Would you like another card?"<<endl;
                                cout<<"Enter '1' for yes and '0' for no: ";
                                cin>>stay;
                            
                        }
                        //House's Hand
                        cout<<" "<<endl;
                       cout<<"The house has been dealt: ";
                       dealh(value, suit, total);
                       hT+=value;
                       do{
                       cout<<" and ";
                       dealh(value, suit, total);
                       hT+=value;
                       //if points are less than 16 house continues to deal
                       }while(hT<16);
                       cout<<" The house's score is: ";
                       cout<<hT;
                       cout<<" "<<endl;
                       
                       //Outcome of game
                       if(pT==21 && (pT!=hT))// if player gets 21 and is not tied
                           cout<<"BlackJack! You win!"<<endl;
                       if(pT>hT&&pT<21)
                       {
                           cout<<"You win"<<endl;
                           outputFile<<"Win- "<<endl;
                           
                       }
                       else if(hT>21&&pT<=21)//if house goes over 21 and player
                       {                        //is below 21
                           cout<<"House went over 21. You win"<<endl;
                           outputFile<<"Win- "<<endl;
                           
                       }
                       else if(pT>21)//if player gets over 21
                       {
                           cout<<"Bust! You went over 21!"<<endl;
                           outputFile<<"Lost- "<<endl;
                       }
                       else if(pT<hT&&hT<=21)//if house gets closer to 21 but 
                       {                    //below 21
                           cout<<"House Wins "<<endl;
                           outputFile<<"Lost- "<<endl;
                       }
                       else if(pT==hT)//draw if player and house gets the same 
                       {                //score
                           cout<<"Draw!"<<endl;
                           outputFile<<"Draw- "<<endl;
                           
                       }
                   
                }
                 outputFile.close();
                    
                       cout<<" "<<endl;
                       cout<<"Press enter to continue"<<endl;
                       cin.get();//pause so its easier to see interface
                                break;
            }
            case '3': 
                
                    cout<<"Goodbye!"<<endl;
                    exit(0);//exit menu and program
                    
                    break;
                                
            default: cout<<"Please pick the given options"<<endl;
                                //input valididation using loop and default 
                            }
                        }
    cout<<"Goodbye"<<endl;
    
    return 0;//exit
}

//Function Definition (Card Dealing Function)
//Pass by reference so we can change original argument and accumulate 
void deal(int& crdV, int& crdS, int& Total){ //deal player 
    //Randomly selects card values
    crdV=rand()%13+1;
    if ((crdV<=10) && (crdV>=2)){//number card
        cout<<crdV;
        cout<<" of ";
    }
    if (crdV==11){//jack
        cout<<" Jack of ";
        crdV=10;
    }
    if (crdV==12){//queen
        cout<<" Queen of ";
        crdV=10;
    }
    if (crdV==13){//king
        cout<<" King of ";
        crdV=10;
    }
    if (crdV==1){        //Ace plus the option to pick if its 11 or 1
        cout<<" You got an Ace, ";
        int ace;
        cout<<"would you like the value to equal 1 or 11: ";
        cin>>ace;
        if (ace==1){
            crdV=1;
        }else
            crdV=11;
        }
   crdS=rand()%4+1; // Random suit given
   if(crdS==1){
       cout<<"Clubs ";
   }
   if(crdS==2){
       cout<<"Diamonds ";
   }
   if(crdS==3){
       cout<<"Spades  ";
   }
   if (crdS==4){
       cout<<"Hearts ";
   }
}
void dealh (int& crdV, int& crdS, int& Total){ //deal house 
    //Randomly selects card values
    crdV=rand()%13+1;
    if (crdV<=10&&crdV>=2){
        cout<<crdV;
        cout<<" of ";
    }
    if (crdV==11){
        cout<<" Jack of ";
        crdV=10;
    }
    if (crdV==12){
        cout<<" Queen of ";
        crdV=10;
    }
    if (crdV==13){
        cout<<" King of ";
        crdV=10;
    }
    if (crdV==1){        
        cout<<" Ace of ";
         if (Total<10){// Ace card value =11 if total house points is less than 
            crdV=11;    //10
        }else
            crdV=1;//if total is less than 10 the value of ace is 1
    }
   crdS=rand()%4+1; // Suits
   if(crdS==1){
       cout<<"Clubs ";
   }
   if(crdS==2){
       cout<<"Diamonds ";
   }
   if(crdS==3){
       cout<<"Spades ";
   }
   if (crdS==4){
       cout<<"Hearts ";
   }
}
