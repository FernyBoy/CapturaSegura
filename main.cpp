#include <iostream>

#include "./Headers/CapturaSegura.hpp"

int main()
{
    std::string miText;

    cout << "\nIngresa un texto\n - ";
    miText = CapturaSegura<>().TextoCerrado(3, 5);
    cout << "\n\n" << miText;

    return 0;
}
