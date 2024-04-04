#include <iostream>
using namespace std;

int main() {
    int choice, number = 0, amount = 0;
    int bike = 0, rickshaw = 0, car = 0, bus = 0;

    while (true) {
        cout << "Press 1 for Bike\n";
        cout << "Press 2 for Rickshaw\n";
        cout << "Press 3 for Car\n";
        cout << "Press 4 for Bus\n";
        cout << "Press 5 to see the total amount\n";
        cout << "Press 6 to Delete the data\n";
        cout << "Enter number: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (number < 50) {
                    cout << "Bike is parked\n\n";
                    number++;
                    bike++;
                    amount += 50;
                } else {
                    cout << "Parking is full for bikes.\n\n";
                }
                break;
            case 2:
                if (number < 50) {
                    cout << "Rickshaw is parked.\n\n";
                    number++;
                    rickshaw++;
                    amount += 100;
                } else {
                    cout << "Parking is full for rickshaws.\n\n";
                }
                break;
            case 3:
                if (number < 50) {
                    cout << "Car is parked.\n\n";
                    number++;
                    car++;
                    amount += 150;
                } else {
                    cout << "Parking is full for cars.\n\n";
                }
                break;
            case 4:
                if (number < 50) {
                    cout << "Bus is parked.\n\n";
                    number++;
                    bus++;
                    amount += 200;
                } else {
                    cout << "Parking is full for buses.\n\n";
                }
                break;
            case 5:
                cout << "*******************************\n";
                cout << "Total Amount = " << amount << endl;
                cout << "Number of vehicles = " << number << endl;
                cout << "Number of Bikes = " << bike << endl;
                cout << "Number of Rickshaws = " << rickshaw << endl;
                cout << "Number of Cars = " << car << endl;
                cout << "Number of Buses = " << bus << endl;
                cout << "*******************************\n\n";
                break;
            case 6:
                cout << "*******************************\n";
                cout << "RECORD DELETED\n";
                cout << "*******************************\n\n";
                amount = 0;
                number = 0;
                bike = 0;
                rickshaw = 0;
                car = 0;
                bus = 0;
                break;
            default:
                cout << "Invalid Entry.\n";
                break;
        }
    }

    return 0;
}
