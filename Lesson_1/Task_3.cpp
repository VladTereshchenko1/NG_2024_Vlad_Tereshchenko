#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "-------------------" << endl
        << "Введіть пере число: " ;
    cin >> a;
    cout << "Введіть друге число: ";
    cin >> b;
        

    cout << "-------------------" << endl
        << "1 - додавання " << endl 
        << "2 - різниця " << endl
        << "3 - множення " << endl
        << "4 - ділення " << endl 
        <<  "-------------------" << endl
        << "Введіть дію: " << endl;
    cin >> c;
    switch(c)
    {
    case 1:
        cout << a + b;
        break;
    case 2:
        cout << a - b;
        break;
    case 3:
        cout << a * b;
        break;
    case 4:
        cout << a / b;
        break;
    default:
        cout << "Немає такого варіанту відповіді";
    }
    return 0;
}