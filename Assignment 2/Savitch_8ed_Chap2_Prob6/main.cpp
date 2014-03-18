/* 
 * File:   main.cpp
 * Author: Stephen Boggs
 * Created on March 17, 2014, 7:55 AM
 * Purpose: use if/else statements
 */

//Global Constants

//Function Prototypes

//Include system libraries
#include <iostream>
using namespace std;

//Execution beings here
int main(int argc, char** argv) {
    //Declare variable
    unsigned int max,attend,leave;
    
    //Prompt user for input
    cout<<"Enter the maximum room capacity"<<endl;
    cout<<"and the number of people attending the meeting"<<endl;
    cout<<"then press enter"<<endl;
    cin>>max>>attend;
    if (attend<=max)
    {
        cout<<"It is legal to hold this meeting"<<endl;
        cout<<"and "<<max<<" number of people may attend."<<endl;
    }
    else
    {
        //perform calculation
        leave=attend-max;
        cout<<"The meeting can not be held due"<<endl;
        cout<<"to fire regulations and"<<endl;
        cout<<leave<<" number of people must leave."<<endl;
    }
    //Exit stage right
    return 0;
}