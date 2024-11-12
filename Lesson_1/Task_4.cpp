#include <iostream>

using namespace std;

int main()
{
    int   salary;
    cout << "Напиши свою зарплату: ";
    cin >> salary;

    if (salary < 1000) {
        cout << "Працюй більше!" << endl;
    }

    if (salary > 999) {

        if (salary < 1000000) {
            cout << "Молодець!" << endl;
        }

        if (salary > 999999) {
            cout << "Ви мільйонер !" << endl;
        }
    }


}