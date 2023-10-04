#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");
    
    int sequence;

    int n;
    cout << "Введите размер последовательности: ";
    cin >> n;

    cout << "Введите элементы последовательности: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> sequence[i];
    }

    int maxNumber = 0;
    int maxIndex = -1;
    int product = 1;

    for (int i = 0; i < n; i++) 
    {
        if (sequence[i] % 10 == 2) {
            if (sequence[i] > maxNumber) {
                maxNumber = sequence[i];
                maxIndex = i;
            }
            product *= sequence[i];
        }
    }

    cout << "Наибольшее число, оканчивающееся на 2: " << maxNumber << endl;
    cout << "Номер этого числа в последовательности: " << maxIndex << endl;
    cout << "Произведение чисел, оканчивающихся на 2: " << product << endl;

    return 0;
}
