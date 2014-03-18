/* 
 * File:   main.cpp
 * Author: Stephen Boggs
 * Created on March 17, 2014, 7:55 AM
 * Purpose: Convert ounces to metric tons
 */

//Global Constants

//Function Prototypes

//Include system libraries
#include <iostream>
using namespace std;

//Execution beings here
int main(int argc, char** argv) {
    //Declare variable
    float wMouse,wDieter,artSwtr,death;
    const float sdaSwtr=.01*.001;
    
    //Prompt user for input
    cout<<"Enter the amount of artificial sweetener"<<endl;
    cout<<"needed to kill a mouse,"<<endl;
    cout<<"the weight of the mouse,"<<endl;
    cout<<"and the goal weight of the dieter."<<endl;
    cin>>artSwtr>>wMouse>>wDieter;
    //Perform calculations
    death=(artSwtr/wMouse)*wDieter;
    death=death*sdaSwtr;
    //Display results
    cout<<"If the amount of sweetener needed to kill"<<endl;
    cout<<"a mouse is "<<artSwtr<<endl;
    cout<<"and the weight of the mouse is "<<wMouse<<endl;
    cout<<"then you can drink "<<death<<" diet sodas"<<endl;
    cout<<"at your goal weight of "<<wDieter<<endl;
    cout<<"before you die."<<endl;
    //Exit stage right
    return 0;
}

