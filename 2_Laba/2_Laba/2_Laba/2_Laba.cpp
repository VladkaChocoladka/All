#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <filesystem>

using namespace std;

string StrObr(string str) // функция для обрезки после 2-х знаков после запятой
{
    int count = 0;
    bool check = false;
    string strCopy = "";
    for (int i = 0; i < str.length(); i++)
    {
        strCopy += str[i];
        if (str[i] == '.')
        {
            check = true;
        }
        if (check == true)
        {
            count++;
        }
        if(count==3)
        {
            break;
        }
        
    }
    return strCopy;
}

int main()
{
    setlocale(LC_ALL, "Rus");

    bool re = true;
    int zadanie;

    cout << "<--- 6-ой ВАРИАНТ --->" << endl;
    cout << " -- Daily climate data in the city of Delhi from 2013 to 2017 --" << endl;


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
            cout << " Вывести на экран количество дней, когда скорость ветра была выше 8." << endl;
            cout << " Вывести на экран все даты и среднею температуру, когда средняя температура была ниже 15 градусов." << endl;
            cout << endl;
            int count = 0;
            const string filename = "DailyDelhiClimate.csv";
            ifstream work_file(filename);
            string line;
            char delimiter = ',';
            //Читаем первую строку, чтобы отбросить ее, так как она является заголовком
            getline(work_file, line);
            // Прочитали все строчки
            while (getline(work_file, line))
            {
                stringstream stream(line);
                string str;
                getline(stream, str);
                
                string date="";
                for (int i = 0; i < str.length(); i++) //дата текущей строки
                {
                    if (str[i]!=',')
                    {
                        date += str[i];
                    }
                    else
                    {
                        break;
                    }
                }

                string meantemp = "";
                for (int i = 11; i < str.length(); i++)
                {
                    if (str[i] != ',')
                    {
                        meantemp += str[i];
                    }
                    else
                    {
                        break;
                    }
                }

                string humidity = "";
                for (int i = date.length() + meantemp.length()+2; i < str.length(); i++)
                {
                    if (str[i] != ',')
                    {
                        humidity += str[i];
                    }
                    else
                    {
                        break;
                    }
                }

                string wind_speed=""; // получаю скорость ветра
                for (int i = date.length() + meantemp.length() + humidity.length() + 3; i < str.length(); i++)
                {
                    if (str[i] != ',')
                    {
                        wind_speed += str[i];
                    }
                    else
                    {
                        break;
                    }
                }

                for (int i = 0; i < wind_speed.length(); i++) //преобразую скорость ветра в double
                {
                    if (wind_speed[i] == '.')
                    {
                        wind_speed[i] = ',';
                        break;
                    }
                }
                double windSp = stod(wind_speed);
                if (windSp > 8)
                {
                    count++;
                }

                for (int i = 0; i < meantemp.length(); i++) //преобразую среднюю температуру в double
                {
                    if (meantemp[i] == '.')
                    {
                        meantemp[i] = ',';
                        break;
                    }
                }
                double temp = stod(meantemp);

                if (temp < 15)// все даты и средняя температура, когда средняя температура была ниже 15
                {
                    cout << " Дата: " << date << " Средняя темература: " << temp << endl;
                    cout << " --------------------" << endl;
                }

            }
            cout << " Kоличество дней, когда скорость ветра была выше 8: " << count << endl;
            cout << " --------------------" << endl;
            work_file.close();

        }

        else if (zadanie == 2)
        {
            cout << " Вывести в новый файл все дни с влажностью ниже 50 и температурой выше 25," << endl;
            cout << " все значения во всех колонках ограничить максимум двумя знаками после запятой." << endl;
            cout << " --------------------" << endl;
            const string filename = "DailyDelhiClimate.csv";
            ifstream work_file(filename);
            string line;
            char delimiter = ',';
            //Читаем первую строку, чтобы отбросить ее, так как она является заголовком
            getline(work_file, line);
            // Прочитали все строчки

            ofstream out;          // поток для записи
            out.open("newFile.csv"); // окрываем файл для записи
            out << "Дата" << ";" << "Тепература" << ";" << "Влажность" << ";" << "Скорость ветра" << ";" << "Давление"<<endl;

            while (getline(work_file, line))
            {
                stringstream stream(line);
                string str;
                getline(stream, str);
                string date = "";
                for (int i = 0; i < str.length(); i++) //дата текущей строки
                {
                    if (str[i] != ',')
                    {
                        date += str[i];
                    }
                    else
                    {
                        break;
                    }
                }

                string meantemp = ""; // средняя температура
                for (int i = 11; i < str.length(); i++)
                {
                    if (str[i] != ',')
                    {
                        meantemp += str[i];
                    }
                    else
                    {
                        break;
                    }
                }

                string humidity = ""; //влажность
                for (int i = date.length() + meantemp.length() + 2; i < str.length(); i++)
                {
                    if (str[i] != ',')
                    {
                        humidity += str[i];
                    }
                    else
                    {
                        break;
                    }
                }

                string wind_speed = ""; // получаю скорость ветра
                for (int i = date.length() + meantemp.length() + humidity.length() + 3; i < str.length(); i++)
                {
                    if (str[i] != ',')
                    {
                        wind_speed += str[i];
                    }
                    else
                    {
                        break;
                    }
                }

                string meanpressure = ""; //давление
                for (int i = date.length() + meantemp.length() + humidity.length() + wind_speed.length() + 4; i < str.length(); i++)
                {
                    if (str[i] != ',')
                    {
                        meanpressure += str[i];
                    }
                    else
                    {
                        break;
                    }
                }
                meantemp = StrObr(meantemp);
                humidity = StrObr(humidity);
                wind_speed = StrObr(wind_speed);
                meanpressure = StrObr(meanpressure);


                //cout << " Дата: " << date << " Температура: " << meantemp << " Влажность: " << humidity << " Скорость ветра: " << wind_speed << " Давление: " << meanpressure << endl;
                //cout << " --------------------" << endl;

                for (int i = 0; i < meantemp.length(); i++) //преобразую среднюю температуру в double
                {
                    if (meantemp[i] == '.')
                    {
                        meantemp[i] = ',';
                        break;
                    }
                }
                double temp = stod(meantemp);

                for (int i = 0; i < humidity.length(); i++) //преобразую влажность в double
                {
                    if (humidity[i] == '.')
                    {
                        humidity[i] = ',';
                        break;
                    }
                }          

                for (int i = 0; i < wind_speed.length(); i++) //преобразую влажность в double
                {
                    if (wind_speed[i] == '.')
                    {
                        wind_speed[i] = ',';
                        break;
                    }
                }

                for (int i = 0; i < wind_speed.length(); i++) //преобразую скорость ветра
                {
                    if (wind_speed[i] == '.')
                    {
                        wind_speed[i] = ',';
                        break;
                    }
                }

                for (int i = 0; i < meanpressure.length(); i++) //преобразую давление
                {
                    if (meanpressure[i] == '.')
                    {
                        meanpressure[i] = ',';
                        break;
                    }
                }

                double hum = stod(humidity);

                if (hum < 50 && temp>25)
                {
                    if (out.is_open())
                    {
                        cout << " Дата: " << date << " Температура: " << meantemp << " Влажность: " << humidity << " Скорость ветра: " << wind_speed << " Давление: " << meanpressure << endl;
                        cout << " --------------------" << endl;
                        out << date << ";" << meantemp << ";" << humidity << ";" << wind_speed << ";" << meanpressure<<endl;
                    }
                }
            }
        }
        
        else
        {
            cout << " Invalid number" << endl;
        }
    }

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
