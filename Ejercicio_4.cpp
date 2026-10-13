
# include <iostream>
# include <iomanip>
# include <string>

int main(){
    int anio;
    
    std::cout<< "Ingresa tus anio: ";
    std::cin>> anio;

    if(anio <= 0){
        std::cout<< " Tu anio no es valido: INTENTA DE NUEVO ";
        
    } else {
        std::cout<< " Tu anio es valido, continuemos \n";
        std::cout<< " ============ RESULTADO =========== \n";
        std::cout<< " Tu anio es " << anio << "\n";
        if((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0){
            std::cout<< " El anio. si es bisiesto  ";
        } else {
            std::cout<< " No es bisiesto ";
        }
    }

    return 0;
}