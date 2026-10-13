
# include <iostream>
# include <iomanip>
# include <string>

int main(){

    int sg; // Primera variable declarada Segundos.

    std::cout<< "Ingresa Tus segundos para analizar "; // Pedimos los Segundos 
    std::cin>> sg; // Lo capturamos

    if (sg > 0){
        int hora = sg / 3600; // Aqui tenemos las otras variables y sus operaciones matematicas para saber cuanto vale cada una.
        int minu = (sg % 3600) / 60;
        int sgfin = sg / 60;
        std::cout<< " ============== RESULTADOS ============== \n\n";
        std::cout<< " Tu hora es: " << hora << " horas," << " Tus minutos son: " // Aqui mostramos los resultados y cuanto vale todo
        << minu << " Minutos, " << " Tus segundos son: " << sgfin << " Segundos ";
    } else {
        std::cout<< " Error tu numero es invalido ya que es negativo o es 0. Vuelve a intentar "; // Mensaje que se muestra cuando el numero es negativo
    }

    return 0;

}