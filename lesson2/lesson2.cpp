#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string>
using namespace std;
int main()
{
	int i;
	setlocale(LC_ALL, "rus");
	srand((unsigned int)time(0));
	const int n = 10;
	int a[n];
	cout << "Генерирует рандомные элементы массива (размерностью 10) от -10 до 10 (включительно)" << endl;
	for (i = 0; i < n; i++)
	{
		a[i] = -10 + rand() % 21;
		cout << a[i] << "\t";
	}
	int max = a[0];
	int min = a[0];
	cout << endl;
	cout << endl;
	for (i = 0; i < n; i++)
	{
		if (max < a[i]) max = a[i];
	}
	cout << "Максимальный элемент массива =" << max<<endl;
	cout << endl;
	for (i = 0; i < n; i++)
	{
		if (min > a[i]) min = a[i];
	}
	cout << "Минимальный элемент массива =" << min << endl;
	int sum = 0;
	cout << endl;
	for (i = 0; i < n; i++)
	{
		sum += a[i];

	}
	cout << "Сумма всех элементов массива =" << sum << endl;
	int proz = 1;
	cout << endl;
	for (i = 0; i < n; i++)
	{
		proz *= a[i];

	}
	cout << "Произведение всех элементов массива =" << proz << endl;
	cout << endl;
	cout << "Выписывает положительные элементы заданного массива" << endl;
	for (i = 0; i < n; i++)
	{
		if (a[i] >= 0)
			cout << a[i] << "\t";
	}
	cout << endl;
	cout << endl;
	cout << "Выписывает отрицательные элементы заданного массива" << endl;
	for (i = 0; i < n; i++)
	{
		if (a[i] < 0)
			cout << a[i] << "\t";
	}
	cout << endl;
	cout << endl;
	cout << "Выписывает четные элементы заданного массива" << endl;
	for (i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			cout << a[i] << "\t";
	}
	cout << endl;
	cout << endl;
	cout << "Выписывает нечетные элементы заданного массива" << endl;
	for (i = 0; i < n; i++)
	{
		if (a[i] % 2 == 1)
			cout << a[i] << "\t";
	}
	cout << endl;
	string exit;
	cout << "Чтобы выйти из программы напишите 0" << endl;
	cin >> exit;
	while (exit != "0")
	{
		cout << "Ошибка, напишите 0 для выхода из программы" << endl;
		cin >> exit;
	}

}	



// 10 элементов мас. ранд элем. найти макс элем масс без инд