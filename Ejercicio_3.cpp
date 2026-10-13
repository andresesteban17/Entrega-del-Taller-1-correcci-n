
# include <iostream>
# include <iomanip>
# include <string>

int main(){

    float peso, altura, iMC;

    std::cout<< " Ingresa tu Peso: ";
    std::cin>> peso;

    std::cout<< " Ingresa tu Altura: ";
    std::cin>> altura;

    if(altura <= 0 || peso <= 0){
        std::cout<< " Datos invalidos ingresa datos correctos que no sean menor a 0 ";
    } else {
        iMC = peso / (altura * altura);

        std::cout<< " =========== RESULTADOS ========== \n\n";
        std::cout<< " Tu peso es: " << peso << " Kg\n";
        std::cout<< " Tu altura es: " << altura << " Metros\n";
        std::cout<< " Tu IMC es: " << iMC;

        if(iMC <= 18.5){
            std::cout<< " Tienes Bajo peso ";
        } else if(iMC <= 25){
            std::cout<< " Tienes un peso Normal ";
        } else if(iMC <= 30){
            std::cout<< " Tienes Sobrepeso ";
        }
    
    }

    return 0;
}