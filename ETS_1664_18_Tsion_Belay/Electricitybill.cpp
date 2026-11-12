#include <iostream>
#include <iomanip>
using namespace std;

// variable declaration int for electricityUnits and doible for the rest
int electricityUnits ;

double energyCharge,  serviceCharge=10.0 ,totalBill =0.0;

int main() 
{
    // recieve inputs
    cout <<"Enter Electrcity units used in a monthin KWh";
    
    cin>>electricityUnits;
    // calculate energycharge using conditional operator
    
    energyCharge= ( electricityUnits <=50 ? electricityUnits*1.50 : (50* 1.50 )+ ( electricityUnits-50)*2.00);
    
   // calculate total bill using arthimatic operator 
    totalBill= energyCharge + serviceCharge;
    
    // set precision of 2 
    cout<< fixed<< setprecision(2);
    
    //print out the calculated result
    cout<<"Energy Charge: "<< energyCharge<< "birr"<<endl;
    cout<<"Service Charge: "<< serviceCharge<<"birr"<<endl;
    cout<<"Total bill: " <<totalBill<<"birr"<<endl;
    
    //finish program
     return 0;
}
