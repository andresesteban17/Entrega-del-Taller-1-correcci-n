
# include <iostream>
# include <iomanip>
# include <string>

int main(){
    int valH, hora;
    std::cout<< " Ingresa el Valor de las horas: ";
    std::cin>> valH;
    std::cout<< " Ingresa las horas trabajadas: ";
    std::cin>> hora;

    if(valH <= 0 || hora <= 0){
        std::cout<< " Error!, Horas o Valor invalidas Pon el valor de las dos en positivo si es 0 no se haran los calculos ";
    } else {
        std::cout<< " ================ RESULTADOS =============== \n";
        int salariobruto = valH * hora;
        if(hora <= 40){
            std::cout<< " Se te paga normal: " << salariobruto << "\n";
        } else if(hora <= 48){
            salariobruto = salariobruto * 1.5;
            std::cout<< " Felicitaciones por tu trabajo: " << salariobruto << " $COL \n";
        } else {
            salariobruto = salariobruto * 2;
            std::cout<< " Enhorabuenaa Por esas horas tu pago es: " << salariobruto << " $COL \n";
        }
            if(salariobruto >= 2000000) {
                int descuento = salariobruto * 0.08;
                std::cout<< " tu descuento es de: " << descuento << " $COL \n";
                int salarioneto = salariobruto - descuento;
                std::cout<< " Salario neto: " << salarioneto << " $COL \n";
            } else {
                int descuento = salariobruto * 0.04;
                std::cout<< " tu descuento es de: " << descuento << " $COL \n";
                int salarioneto = salariobruto - descuento;
                std::cout<< " Salario neto: " << salarioneto << " $COL \n";
            }
            int saberEX = (hora > 40) ? hora - 40 : 0;
            int saberDOB = (hora > 48) ? hora - 48 : 0;
            int extras = saberEX - saberDOB;
            int dobles = saberDOB;
            int normales = hora - saberEX;
            
            std::cout<< " Horas normales: " << normales << " hr \n";
            std::cout<< " Horas extras: " <<  extras << " hr \n";
            std::cout<< " Horas dobles: " << dobles << " hr \n";
            std::cout<< " Salario bruto: " << salariobruto << " $ COL \n";
    }

    return 0;
}