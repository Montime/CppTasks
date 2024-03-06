/*         #1
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    cout << "Numbers belonging to the interval [1, 9]: ";
    if (num1 >= 1 && num1 <= 9) {
        cout << num1 << " ";
    }
    if (num2 >= 1 && num2 <= 9) {
        cout << num2 << " ";
    }
    if (num3 >= 1 && num3 <= 9) {
        cout << num3 << " ";
    }

    return 0;
}
*/



/*         #2
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter 3 numbers: \n";
    cin >> num1 >> num2 >> num3;

    int max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }
    cout << "Max number is: " << max << endl;
}
*/



/*         #3
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");

    int n;

    cout << "Enter the number of elements (n): ";
    cin >> n;

    double sum = 0;
    double value = 1.0;

    cout << "Series members and their sum:\n";

    for (int i = 0; i < n; ++i) {

        cout << value << " ";

        sum += value;

        value = -value / 2.0;
    }

    cout << "\nSum of series elements: " << sum << endl;

    return 0;
}
*/



/*         #4
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");
    int n;
    cout << "Enter an integer (at least 2): ";
    cin >> n;
    while (n < 2) {
        cout << "Please enter a number greater than or equal to 2: ";
        cin >> n;
    }
    int i = 2;
    while (n % i != 0) {
        i++;
    }
    cout << "The smallest natural divisor of the number " << n << " is " << i << endl;
    return 0;
}
*/



/*         #5
#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "ukr");

    int n;
    cout << "Enter the number of terms in the Fibonacci sequence: ";
    cin >> n;

    int first = 0, second = 1;

    cout <<"Fibonacci sequence: ";
    cout << first << ", " << second;

    for (int i = 2; i < n; ++i) {
        int next = first + second;
        cout << ", " << next;

        first = second;
        second = next;
    }

    cout << endl;

    return 0;
}
*/



/*         #6
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");
    srand(static_cast<unsigned int>(time(nullptr)));

    int secretNumber = rand() % 21;

    int guess;
    int attempts = 0;

    while (true) {
        cout << "Enter a number from 0 to 20: ";
        cin >> guess;

        if (guess < 0 || guess > 20) {
            cout << "Invalid value!!!" << endl;
            continue;
        }
        attempts++;

        if (guess < secretNumber) {
            cout << "The guessed number is less than the proposed one." << endl;
        }
        else if (guess > secretNumber) {
            cout << "The guessed number is greater than the proposed one." << endl;
        }
        else {
            cout << "You guessed the number in " << attempts << " attempts." << endl;
            break;
        }
    }
    return 0;
}
*/
