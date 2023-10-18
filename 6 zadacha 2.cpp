#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int N{};

    cout << "Введите натуральное число N: ";
    cin >> N;

    if (N < 1000000000)
    {
        cout << "OK " << endl;
    }
    else
    {
        cout << "Not OK " << endl;
    }

    int frequency[10] = { 0 }; 

    while (N > 0) 
    {
        int digit = N % 10; 
        frequency[digit]++; 
        N /= 10; 
    }

    int mostFrequencyDigit = 0; 
    int maxFrequency = frequency[0]; 

    for (int i = 1; i < 10; i++) 
    {
        if (frequency[i] >= maxFrequency) 
        {
            mostFrequencyDigit = i;
            maxFrequency = frequency[i];
        }
    }

    cout << "Наиболее часто встречающаяся цифра: " << mostFrequencyDigit << endl;

    return 0;
}
]
