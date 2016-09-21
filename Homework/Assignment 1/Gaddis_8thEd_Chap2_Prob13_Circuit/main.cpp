/* 
   File:   main
   Author: Andrew Won
   Created on September 17, 2016, 5:03 PM
   Purpose:  Calculate how much you profit from selling circuit board
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float perc=.35;   //what percentage the company will charge extra
    float circuit=14.95;   //How much a circuit board costs without the profit
    float profit;     //How much the company will profit
    float TOTAL;      //price of the circuit with the profit
    //Input values
    profit=circuit*perc;    //how much the extra cost is
    TOTAL=profit+circuit;   //the cost of the entire circuit board with profit
    
    //Display Output
    cout<<"The cost of the circuit board is = $"<<circuit<<endl;
    cout<<"The company charges $"<<profit<<" extra for profit"<<endl;
    cout<<"With the extra charge added on, the new circuit board is = $"<<TOTAL<<endl;
    
    //Exit Program
    return 0;
}