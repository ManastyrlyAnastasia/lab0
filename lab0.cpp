
#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include "Competitor.h" // Подключаем заголовочный файл с определением класса Competitor

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    // Чтение данных из файла csv
    ifstream file("competitors.csv");
    if (!file)
    {
        cerr << "Failed to open file" << endl;
        return 1;
    }

    // Вывод данных на экран
    string line;
    while (getline(file, line))
    {
        cout << line << endl;
    }


    // Закрытие файла
    file.close();

    return 0;
}
