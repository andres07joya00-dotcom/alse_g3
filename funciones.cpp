#include <iostream>

int suma(int a, int b){
    int resultado;

    resultado = a + b;

    std::cout<< resultado << std::endl;
    return resultado;

}

int main(){

    int num1 = 10;
    int num2 = 20;
    int result;

    result = suma(num1, num2);
    
    std::cout << "El resultado de la suma es: " << result << std::endl;

    return 0;

}