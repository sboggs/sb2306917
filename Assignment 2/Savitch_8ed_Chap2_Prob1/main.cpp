/* 
 * File:   main.cpp
 * Author: Stephen Boggs
 * Created on March 17, 2014, 7:55 AM
 * Purpose: Convert ounces to metric tons
 */

//Global Constants
const float mtricTn=35273.92;


//Function Prototypes

//Include system libraries
#include <iostream>
using namespace std;

//Execution beings here
int main(int argc, char** argv) {
    //Declare variable
    float ounces,boxes,weight;
    //Prompt user for input
    cout<<"Enter the weight of cereal box in ounces, then press enter"<<endl;
    cin>>ounces;
    //Perform calculations
    weight=ounces/mtricTn;
    boxes=1/weight;
    //Output weight in ounces and metric tons
    //Output number of boxes needed to equal 1 metric ton in weight
    cout<<"If box weighs "<<ounces<<" ounces"<<endl;
    cout<<"the weight in metric tons is "<<weight<<endl;
    cout<<""<<endl;
    cout<<"It would take "<<boxes<<" boxes to equal 1 metric ton"<<endl;
    //Exit stage right
    return 0;
}

