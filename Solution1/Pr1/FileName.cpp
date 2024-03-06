/*         #1
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");
    int num1, num2, num3;

    cout << "Введіть перше число: ";
    cin >> num1;

    cout << "Введіть друге число: ";
    cin >> num2;

    cout << "Введіть третє число: ";
    cin >> num3;

    cout << "Числа, які належать інтервалу [1, 9]: ";
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

    cout << "Введіть кількість елементів (n): ";
    cin >> n;

    double sum = 0;
    double value = 1.0;

    cout << "Члени ряду та їх сума:\n";

    for (int i = 0; i < n; ++i) {

        cout << value << " ";

        sum += value;

        value = -value / 2.0;
    }

    cout << "\nСума елементів ряду: " << sum << endl;

    return 0;
}
*/



/*         #4
#include <iostream> 
using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");
    int n;
    cout << "Введіть ціле число (не менше 2): ";
    cin >> n;
    while (n < 2) {
        cout << "Будь ласка, введіть число не менше 2: ";
        cin >> n;
    }
    int i = 2;
    while (n % i != 0) {
        i++;
    }
    cout << "Найменший натуральний дільник числа " << n << " - це " << i << endl;
    return 0;
}
*/



/*         #5  
#include <iostream> 
using namespace std;
int main() {
    setlocale(LC_ALL, "ukr");

    int n;
    cout << "Введіть кількість членів послідовності Фібоначчі: ";
    cin >> n;

    int first = 0, second = 1;

    cout <<"Послідовність Фібоначчі: ";
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
        cout << "Введіть число від 0 до 20: ";
        cin >> guess;

        if (guess < 0 || guess > 20) {
            cout << "Невірне значення!!!" << endl;
            continue;
        }
        attempts++;

        if (guess < secretNumber) {
            cout << "Запропоноване число менше задуманого." << endl;
        }
        else if (guess > secretNumber) {
            cout << "Запропоноване число більше задуманого." << endl;
        }
        else {
            cout << "Ви вгадали число з " << attempts << " разу." << endl;
            break;
        }
    }
    return 0;
}
