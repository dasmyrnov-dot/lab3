#include <iostream>
using namespace std;

int main()
{
    // Два цілі числа
    int A, B;

    // Вводимо A і B
    cin >> A >> B;

    // Якщо числа різні, записуємо їх суму
    if (A != B)
    {
        int sum = A + B;
        A = sum;
        B = sum;
    }
    else
    {
        // Якщо однакові, записуємо 0
        A = 0;
        B = 0;
    }

    // Виводимо результат
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

    return 0;
}
