
# include <iostream>
# include <iomanip>
# include <string>

int main(){
    int edad, ingresoM, deudaM; 
    bool historial;

    std::cout<< " Cual es tu ingreso mensual: ";
    std::cin>> ingresoM;

    std::cout<< " Cual es tu deuda mensual: ";
    std::cin>> deudaM;

    std::cout<< " Ingresa tu edad: ";
    std::cin>> edad;

    std::cout<< " ¿Tienes historial crediticio? 1 = Si y 0 = No ";
    std::cin>> historial;

    if(ingresoM <= 0 || deudaM < 0 || (edad < 18 || edad > 100) || (historial != 0 && historial != 1)){
        std::cout<< " Error! Datos no validos fijate en no tener numeros negativos, o escribir 0 y 1 para tu historial crediticio ";
    } else {
        std::cout<< " =============== Datos correctos sigamos ============== \n";
        int relacion = deudaM / ingresoM;
        int porcentaje = relacion * 100;
        int capacidad = ingresoM - deudaM;

        std::cout<< " =================== RESULTADOS ================= \n";
        std::cout<< " Tu Ingreso mensual es: " << ingresoM << " $COL\n";
        std::cout<< " Tu Deuda mensual es: " << deudaM << " $COL\n";
        std::cout<< " Tu edad es: " << edad << " anios\n";
        std::cout<< " ¿Tienes historial crediticio? " << historial << " 1 = Si y 0 = No\n";
        std::cout<< " Tu relacion Deuda/Ingreso es: " << relacion << "\n";
        std::cout<< " Tu capacidad de pago es " << capacidad << " $COL\n";

        if(relacion > 0.5 || relacion < 0){
            std::cout<< " Tu Riesgo es alto tu relacion Deuda/Ingreso es preocupante ";
        } else if(relacion <= 0.3 || edad >= 25 || historial == 1){
            std::cout<< " Tu Riesgo es bajo estas bien ";
        } else {
            std::cout<< " Tu Riesgo es medio estas mas o menos ";
        }
    }

    return 0;
}