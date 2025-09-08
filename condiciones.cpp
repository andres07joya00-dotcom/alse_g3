#include <iostream>

void condiciones(){
    int numero;
    std::cout << "Ingrese un número: ";
    std::cin >> numero;

    if (numero > 0) {
        std::cout << "El número es positivo." << std::endl;
    } else if (numero < 0) {
        std::cout << "El número es negativo." << std::endl;
    } else {
        std::cout << "El número es cero." << std::endl;
    }

}
int main(){

    int a = 5;
    int b = 10;

    if(a > b){
        std::cout << "a es mayor que b\n";
    } else if(a < b){
        std::cout << "a es menor que b\n";
    } else {
        std::cout << "a es igual a b\n";
    }
    condiciones();
        
    return 0;

}
    
