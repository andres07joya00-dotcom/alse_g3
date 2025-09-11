#include <iostream>

int main(){
    // Operadores binarios
    int bin1 = 5;                  // 0101 en binario
    int bin2 = 3;                  // 0011 en binario
    int binAnd = bin1 & bin2;      // AND binario
    int binOr = bin1 | bin2;       // OR binario
    int binXor = bin1 ^ bin2;      // XOR binario
    int binNot = ~bin1;            // NOT binario
    int binShiftLeft = bin1 << 1;  // Desplazamiento a la izquierda
    int binShiftRight = bin1 >> 1; // Desplazamiento a la derecha

    std::cout << "AND binario de bin1 y bin2: " << binAnd << std::endl;
    std::cout << "OR binario de bin1 y bin2: " << binOr << std::endl;
    std::cout << "XOR binario de bin1 y bin2: " << binXor << std::endl;
    std::cout << "NOT binario de bin1: " << binNot << std::endl;
    std::cout << "Desplazamiento a la izquierda de bin1: " << binShiftLeft << std::endl;
    std::cout << "Desplazamiento a la derecha de bin1: " << binShiftRight << std::endl;

    return 0;
}
