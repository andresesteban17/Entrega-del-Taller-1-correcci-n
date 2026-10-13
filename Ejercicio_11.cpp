
# include <iostream>
# include <iomanip>
# include <string>

int main(){
     float peso, distancia, total;
     int zona;
     char fragil;

     std::cout<< " Ingresa el peso de tu envio: ";
     std::cin>> peso; 

     std::cout<< " Ingresa la distancia de tu envio: ";
     std::cin>> distancia; 

     std::cout<< " Ingresa la zona de tu envio: ";
     std::cin>> zona; 

     std::cout<< " ¿Es fragil tu envio? (S = Si Y N = No) ";
     std::cin>> fragil; 

    if(peso < 0 || distancia < 0 || peso > 30 || (zona != 1 && zona != 2 )||(fragil != 'S' && fragil != 's' && fragil != 'N' && fragil != 'n')){
        std::cout<< " Error! Datos no validos fijate en no tener numeros negativos, exceder el peso o Decir que es fragil ";
    } else {
        std::cout<< " Todo correcto sigamos \n";
        total = 8000 + (1200 * peso) + (50 * distancia);
        if(zona == 2){
            total = total * 1.5;
        }
        if(fragil == 'S' || fragil == 's'){
            total = total * 1.20;
        }

        std::cout<< " ================ RESULTADOS ============== \n";
        std::cout<< " El peso del envio es: " << peso << " Kg \n";
        std::cout<< " Los kilometros del envio es: " << distancia << " Km \n";
        std::cout<< " La Zona del envio es: " << zona << ", 1 = Nacional o 2 = Internacional \n";
        std::cout<< " ¿El Envio es fragil? " << fragil << "\n";
        std::cout<< " Total del envio: " << total << " $COL \n";
    }

    return 0;
}