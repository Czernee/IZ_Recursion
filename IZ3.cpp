//ЮФУ ИКТИБ МОП ЭВМ
// Программирование и Основы Теории Алгоритмов 2
// Индивидульное задания №3 - Реализация и анализ примитивно-рекурсивной функции
// КТбо1-7 Черноусов Даниил Владимирович 

#include <iostream>

using namespace std;


//---------------------------------------------------------------------------------------------------------
// Функция реализует примитивно-рекурсивную функцию
// Вх. данные: y и x
// Результат: функция возвращает следующее значение  примитивно-рекурсивной функции для входных параметров
//---------------------------------------------------------------------------------------------------------
long long Recursion(long long y, long long x)
    {
    if (y == 0)
        {
        cout << "f(0, " << x << ") = g(" << x << ") = x" << endl;
        return x;
        }
    long long current = Recursion(y - 1, x);
    long long next = x + y - 1;
    cout << "f(" << y << ", " << x << ") = h(" << y - 1 << ", " << "f(" << y - 1 << ", " << x << "), " << x << ") = h(" << y - 1 << ", " << current << ", " << x << ") = " << next;//printf("f(%llu,%llu) = h(%llu,f(%llu,%llu),%llu) = h(%llu,%llu,%llu) = %llu \n", y, x, y - 1, y - 1, x, x, y - 1, now, x, next);
    cout << endl;
    return next;
    }

int main()
{
    setlocale(LC_ALL, "Russian");
    int y, x, result;
    bool flag;
    char choice;
    cout << "Схема рекурсии: " << endl <<
            "f(0, x) = g(x) = x" << endl <<
            "f(y+1, x) = h(y, f(y, x), x) = y + x" << endl;
    do
        {
        cout << "Введите y: ";
        cin >> y;
        cout << "Введите x: ";
        cin >> x;
        cout << endl;
        result = Recursion(y, x);
        cout << "Хотите продолжить? (y/n)" << endl;
        cin >> choice;
        cout << endl;
        } while (choice == 'y' || choice == 'Y');

    return 0;
}

