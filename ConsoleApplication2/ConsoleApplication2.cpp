// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	int k;
	int n;
	int summa = 0;
	std::cout << "N: ";
	std::cin >> n;
	std::cout << "k: ";
	std::cin >> k;

	for (int i = 0; i < n; i++)
	{
		summa = summa + ((i + 1) * k);
	}

	std::cout << "Summa: " << summa;

}


