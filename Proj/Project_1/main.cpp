/* 
 * File:   main.cpp
 * Author: Andrew Cruz
 * Created on Oct 28th, 2017, 9:00 AM
 * Purpose:  Blackjack Game Project
 */
//System Libraries

#include <iostream>     //Input/Output Stream Library
#include <cstdlib>      //Library set random number seed
#include <ctime>        //Libary to seed the random number generator
#include <iomanip>      //Format Library
#include <fstream>      //File Library
#include <string.h>     //String Library
using namespace std;    //Standard Name-space under which System Libraries reside
    

int main(int argc, char** argv) {

    int choice;
    float wager;
    float housewager;
    float bets;
    char action;
    
    //Loop the Menu and Problems
    cout<<"How many games would you like to play?: ";
    cin>>choice;
    do{
        cout<<"Dealers hand: \n";
        int card1=(rand()%(14-2+1))+2;  //dealer card 1
        int card2=(rand()%(14-2+1))+2;  //dealer card 2
        int card=(rand()%(14-2+1))+2;  //dealer card 3 to hit if needed
            switch (card1)
                {
                    case 11: cout<<"Ace";
                    break;
                    case 12: cout<<"Jack";
                    break;
                    case 13: cout<<"Queen";
                    break;
                    case 14: cout<<"King";
                    break;
                    default: cout<<card1;
                    break;
                }
            cout<<" and ";
                switch (card2)
                {
                    case 11: cout<<"Ace";
                    break;
                    case 12: cout<<"Jack";
                    break;
                    case 13: cout<<"Queen";
                    break;
                    case 14: cout<<"King";
                    break;
                    default: cout<<card2;
                    break;
                }
                cout<<endl;
                
                       // if (action=='H'||action=='h')
                    
    }while(--choice>=1);
    
    return 0;
}