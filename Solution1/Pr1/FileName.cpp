/*         #1
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");
    int num1, num2, num3;

    cout << "������ ����� �����: ";
    cin >> num1;

    cout << "������ ����� �����: ";
    cin >> num2;

    cout << "������ ���� �����: ";
    cin >> num3;

    cout << "�����, �� �������� ��������� [1, 9]: ";
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

    cout << "������ ������� �������� (n): ";
    cin >> n;

    double sum = 0;
    double value = 1.0;

    cout << "����� ���� �� �� ����:\n";

    for (int i = 0; i < n; ++i) {

        cout << value << " ";

        sum += value;

        value = -value / 2.0;
    }

    cout << "\n���� �������� ����: " << sum << endl;

    return 0;
}
*/



/*         #4
#include <iostream> 
using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");
    int n;
    cout << "������ ���� ����� (�� ����� 2): ";
    cin >> n;
    while (n < 2) {
        cout << "���� �����, ������ ����� �� ����� 2: ";
        cin >> n;
    }
    int i = 2;
    while (n % i != 0) {
        i++;
    }
    cout << "��������� ����������� ������ ����� " << n << " - �� " << i << endl;
    return 0;
}
*/



/*         #5  
#include <iostream> 
using namespace std;
int main() {
    setlocale(LC_ALL, "ukr");

    int n;
    cout << "������ ������� ����� ����������� Գ�������: ";
    cin >> n;

    int first = 0, second = 1;

    cout <<"����������� Գ�������: ";
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
        cout << "������ ����� �� 0 �� 20: ";
        cin >> guess;

        if (guess < 0 || guess > 20) {
            cout << "������ ��������!!!" << endl;
            continue;
        }
        attempts++;

        if (guess < secretNumber) {
            cout << "������������� ����� ����� ����������." << endl;
        }
        else if (guess > secretNumber) {
            cout << "������������� ����� ����� ����������." << endl;
        }
        else {
            cout << "�� ������� ����� � " << attempts << " ����." << endl;
            break;
        }
    }
    return 0;
}
