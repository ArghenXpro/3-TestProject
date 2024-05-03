#include <iostream>

// Константа N, определяющая верхний предел диапазона
const int N = 20;

// Функция, которая выводит либо чётные, либо нечётные числа от 0 до N
void printEvenOrOdd(bool printEven, int maxRange) {
    // Определяем начальное значение: 0 для четных, 1 для нечетных
    int start = printEven ? 0 : 1;
    // Итерация через каждое второе число, начиная с начального значения
    for (int i = start; i <= maxRange; i += 2) {
        std::cout << i << " "; // Вывод числа
    }
    std::cout << std::endl; // Переход на новую строку после вывода всех чисел
}

int main() {
    // Вывод всех чётных чисел от 0 до N
    std::cout << "Even numbers from 0 to " << N << ": ";
    printEvenOrOdd(true, N); // Вызов функции для вывода четных чисел

    // Вывод всех нечётных чисел от 0 до N
    std::cout << "Odd numbers from 0 to " << N << ": ";
    printEvenOrOdd(false, N); // Вызов функции для вывода нечетных чисел

    return 0; // Завершение программы
}
