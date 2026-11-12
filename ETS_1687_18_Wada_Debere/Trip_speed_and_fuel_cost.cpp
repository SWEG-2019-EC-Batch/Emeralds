1. Problem description
​Write a C++ program that reads the distance of a trip in km, the travel time as hours and minutes, the car's fuel use in liters per 100 km, and the price per liter. 
Print the average speed, the fuel used, and the total fuel cost, each formatted to two decimal places.
 2. Problem analysis
Input
  ​Distance of the trip 
  ​Travel time
  ​Fuel consumption rate
  ​Price per liter 
​Output
  ​Average speed 
  ​Fuel used 
  ​Fuel cost 
​3. Process (operations)
 1.​Declare variables
 2.​Prompt the user and read the input values.
 3.​Convert the total travel time into hours as a floating-point number.
 4.​Calculate the average seed.
 5.​Calculate the fuel used.
 6.​Calculate the fuel cost.
 7.​Print the results formatted to two decimal places.

 ​4. Design the program
1.double  distance,fuelPer100Km,      pricePerLiter,totalHours, averageSpeed,fuelUsed,fuelCost;
  int  hours,minutes;
2.cout << "Enter distance (km), hours, minutes, fuel per 100km, and price per liter: ";
  cin >> distance >> hours >> minutes >> fuelPer100Km >> pricePerLiter;
3.double totalHours = hours + (minutes / 60.0);
4.double averageSpeed = distance / totalHours;
5.double fuelUsed = (distance * fuelPer100Km) / 100.0;
6.double fuelCost = fuelUsed * pricePerLiter;
7.cout << fixed << setprecision(2);
  cout << "Average speed : " << averageSpeed << " km/h" << endl;
  cout << "Fuel used     : " << fuelUsed << " liters" << endl;
  cout << "Fuel cost     : " << fuelCost << " birr" << endl;

 5 write the code

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double  distance, fuelPer100Km, pricePerLiter;
  int  hours, minutes;
    
  double totalHours, averageSpeed, fuelUsed, fuelCost;
    cout << "Enter distance (km), hours, minutes, fuel per 100km, and price per liter: ";
    cin >> distance >> hours >> minutes >> fuelPer100Km >> pricePerLiter
    totalHours = hours + (minutes / 60.0);
    averageSpeed = distance / totalHours;
    fuelUsed = (distance * fuelPer100Km) / 100.0;
    fuelCost = fuelUsed * pricePerLiter;
    cout << fixed << setprecision(2);
    cout << "Average speed : " << averageSpeed << " km/h" << endl;
    cout << "Fuel used     : " << fuelUsed << " liters" << endl;
    cout << "Fuel cost     : " << fuelCost << " birr" << endl;

    return 0;
}