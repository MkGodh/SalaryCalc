#include <iostream>


int main()
{
    setlocale(LC_ALL, "RUS");

    int firstEmployeeSalary;
    int secondEmployeeSalary;
    int thirdEmployeeSalary;

    std::cout << "Введите зарплату первого сотрудника: ";
    std::cin >> firstEmployeeSalary;
    std::cout << "Введите зарплату второго сотрудника: ";
    std::cin >> secondEmployeeSalary;
    std::cout << "Введите зарплату третьего сотрудника: ";
    std::cin >> thirdEmployeeSalary;


    std::cout << "-----Считаем-----\n";


    int highestSalary;
    if (firstEmployeeSalary > secondEmployeeSalary && firstEmployeeSalary > thirdEmployeeSalary) {
        highestSalary = firstEmployeeSalary;
        std::cout << "Самая высокая зарплата в отделе: " << highestSalary << "\n";
    }
    else if (secondEmployeeSalary > firstEmployeeSalary && secondEmployeeSalary > thirdEmployeeSalary) {
        highestSalary = secondEmployeeSalary;
        std::cout << "Самая высокая зарплата в отделе: " << highestSalary << "\n";
    }
    else {
        if (thirdEmployeeSalary > firstEmployeeSalary && thirdEmployeeSalary > secondEmployeeSalary) {
            highestSalary = thirdEmployeeSalary;
            std::cout << "Самая высокая зарплата в отделе: " << highestSalary << "\n";
        }
    }


    int lowestSalary;
    if (firstEmployeeSalary < secondEmployeeSalary && firstEmployeeSalary < thirdEmployeeSalary) {
        lowestSalary = firstEmployeeSalary;
        std::cout << "Разница между самой высокой и низкой зарплатой в отделе: " << highestSalary - lowestSalary << "\n";
    }
    else if (secondEmployeeSalary < firstEmployeeSalary && secondEmployeeSalary < thirdEmployeeSalary) {
        lowestSalary = secondEmployeeSalary;
        std::cout << "Разница между самой высокой и низкой зарплатой в отделе: " << highestSalary - lowestSalary << "\n";
    }
    else {
        if (thirdEmployeeSalary < firstEmployeeSalary && thirdEmployeeSalary < secondEmployeeSalary) {
            lowestSalary = thirdEmployeeSalary;
            std::cout << "Разница между самой высокой и низкой зарплатой в отделе: " << highestSalary - lowestSalary << "\n";
        }
    }

    int equality;
    int mediumSalar;
    if (firstEmployeeSalary > secondEmployeeSalary && firstEmployeeSalary < thirdEmployeeSalary) {
        mediumSalar = firstEmployeeSalary;
        std::cout << "Средняя зарплата в отделе: " << (firstEmployeeSalary + secondEmployeeSalary + thirdEmployeeSalary) / 3 << "\n";
    }
    else if (secondEmployeeSalary > firstEmployeeSalary && secondEmployeeSalary < thirdEmployeeSalary) {
        mediumSalar = secondEmployeeSalary;
        std::cout << "Средняя зарплата в отделе: " << (firstEmployeeSalary + secondEmployeeSalary + thirdEmployeeSalary) / 3 << "\n";
    }
    else if (thirdEmployeeSalary > firstEmployeeSalary && thirdEmployeeSalary < secondEmployeeSalary) {
        mediumSalar = thirdEmployeeSalary;
        std::cout << "Средняя зарплата в отделе: " << (firstEmployeeSalary + secondEmployeeSalary + thirdEmployeeSalary) / 3 << "\n";
    }


    if (firstEmployeeSalary == secondEmployeeSalary && firstEmployeeSalary == thirdEmployeeSalary) {
        equality = firstEmployeeSalary;
        std::cout << "Самая высокая зарплата в отделе: " << equality << "\n";
        std::cout << "Разница между самой высокой и самой низкой зарплатой в отделе: " << 0 << "\n";
        std::cout << "Средняя зарплата в отделе: " << equality << "\n";
    }
    else if (secondEmployeeSalary == firstEmployeeSalary && secondEmployeeSalary == thirdEmployeeSalary) {
        equality = secondEmployeeSalary;
        std::cout << "Самая высокая зарплата в отделе: " << equality << "\n";
        std::cout << "Разница между самой высокой и самой низкой зарплатой в отделе: " << 0 << "\n";
        std::cout << "Средняя зарплата в отделе: " << equality << "\n";
    }
    else {
        if (thirdEmployeeSalary == firstEmployeeSalary && thirdEmployeeSalary == secondEmployeeSalary) {
            equality = thirdEmployeeSalary;
            std::cout << "Самая высокая зарплата в отделе: " << equality << "\n";
            std::cout << "Разница между самой высокой и самой низкой зарплатой в отделе: " << 0 << "\n";
            std::cout << "Средняя зарплата в отделе: " << equality << "\n";
        }

    }

}
