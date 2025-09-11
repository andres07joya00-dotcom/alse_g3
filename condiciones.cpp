#include <iostream>

void condiciones(){
    int numero;
    std::cout << "Ingrese un número: ";
    std::cin >> numero;

    std::cout << "El número ingresado es: " << numero << std::endl;

    if (numero > 0) {
        std::cout << "El número es positivo." << std::endl;
    } else if (numero < 0) {
        std::cout << "El número es negativo." << std::endl;
    } else {
        std::cout << "El número es cero." << std::endl;
    }

}

void ciclofor(){
    for (int i = 1; i <= 5; i++) { // for(inicialización; condición; incremento)
        std::cout << "Iteración: " << i << std::endl;
    }
}
void loop(){
    int contador = 1;
    while (contador <= 5) {
        std::cout << "Contador: " << contador << std::endl;
        contador++; // suma 1 a contador
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
    loop();   
    ciclofor(); 
    return 0;

}
    
