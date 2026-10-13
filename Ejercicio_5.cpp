
# include <iostream> 
# include <iomanip>
# include <string>

int main(){
    int la1, la2, la3, perimetro;
    
    std::cout<< "Ingresa la longitud del lado 1: ";
    std::cin>> la1;

    std::cout<< "Ingresa la longitud del lado 2: ";
    std::cin>> la2;

    std::cout<< "Ingresa la longitud del lado 3: ";
    std::cin>> la3;

    if((la1 > 0 && la2 > 0 && la3 > 0) && la1 + la2 > la3 && la2 + la3 > la1 && la1 + la3 > la2){
        std::cout<< " Los lados son mayores a 0 y tienen desiguldad triangular, Si forman un triangulo \n";
        std::cout<< " =========== RESULTADOS =========== \n";
        perimetro = la1 + la2 + la3;
        std::cout<< " El Perimetro es: " << perimetro << "\n";
        
        if(la1 == la2 && la2 == la3){
            std::cout<< " Es un triangulo equilatero ";
        } else if(la1 == la2 || la2 == la3 || la1 == la3){
            std::cout<< " Es un triangulo isoceles ";
        } else {
            std::cout<< " Es un triangulo Escaleno ";
        }
    } else {
        std::cout<< " No son todos mayores a 0 y no tienen desigualdad triangular, No forman un triangulo ";
    }

    return 0;
}