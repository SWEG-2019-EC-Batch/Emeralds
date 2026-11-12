#include <iostream>
#include <iomanip>
using namespace std;

int main()
 {
    //variable declaration
    double distance, fuelRate, priceperLiter;
    double hours, minutes, totalTime;
    double averageSpeed, fuelUsed, fuelCost;
//recieve input using cout and cin
    cout << "Enter distance in km: ";
    cin >> distance;

    cout << "Enter travel hours: ";
    cin >> hours;

    cout << "Enter travel minutes: ";
    cin >> minutes;

    cout << "Enter fuel consumption in L/100km : ";
    cin >> fuelRate;

    cout << "Enter price per liter: ";
    cin >> priceperLiter;
    
    //calculate totaltime, averagespeed,fuelused,fuelcost using arthimatic operation

    totalTime = hours + (minutes / 60.0);

    averageSpeed = distance / totalTime;

    fuelUsed = (distance * fuelRate) / 100;

    fuelCost = fuelUsed * priceperLiter;

//set a precision of 2 decimal place
    cout << fixed << setprecision(2);
    
//print out the calculated results

    cout << "Average Speed: " << averageSpeed << " km/h" << endl;
    cout << "Fuel Used: " << fuelUsed << " liters" << endl;
    cout << "Fuel Cost: " << fuelCost << " birr" << endl;

    return 0;
}
