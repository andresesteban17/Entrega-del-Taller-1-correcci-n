
# include <iostream>
# include <iomanip>
# include <string>

int main() {
int dia, mes, anio;
 
    std::cout<< " Ingresa el dia que quieras: ";
    std::cin>> dia;

    std::cout<< " Ingresa el mes que quieras (de 1 a 12): ";
    std::cin >> mes;

    std::cout<< " Ingresa el anio que quieras: ";
    std::cin >> anio;
 
    std::cout << " ================ RESULTADOS =============== \n";
    if(anio <= 0){
        std::cout<< " La fecha no es valida tu anio debe ser positivo \n";
    } else if(mes < 1 || mes > 12){
        std::cout<< " La fecha no es valida ya que el mes no existe \n";
    } else {
        int diasdelmes;
        if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
            diasdelmes = 31;
        } else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
            diasdelmes = 30;
        } else {
            diasdelmes = ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) ? 29 : 28;
        }
 
        if(dia >= 1 && dia <= diasdelmes){
            std::cout<< " Tu dia es: " << dia << "\n";
            std::cout<< " Tu anio es: " << anio << "\n";
            std::cout<< " Tu mes es: " << mes << "\n";
            std::cout<< " La fecha es: " << dia << "/" << mes << "/" << anio << " Felicitaciones \n";
            std::cout<< " El mes " << mes << " tiene " << diasdelmes << " dias \n";
            std::cout<< " ================ FINALIDAD =============== ";
        } else {
            std::cout << " La fecha no es valida ese dia no existe en ese mes \n";
        }
    }
 
    return 0;
}