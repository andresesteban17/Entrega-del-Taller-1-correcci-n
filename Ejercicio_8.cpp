
# include <iostream>
# include <iomanip>
# include <string>

int main(){
    double a, b, c;

    std::cout << " Ingresa tu coeficiente a: ";
    std::cin >> a;

    std::cout << " Ingresa tu coeficiente b: ";
    std::cin >> b;

    std::cout << " Ingresa tu coeficiente c: ";
    std::cin >> c;

    std::cout << " ================ RESULTADOS =============== \n";
    std::cout << " Tu coeficiente a vale: " << a << "\n";
    std::cout << " Tu coeficiente b vale: " << b << "\n";
    std::cout << " Tu coeficiente c vale: " << c << "\n";
    if(a == 0 && b == 0){
        std::cout << " Tu Ecuacion no es de primer ni de segundo grado \n";
    } else if(a == 0){
        double x = -c / b + 0.0;   
        std::cout << " Tu Ecuacion es lineal el valor de x es: " << x << "\n";
    } else {
        double discri = b * b - 4 * a * c;
        std::cout << " Es una Ecuacion de segundo grado \n";
        std::cout << " El Discriminante es: " << discri << "\n";

        if(discri > 0){
            double raiz = discri;   

            raiz = (raiz + discri / raiz) / 2; // Metodo de Newton para encontar raices cuadradas.
            raiz = (raiz + discri / raiz) / 2; // Aproximacion tras aproximacion tras aproximacion
            raiz = (raiz + discri / raiz) / 2;
            raiz = (raiz + discri / raiz) / 2;
            raiz = (raiz + discri / raiz) / 2;
            raiz = (raiz + discri / raiz) / 2;
            raiz = (raiz + discri / raiz) / 2;
            raiz = (raiz + discri / raiz) / 2;
            raiz = (raiz + discri / raiz) / 2;
            raiz = (raiz + discri / raiz) / 2;
            raiz = (raiz + discri / raiz) / 2;
            raiz = (raiz + discri / raiz) / 2;
            raiz = (raiz + discri / raiz) / 2;
            raiz = (raiz + discri / raiz) / 2;
            raiz = (raiz + discri / raiz) / 2;
            raiz = (raiz + discri / raiz) / 2;
            raiz = (raiz + discri / raiz) / 2;
            raiz = (raiz + discri / raiz) / 2;
            raiz = (raiz + discri / raiz) / 2;
            raiz = (raiz + discri / raiz) / 2; // Demasiado largo :(

            double xEn1 = (-b + raiz) / (2 * a) + 0.0;
            double xEn2 = (-b - raiz) / (2 * a) + 0.0;
            std::cout << " Hay dos raices reales: x1 = " << xEn1 << " y x2 = " << xEn2 << "\n";
        } else if(discri == 0){
            double x = -b / (2 * a) + 0.0;
            std::cout << " Solo hay una raiz real la cual es: x = " << x << "\n";
        } else {
            std::cout << " El Discriminante es negativo entonces las raices son complejas \n";
        }
        std::cout<< " ================ FINALIDAD ================ ";
    }

    return 0;
}