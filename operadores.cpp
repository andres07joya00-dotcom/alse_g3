#include <iostream>

int main() {
    int a = 5;
    int b = 2;

    double division = a / b;
    // Operadores aritméticos
    std::cout << "Suma: " << a + b << std::endl;        // Suma
    std::cout << "Resta: " << a - b << std::endl;       // Resta
    std::cout << "Multiplicación: " << a * b << std::endl; // Multiplicación
    std::cout << "División: " << division << std::endl;     // División
    std::cout << "Módulo: " << a % b << std::endl;       // Módulo(residuo de la división)

    // Operadores de asignación
    int c = a;               // Asignación simple
    c += b;                  // c = c + b
    std::cout << "c después de += : " << c << std::endl;

    // Operadores de comparación
    //1: verdadero, 0: falso
    std::cout << "a == b: " << (a == b) << std::endl;   // Igualdad
    std::cout << "a != b: " << (a != b) << std::endl;   // Desigualdad
    std::cout << "a < b: " << (a < b) << std::endl;     // Menor que
    std::cout << "a > b: " << (a > b) << std::endl;     // Mayor que

    // Operadores lógicos
    bool resultado = (a < b) && (a != 0);                // AND lógico(ambos son verdaderos)
    std::cout << "(a < b) && (a != 0): " << resultado << std::endl;

    resultado = (a > b) || (b != 0);                     // OR lógico(1 de los dos es verdadero)
    std::cout << "(a > b) || (b != 0): " << resultado << std::endl;

    resultado = !(a == b);                               // NOT lógico(invierte el valor)
    std::cout << "!(a == b): " << resultado << std::endl;

    return 0;
}