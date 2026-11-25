#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    const double FREE_WEIGHT = 20.0;   // kg allowed for free

    int    routeChoice, age;
    char   studentAnswer;
    bool   isStudent;
    double baseFare, bagWeight, ratePerKg;
    string routeName;

    cout << fixed << setprecision(2);

    // ---------------- ROUTE SELECTION (switch) ----------------
    cout << "====== Bus Ticket Booking (From Addis Ababa) ======\n";
    cout << "Press 1 to Adama\n";
    cout << "Press 2 to Bahir Dar\n";
    cout << "Press 3 to Hawassa\n";
    cout << "Press 4 to Jimma\n";
    cout << "Press 5 to Mekelle\n";
    cout << "Your choice (1-5): ";
    cin >> routeChoice;

    switch (routeChoice)
    {
        case 1:  routeName = "Adama";     break;
        case 2:  routeName = "Bahir Dar"; break;
        case 3:  routeName = "Hawassa";   break;
        case 4:  routeName = "Jimma";     break;
        case 5:  routeName = "Mekelle";   break;
        default:
            cout << "Invalid route. Please run the program again.\n";
            return 1;
    }

    // ---------------- FARE INFO ----------------
    cout << "Enter the base fare in ETB: ";
    cin >> baseFare;

    if (baseFare < 0)
    {
        cout << "Base fare cannot be negative.\n";
        return 1;
    }

    // ---------------- PASSENGER INFO ----------------
    cout << "Enter traveler's age (in years): ";
    cin >> age;

    cout << "Is the traveler a student? (y/n): ";
    cin >> studentAnswer;
    isStudent = (studentAnswer == 'y' || studentAnswer == 'Y');

    // ---------------- BAG INFO ----------------
    cout << "Enter bag weight in kg: ";
    cin >> bagWeight;
    cout << "Enter the rate per extra kg in ETB: ";
    cin >> ratePerKg;

    if (bagWeight < 0 || ratePerKg < 0)
    {
        cout << "Bag weight and rate cannot be negative.\n";
        return 1;
    }

    // ---------------- DISCOUNT (if / else if ladder) ----------------
    double discountPercent = 0;

    if (age < 0)
    {
        cout << "Invalid age. Age cannot be less than 0.\n";
        return 1;
    }
    else if (age <= 12 && isStudent)        // child AND student
        discountPercent = 50 + 15;          // 65%
    else if (age <= 12)                     // child, not student
        discountPercent = 50;
    else if (age >= 60 && isStudent)        // elder AND student
        discountPercent = 25 + 15;          // 40%
    else if (age >= 60)                     // elder, not student
        discountPercent = 25;
    else if (isStudent)                     // 13-59 and student
        discountPercent = 15;
    else                                    // no discount
        discountPercent = 0;

    double discountAmount = baseFare * discountPercent / 100.0;
    double fareAfterDiscount = baseFare - discountAmount;

    // ---------------- BAGGAGE CHARGE ----------------
    double extraWeight = 0, extraCharge = 0;

    if (bagWeight > FREE_WEIGHT)
    {
        extraWeight = bagWeight - FREE_WEIGHT;
        extraCharge = extraWeight * ratePerKg;
    }

    double totalFare = fareAfterDiscount + extraCharge;

    // ---------------- TRIP INFORMATION ----------------
    cout << "\n=========== TRIP INFORMATION ===========\n";
    cout << "Route              : Addis Ababa -> " << routeName << "\n";
    cout << "Traveler age       : " << age << " years\n";
    cout << "Student            : " << (isStudent ? "Yes" : "No") << "\n";
    cout << "----------------------------------------\n";
    cout << "Base fare          : " << baseFare << " ETB\n";
    cout << "Discount (" << discountPercent << "%)  : -" << discountAmount << " ETB\n";
    cout << "Fare after discount: " << fareAfterDiscount << " ETB\n";
    cout << "----------------------------------------\n";

cout << "Bag weight         : " << bagWeight << " kg\n";
    cout << "Extra weight       : " << extraWeight << " kg\n";
    cout << "Extra bag charge   : " << extraCharge << " ETB\n";
    cout << "----------------------------------------\n";
    cout << "TOTAL FARE         : " << totalFare << " ETB\n";
    cout << "========================================\n";

    return 0;
}