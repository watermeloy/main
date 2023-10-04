#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int N{};
	if (N < 1000000000)
	{
		cin >> N;
	}
	else
	{
		cout << 0 << endl;
	}

	cout << "Введите натуральное число N: ";
	cin >> N;

    int frequencyCount = 0;

    for (int i = 0; i <= 9; i++) 
    {
        frequencyCount = 0;
    }

    while (N > 0) 
    {
        int digit = N % 10;
        frequencyCount++;
        N /= 10;
    }

    int maxFrequency = 0;
    int mostFrequentDigit = 0;

    for (int i = 0; i <= 9; i++) 
    {
        if (frequencyCount > maxFrequency) 
        {
            maxFrequency = frequencyCount;
            mostFrequentDigit = i;
        }
    }

    cout << "Наиболее часто встречающаяся цифра: " << mostFrequentDigit << endl;
	
	return 0;
}
