
# include <iostream>
# include <iomanip>
# include <string>

int main(){
    int a, b, c;

    std::cout<< " Ingresa tu Primer Numero ";
    std::cin>> a;

    std::cout<< " Ingresa tu Segundo Numero ";
    std::cin>> b;

    std::cout<< " Ingresa tu Tercer Numero ";
    std::cin>> c;

    std::cout<< " ============= RESULTADOS ============== \n\n ";
    std::cout<< "Tu Primer Numero (a) es: " << a << "\n";
    std::cout<< " Tu Segundo Numero (b) es: " << b << "\n";
    std::cout<< " Tu Tercer Numero (c) es: " << c << "\n";

    std::string resultado = (a >= b && a >= c) ? " a es el Numero mayor " : (b >= c) ? " b es el Numero mayor " : " C es el Numero mayor ";
    std::string resultado2 = (a <= b && a <= c) ? " a es el Numero menor " : (b <= c) ? " b es el Numero menor " : " C es el Numero menor ";
    std::cout<< resultado << "\n";
    std::cout<< resultado2 << "\n";

    int maximo = (a >= b && a >= c) ? a : (b >= c) ? b : c;
    int menor = (a <= b && a <= c) ? a : (b <= c) ? b : c;
    std::cout<< " El Numero mayor entre: " << a << " y " << b << " y " << c << " es: " << maximo << "\n";
    std::cout<< " El Numero menor entre: " << a << " y " << b << " y " << c << " es: " << menor << "\n";

    std::string igualdad = (a == b && a == c) ? " Los tres Numeros son iguales " 
    : (b == a || c == a || b == c) ? " Dos Numeros son iguales " : " Todos los numeros son distintos \n";
    std::cout<< igualdad;

    std::cout<< "============= FINALIDAD ============== ";

    return 0;

}