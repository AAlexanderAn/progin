#include <iostream>
using namespace std;

bool isEven(int number) {
    return (number % 2 == 0);
}

int findMax(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int main() {
    setlocale(LC_ALL, "RUS");
    int num;
    cout << "Введите число: ";
    cin >> num;
    cout << num << " - " << (isEven(num) ? "четное" : "нечетное") << endl;

    int numbers[] = { 2, 5, 8, 1, 4 };
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int x, y, z;
    cout << "Введите три числа через пробел: ";
    cin >> x >> y >> z;
    cout << "Максимальное число: " << findMax(x, y, z) << endl;

    return 0;
}