#include <iostream>
using namespace std;

// variable declarations
float baseFare, bagWeight, Rate;
float extraCharge = 0, totalFare;
const short int WEIGHT_LIMIT = 20;

float discount;
short int age;
char isstud;

int main()
{
    // Getting passenger and baggage information
    cout << "Enter the base fare in ETB \n";
    cin >> baseFare;

    cout << "Enter bag weight in Kg \n";
    cin >> bagWeight;

    cout << "Enter rate \n";
    cin >> Rate;

    cout << "Enter your age \n";
    cin >> age;

    cout << "Type Y if student, if not type N \n";
    cin >> isstud;

    // Calculating extra baggage charge
    // Extra charge applies when baggage exceeds 20 kg
    if (bagWeight > WEIGHT_LIMIT)
    {
        extraCharge = (bagWeight - WEIGHT_LIMIT) * Rate;
    }

    // Checking passenger eligibility for discounts
    if (age <= 0)
        cout << "Invalid age!" << endl;

    // 65% discount for students aged 12 or below
    else if (age <= 12 && isstud == 'Y')
        discount = 0.65;

    // 40% discount for students aged 60 or above
    else if (age >= 60 && isstud == 'Y')
        discount = 0.4;

    // 50% discount for non-students aged 12 or below
    else if (age <= 12 && isstud == 'N')
        discount = 0.5;

    // 25% discount for non-students aged 60 or above
    else if (age >= 60 && isstud == 'N')
        discount = 0.25;

    // No discount for other passengers
    else
        discount = 0;

    // Calculating the actual discount amount
    discount *= baseFare;

    // Calculating the final ticket fare
    totalFare = extraCharge + baseFare - discount;

    // Displaying fare details
    cout << "Base fare = " << baseFare << " ETB" << endl;
    cout << "Extra Charge = " << extraCharge << " ETB" << endl;
    cout << "Discount = " << discount << " ETB" << endl;
    cout << "Total Fare = " << totalFare << " ETB" << endl;

    

      // Declaring a variable to store destination choice
    int choice;

    // Displaying airline information
    cout << "\n          ETHIOPIAN BUS TRANSPORTATION\n";
    cout << "Starting Point: Addis Ababa, Ethiopia" << endl;

    // Displaying available domestic destinations
    cout << "\nAVAILABLE DOMESTIC DESTINATIONS\n" << endl;

    cout << "1. Bahir Dar" << endl;
    cout << "2. Arba Minch" << endl;
    cout << "3. Harar" << endl;
    cout << "4. Dire Dawa" << endl;
    cout << "5. Gondar" << endl;
    cout << "6. Jimma" << endl;

    // Getting the passenger's destination choice
    cout << "\nEnter your destination choice (1-6): ";
    cin >> choice;

    // Using switch to identify the selected destination
    switch (choice)
    {
        case 1:
            cout << "Starting Point: Addis Ababa"
                 << "\nDestination: Bahir Dar";
            break;

        case 2:
            cout << "Starting Point: Addis Ababa"
                 << "\nDestination: Arba Minch";
            break;

        case 3:
            cout << "Starting Point: Addis Ababa"
                 << "\nDestination: Harar";
            break;

        case 4:
            cout << "Starting Point: Addis Ababa"
                 << "\nDestination: Dire Dawa";
            break;

        case 5:
            cout << "Starting Point: Addis Ababa"
                 << "\nDestination: Gondar";
            break;

        case 6:
            cout << "Starting Point: Addis Ababa"
                 << "\nDestination: Jimma";
            break;

        // Handling invalid destination choices
        default:
            cout << "Invalid destination choice!";
    }
    return 0;
}
