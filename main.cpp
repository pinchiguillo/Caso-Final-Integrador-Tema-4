//
// Created by pinchiguillo on 15/12/2024.
//

#include <locale>
#include <iostream>

int main () {
    setlocale(LC_ALL, "es_ES.UTF-8");

    std::cout << "¡Hola, mundo!" << std::endl;


    return 0;
}