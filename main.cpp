#include <iostream>

#include "./Headers/CapturaSegura.hpp"

int main()
{
    char cara[4] = {'1', '2', '{', '}'};
    std::string miText;

    cout << "\nIngresa un texto\n - ";
    miText = CapturaSegura<>().TextoPermitido(cara, 4);
    cout << "\n" << miText;

    return 0;
}
