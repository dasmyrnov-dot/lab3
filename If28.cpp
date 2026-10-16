#include <iostream>
using namespace std;

int main()
{
    // year - номер року
    // days - кількість днів у році
    int year, days;

    // Вводимо рік
    cin >> year;

    // Перевіряємо, чи є рік високосним
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        days = 366;
    }
    else
    {
        days = 365;
    }

    // Виводимо результат
    cout << "Kilkist dniv = " << days << endl;

    return 0;
}
