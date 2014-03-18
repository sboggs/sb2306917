/* 
 * File:   main.cpp
 * Author: Stephen Boggs
 * Created on March 10, 2014, 7:52 AM
 * Purpose: Convert from mph to mpm and mps
 */

//Include libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//Execution beings here
int main(int argc, char** argv) 
{
    //Declare variables
    float mph,mpm,mps;
    const float CNVHMIN = 1.0/6.0e1;
        //Hours to minutes
    const float CNVMSEC = CNVHMIN;
        //Minutes to seconds
    //Input the mph
    cout<<"Input MPH "<<endl;
    cin>>mph;
    //Process for the conversion
    mpm = mph*CNVHMIN;
    mps = mpm*CNVMSEC;
    //Output the results
    cout<<fixed<<setprecision(5)<<showpoint;
    cout<<"Conversion to mpm = "<<mpm;
    cout<<" miles per minute"<<endl;
    cout<<"Conversion to mps = "<<mps;
    cout<<" miles per second"<<endl; 
    //Exit stage right
    return 0;
}

