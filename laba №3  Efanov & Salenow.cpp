// laba №3  Efanov & Salenow.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//#define _USE_MATH_DEFINES
//#include <iostream>
//#include <math.h>
//#include <stdio.h>
//#include <cmath>
//#include <iomanip>
//#define stop do{ } while(0)
//#include <windows.h>
//using namespace std;
//int main() {
//	int x, y, z, nod, nok;
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	cout << "введите 2 числа в диапозоне от [100 ; 1000] ";
//	cin >> x >> y;
//
//	if (x < 100 || x > 1000 || y < 100 || y > 1000) {
//		cout << " условия!!!";
//		return 1;
//	}
//
//	nod = x;
//	while (y != 0) {
//		z = y;
//		y = nod % y;
//		nod = z;
//
//	}
//	nok = x + y / nod;
//
//	cout << " NOD " << nod;
//	cout << " NOK " << nok;
//
//	return 0;
//}

//№2
//#define _USE_MATH_DEFINES
//#include <iostream>
//#include <math.h>
//#include <stdio.h>
//#include <cmath>
//#include <iomanip>
//#define stop do{ } while(0)
//#include <windows.h>
//using namespace std;
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//    int choice, num, base, i, digit, result = 0;
//
//    while (true) {
//        // Меню опций
//        cout << "\nВыберите действие:\n";
//        cout << "1. Преобразовать число из десятичной системы в другую\n";
//        cout << "2. Преобразовать число из другой системы в десятичную\n";
//        cout << "3. Выход\n";
//        cout << "Введите номер действия: ";
//        cin >> choice;
//
//        if (choice == 1) {
//            // Преобразование из десятичной в другую систему
//            cout << "Введите число в десятичном формате: ";
//            cin >> num;
//            cout << "Введите основание новой системы счисления: ";
//            cin >> base;
//
//            // Проверка на корректность ввода
//            if (base < 2 || base > 16) {
//                cout << "Некорректное основание системы! Должно быть от 2 до 16.\n";
//                continue;
//            }
//
//            i = 0;
//            while (num > 0) {
//                digit = num % base;
//                result += digit*(pow(10, i));
//                num /= base;
//                i++;
//            }
//            cout << "Число " << num << " в системе счисления с основанием " << base << ": " << result << endl;
//        }
//        else if (choice == 2) {
//            // Преобразование из другой системы в десятичную
//            cout << "Введите число в другой системе счисления: ";
//            cin >> num;
//            cout << "Введите основание текущей системы счисления: ";
//            cin >> base;
//
//            // Проверка на корректность ввода
//            if (base < 2 || base > 16) {
//                cout << "Некорректное основание системы! Должно быть от 2 до 16.\n";
//                continue;
//            }
//
//            i = 0;
//            while (num > 0) {
//                digit = num % 10;
//                result += digit*(pow(base, i));
//                num /= 10;
//                i++;
//            }
//            cout << "Число " << num << " в десятичной системе: " << result << endl;
//        }
//        else if (choice == 3) {
//            break;
//        }
//        else {
//            cout << "Некорректный выбор! Попробуйте снова.\n";
//        }
//    }
//    return 0;
//}

//№3
//#define _USE_MATH_DEFINES
//#include <iostream>
//#include <cstdlib>
//#include <math.h>
//#include <stdio.h>
//#include <cmath>
//#include <iomanip>
//#define stop do{ } while(0)
//#include <windows.h>
//#include <ctime>
//#include <algorithm>
//using namespace std;
//
//// Функция для извлечения самой большой цифры из числа
//static int max_digit(int number) {
//    int max_digit = 0;
//    // Извлекаем цифры числа
//    while (number > 0) {
//        int digit = number % 10;
//        max_digit = max(max_digit, digit);  // Обновляем максимальную цифру
//        number /= 10;  // Уменьшаем число, убирая последнюю цифру
//    }
//    return max_digit;
//}
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    srand(time(0));  // Инициализация генератора случайных чисел
//
//    int n;
//    cout << "Введите количество элементов вектора (четное число): ";
//    cin >> n;
//
//    // Проверка, что количество элементов четное
//    if (n % 2 != 0) {
//        cout << "Количество элементов должно быть четным!" << endl;
//        return 1;
//    }
//
//    // Выделение памяти для вектора с использованием malloc
//    int* vector = (int*)malloc(n * sizeof(int));
//
//    // Заполнение вектора случайными числами от 1000 до 10000
//    for (int i = 0; i < n; ++i) {
//        vector[i] = rand() % 9001 + 1000;  // Генерация случайных чисел в диапазоне [1000, 10000]
//    }
//
//    // Вывод вектора
//    cout << "Вектор: ";
//    for (int i = 0; i < n; ++i) {
//        cout << vector[i] << " ";
//    }
//    cout << endl;
//
//    // Проверка на STARKX
//    bool isStarkX = true;
//    for (int i = 0; i < n - 1; i += 2) {
//        // Для четных индексов проверяем, что элемент больше любого из нечетных индексов
//        if (vector[i] <= vector[i + 1]) {
//            isStarkX = false;
//            break;
//        }
//    }
//
//    // Вывод результата проверки
//    if (isStarkX) {
//        cout << "Вектор STARKX!";
//    }
//    else {
//        cout << "Вектор не является STARKX.";
//    }
//
//    // Формирование нового числа из максимальных цифр
//    cout << "Новое число, сформированное из максимальных цифр каждого элемента: ";
//    for (int i = 0; i < n; ++i) {
//        int maxDigit = max_digit(vector[i]);
//        cout << maxDigit;
//    }
//    cout <<endl;
//
//    // Освобождение памяти
//    free(vector);
//
//    return 0;
//}


