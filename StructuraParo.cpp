#include "StructuraParo.h"

void StructuraParo::Init(int nominal, int quantity)
{
    if (nominal == 1 || nominal == 2 || nominal == 5 || nominal == 10 ||
        nominal == 20 || nominal == 50 || nominal == 100 || nominal == 500 || nominal == 1000) {
        first = nominal;
        second = quantity;
    }
    else {
        std::cout << "Некоректний номінал купюри." << std::endl;
        first = 0;
        second = 0;
    }
}

void StructuraParo::Read()
{
    int nominal, quantity;
    std::cout << "Введіть номінал купюри: ";
    std::cin >> nominal;
    std::cout << "Введіть кількість купюр даного номіналу: ";
    std::cin >> quantity;
    Init(nominal, quantity);
}

void StructuraParo::Display()
{
    std::cout << "Номінал купюри: " << first << std::endl;
    std::cout << "Кількість купюр даного номіналу: " << second << std::endl;
}

int StructuraParo::summa()
{
    return first * second;
}
