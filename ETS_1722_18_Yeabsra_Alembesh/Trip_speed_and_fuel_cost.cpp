#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double distance, fuelrate, price;
    double time, speed, fuel, cost;
    int hours, minutes;

    cout << "Enter trip distance (km): ";
    cin >> distance;
    cout << "Enter travel time (whole hours and remaining minutes): ";
    cin >> hours >> minutes;
    cout << "Enter fuel use (liters per 100 km): ";
    cin >> fuelrate;
    cout << "Enter fuel price (birr per liter): ";
    cin >> price;

    time = hours + static_cast<double>(minutes) / 60;
    speed = distance / time;
    fuel = distance * fuelrate / 100.0;
    cost = fuel * price;

    cout << fixed << setprecision(2);
    cout << "Average speed: " << speed << " km/h\n";
    cout << "Fuel used: " << fuel << " liters\n";
    cout << "Fuel cost: " << cost << " birr\n";

    return 0;
}
