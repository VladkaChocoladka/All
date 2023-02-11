#pragma once
#include <iostream>
using namespace std;

///

namespace FirsyZadanieFooOne
{
	int foo();
	char foo(char sym);
	void foo(char sym, int colVo);
}
namespace FirsyZadanieFooSecond
{
	//void foo();
}
namespace FirsyZadanieFooThird
{
	//void foo();
}

///

namespace SecondZadanie
{
	void foo(int colVo = 5, char sym = '?')
	{
		cout << " Параметры по умолчанию: Кол-во символов = " << colVo << ", Символ - '" << sym << "'" << endl;
		cout << " --------------------" << endl;
		for (int i = 0; i < colVo; i++)
		{
			cout << " ";
			cout << sym;
		}
		cout << endl;
	}
}

///

namespace ThirdZadanie
{
	int mas(int one)
	{
		int arr[20];
		for (int i = 0; i < 20; i++)
		{
			arr[i] = (rand()%20)-10;
		}
		for (int i = 0; i < 20; i++)
		{
			cout<< " " << arr[i];
		}
		cout << endl;
		int max = arr[0];
		int g = 0;
		for (int i = 0; i < 20; i++)
		{
			if (max < arr[i])
			{
				max = arr[i];
				g = i;
			}
		}
		return g;
	}

	double mas(double one)
	{
		double arr[20];
		for (int i = 0; i < 20; i++)
		{
			arr[i] = (rand() % 10) - (rand()%10)/10.0;
		}
		for (int i = 0; i < 20; i++)
		{
			cout << " " << arr[i];
		}
		cout << endl;
		double max = arr[0];
		int g = 0;
		for (int i = 0; i < 20; i++)
		{
			if (max < arr[i])
			{
				max = arr[i];
				g = i;
			}
		}
		return g;
	}

	template<typename T>
	T mas(T one)
	{
		T arr[20];
		for (int i = 0; i < 20; i++)
		{
			arr[i] = rand();
		}
		for (int i = 0; i < 20; i++)
		{
			cout << " " << arr[i];
		}
		cout << endl;
		T max = arr[0];
		int g = 0;
		for (int i = 0; i < 20; i++)
		{
			if (max < arr[i])
			{
				max = arr[i];
				g = i;
			}
		}
		g = 0;
		int i = 0;
		while (arr[i]!=max)
		{
			i++;
			g++;
		}
		cout << max;
		return g;
	}


}

namespace FourthZadanie
{
	double f(double n, ...)    //--заголовок с переменным числом параметров
	{
		double* p = &n;        //--установились на начало списка параметров
		double sum = 0, count = 0;
		int ev = 1;
		while (*p)         //--пока аргумент не равен нулю
		{
			if (ev % 2 != 0)
			{
				sum += (*p);         //--суммируем аргумент
				count++;         //--считаем  количество аргументов
			}
			ev++;
			p++;             //--«перемещаемся на следующий аргумент
		}
		return ((sum) ? sum / count : 0);    //--вычисляем среднее
	}
}
