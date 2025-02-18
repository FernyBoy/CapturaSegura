#include <iostream>
#include <vector>

#include "./Headers/CapturaSegura.hpp"

int main()
{
    std::string palabras[4] = {"Fernando", "Ivanna", "Flor", "Javier"};
    std::vector<char> caracteres = {'a', 'e', 'i', 'o', 'u'};

    std::string miText;

    cout << "\nIngresa un texto\n • ";
    miText = CapturaSegura<>().TextoExcluido(palabras, 4);

    cout << "\nTexto aceptado\n • " << miText;

    return 0;
}
