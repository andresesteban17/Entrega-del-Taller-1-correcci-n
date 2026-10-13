
# include <iostream>
# include <iomanip>
# include <string>

int main(){
    float nota1, nota2, nota3, promedio;

    std::cout<< " Ingresa la Nota numero 1: ";
    std::cin>> nota1;

    std::cout<< " Ingresa la Nota numero 2: ";
    std::cin>> nota2;

    std::cout<< " Ingresa la Nota numero 3: ";
    std::cin>> nota3;

    if(nota1 > 5.0 || nota1 <= 0.0){
        std::cout<< " Su nota es invalida no esta en los rangos correctos, pruebe de nuevo (1) ";
    } else if (nota2 > 5.0 || nota2 <= 0.0){
        std::cout<< " Su nota es invalida no esta en los rangos correctos, pruebe de nuevo (2) ";
    } else if (nota3 > 5.0 || nota3 <= 0.0){
        std::cout<< " Su nota es invalida no esta en los rangos correctos, pruebe de nuevo (3) \n ";
    } else {
        std::cout<< " Todo correcto sigamos \n";
        std::cout<< " ========== RESULTADOS PROMEDIO ========== \n"; 
        promedio = (nota1 * 0.30) + (nota2 * 0.30) + (nota3 * 0.40);
        std::cout<< " Tu Primera nota es: " << nota1 << "\n";
        std::cout<< " Tu Segunda nota es: " << nota2 << "\n";
        std::cout<< " Tu Tercera nota es: " << nota3 << "\n";
        std::cout<< " El promedio es: " << promedio << "\n";
        if(promedio >= 4.5){
        std::cout<< " Excelente(A) ";
        } else if(promedio >= 4.0){
        std::cout<< " Bueno(B) ";
        } else if(promedio >= 3.0){
        std::cout<< " Aceptable(C) ";
        } else {
        std::cout<< " Reprobaste que mal(F) ";
        }
    }

    return 0;
    
}