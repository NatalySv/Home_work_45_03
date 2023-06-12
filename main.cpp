#include <QCoreApplication>
#include <QArrayData>
#include <iostream>
#include <windows.h>
#include <array>
#include <algorithm>
#include <time.h>

void mas_mymas(std::array<int, 14> &mymas)
{
    qDebug() << "Масив Фібоначчі: ";
    std::array<int, 15> fib = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610};
    std::cout << "1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610" << "\n";
    qDebug() << "Масив за формулою \"фібоначчі[i+1] / фібоначчі[i]\": ";

    for (int i = 0; i < 14; i++)
    {
        mymas[i] = fib[i+1]/fib[i];
        std::cout << mymas[i] << " ";
    }

}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::array<int, 14> x;
    mas_mymas(x);


    return a.exec();
}
