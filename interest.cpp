#include <iostream>
#include <cmath> // For pow() function
using namespace std;

class Interest {
private:
    double P, R, T;
    double SI, CI, totalAmount;

public:
    // Constructor
    Interest(double principal, double rate, double time) {
        P = principal;
        R = rate;
        T = time;

        // Calculate Simple Interest
        SI = (P * R * T) / 100;

        // Calculate Compound Interest
        totalAmount = P * pow((1 + R/100), T);//whole power T i.e. time
        CI = totalAmount - P;
    }

    // Function to display results
    void display() {
        cout << "\nSimple Interest = " << SI << endl;
        cout << "Compound Interest = " << CI << endl;
        cout << "Total Amount after Compound Interest = " << totalAmount << endl;
    }
};

int main() {
    double principal, rate, time;

    // Input
    cout << "Enter Principal amount: ";
    cin >> principal;
    cout << "Enter Rate of Interest (%): ";
    cin >> rate;
    cout << "Enter Time (in years): ";
    cin >> time;

    // Create object and calculate interest
    Interest I(principal, rate, time);

    // Display results
    I.display();

    return 0;
}