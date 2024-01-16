#include <iostream>
#include <vector>

using namespace std;

double add(const vector<double>& numbers) {
    double sum = 0;
    for (const double& num : numbers) {
        sum += num;
    }
    return sum;
}

double sub(const vector<double>& numbers) {
    double result = numbers[0];
    for (int i = 1; i < numbers.size(); i++) {
        result -= numbers[i];
    }
    return result;
}

double mul(const vector<double>& numbers) {
    double result = 1;
    for (const double& num : numbers) {
        result *= num;
    }
    return result;
}

double div(const vector<double>& numbers) {
    double result = numbers[0];
    for (int i = 1; i < numbers.size(); i++) {
        result /= numbers[i];
    }
    return result;
}

int main() {
    while (true) {
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        
        int choice;
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting the program..." << endl;
            break;
        }

        int numCount;
        cout << "Enter the number of values: ";
        cin >> numCount;

        vector<double> numbers;
        for (int i = 0; i < numCount; i++) {
            double number;
            cout << "Enter number " << i + 1 << ": ";
            cin >> number;
            numbers.push_back(number);
        }

        double result;
        switch (choice) {
            case 1:
                result = add(numbers);
                cout << "The sum of the numbers is: " << result << endl;
                break;
            case 2:
                result = sub(numbers);
                cout << "The result of subtraction is: " << result << endl;
                break;
            case 3:
                result = mul(numbers);
                cout << "The result of multiplication is: " << result << endl;
                break;
            case 4:
                result = div(numbers);
                cout << "The result of division is: " << result << endl;
                break;
            default:
                cout << "Invalid choice! Please enter a valid option." << endl;
                break;
        }
    }
    return 0;
}