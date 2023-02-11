#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    bool re = true;
    int zadanie;

    cout << "<--- 6-ой ВАРИАНТ --->" << endl;
    

    while (re == true)
    {   
        cout << " Введите номер задния" << endl;
        cout << "   введите '0' что-бы закончить программу" << endl;
        cout << " --------------------" << endl;
        cin >> zadanie;
        if (zadanie == 0)
        {
            re = false;
        }
        else if (zadanie == 1)
        {
            cout << " Перегрузить три функции, которые выводят символ ‘:’ 30 раз," << endl;
            cout << "  выводят заданный символ 40 раз, выводят заданный символ заданное число раз;" << endl;
            cout << " --------------------" << endl;
            cout << " Первая функция" << endl;
            FirsyZadanieFooOne::foo();

            cout << " Вторая функция" << endl;
            cout << " --------------------" << endl;
            cout << " Введите символ, который надо вывести 40 раз" << endl;
            cout << " --------------------" << endl;
            char sym;
            cin >> sym;
            FirsyZadanieFooOne::foo(sym);

            cout << " Третья функция" << endl;
            cout << " --------------------" << endl;
            int colVo;
            cout << " Введите количество раз, которое надо вывести заданный после символ" << endl;
            cout << " --------------------" << endl;
            cin >> colVo;
            cout << " Введите символ, который надо вывести заданное колво раз" << endl;
            cout << " --------------------" << endl;
            cin >> sym;
            FirsyZadanieFooOne::foo(sym,colVo);
        }
        else if (zadanie == 2)
        {
            cout << " Написать одну функцию, использующею аргументы по умолчанию, которая," << endl;
            cout << " делает, что и предыдущие три;" << endl;
            cout << " --------------------" << endl;
            SecondZadanie::foo();
        }
        else if (zadanie == 3)
        {
            cout << " Перегрузить две функции для типов int, double и сделать ещё шаблонный," << endl;
            cout << " вариант функции - в одномерном массиве вычислить номер максимального" << endl;
            cout << " элемента массива;" << endl;
            cout << " --------------------" << endl;
            cout << " Номер максимального элемента в int-массиве: " << ThirdZadanie::mas(1) << endl;

            cout << " Номер максимального элемента в double-массиве: " << ThirdZadanie::mas(1.5) << endl;

            cout << " Номер максимального элемента в Шаблонном-массиве: " << ThirdZadanie::mas('T') << endl;
        }
        else if (zadanie == 4)
        {
            cout << " Написать функцию с неизвестным количеством параметров, которая ищет" << endl;
            cout << " среднее арифметическое из элементов в списке параметров, стоящих на нечетных местах." << endl;
            cout << " --------------------" << endl;
            cout << " Параметры: 1.0, 2.0, 3.0, 4.0," << endl;
            //cout << " Введите количество параметров" << endl;
            int numb;
            //cin >> numb;

            cout << " Среднее арифметическое из элементов в списке параметров, стоящих на нечетных местах: " << FourthZadanie::f(1.0, 2.0, 3.0, 4.0, 0.0) << endl;;
        }

        else
        {
            cout << " Invalid number" << endl;
        }

    }
    cout << " Конец программы" << endl;
}

//функции первого задания, определённые в заголовочном файле

int FirsyZadanieFooOne::foo()
{
    for (int i = 0; i < 30; i++)
    {
        cout << " :";
    }
    cout << endl;
    return 0;
}

char FirsyZadanieFooOne::foo(char sym)
{
    for (int i = 0; i < 40; i++)
    {
        cout << " ";
        cout << sym;
    }
    cout << endl;
    return 0;
}

void FirsyZadanieFooOne::foo(char sym, int colVo)
{
    for (int i = 0; i < colVo; i++)
    {
        cout << " ";
        cout << sym;
    }
    cout << endl;
}

 //функции для 3 задания
