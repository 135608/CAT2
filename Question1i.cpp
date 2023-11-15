#include <iostream>
using namespace std;

int main(){
    double num1, num2, num3;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;


    int choice;

    if (num1 < num2&&num1 < num3) {
        choice = 1;
    } else if (num2 < num1&&num2 < num3) {
        choice = 2;
    } else if(num3 < num1&& num3 < num2) {
        choice = 3; 
    } else {
        choice = 4;
    }

    switch (choice) {
        case 1:
            cout << "The minimum number is: " << num1 << endl;
            break;
        case 2:
            cout << "The minimum number is: " << num2 << endl;
            break;
        case 3:
            cout << "The minimum number is: "<< num3 << endl;
            break;
        case 4:
            cout << "There is no minimum number";
    }

    return 0;
}