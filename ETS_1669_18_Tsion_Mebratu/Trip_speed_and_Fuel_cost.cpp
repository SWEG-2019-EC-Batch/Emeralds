/*
     Trip speed and fuel cost

 INPUT:
   - distance of the trip (km)
   - travel time (hours and minutes)
   - fuel use (liters per 100 km)
   - price per liter (birr)

 PROCESS:
   1. Read all the values.
   2. totalHours = hours + minutes / 60
   3. average speed = distance / totalHours
   4. fuel used = distance / 100 * fuel use per 100 km
   5. fuel cost = fuel used * price per liter

 OUTPUT:
   - average speed (km/h, two decimals)
   - fuel used (liters, two decimals)
   - fuel cost (birr, two decimals)

 TEST DATA:
   150 km, 2 h 30 min, 8 L/100 km, 60 birr/L
   -> 60.00 km/h, 12.00 liters, 720.00 birr
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double MINUTES_PER_HOUR = 60.0;
    const double KM_BASE = 100.0;

    double distance, fuelPer100, pricePerLiter;
    int hours, minutes;

    cout << "Enter distance (km): ";
    cin >> distance;
    cout << "Enter travel time (hours and minutes): ";
    cin >> hours >> minutes;
    cout << "Enter fuel use (liters per 100 km): ";
    cin >> fuelPer100;
    cout << "Enter price per liter (birr): ";
    cin >> pricePerLiter;

    double totalHours = static_cast<double>(hours)
                      + static_cast<double>(minutes) / MINUTES_PER_HOUR;

    double averageSpeed = distance / totalHours;
    double fuelUsed = distance / KM_BASE * fuelPer100;
    double fuelCost = fuelUsed * pricePerLiter;

    cout << fixed << setprecision(2);
    cout << "Average speed: " << averageSpeed << " km/h" << endl;
    cout << "Fuel used: " << fuelUsed << " liters" << endl;
    cout << "Fuel cost: " << fuelCost << " birr" << endl;

    return 0;
}