
# include <iostream>
# include <iomanip>
# include <string>

int main(){

    int saldoIN, ingreso, monto;
    std::cout<< " Ingresa tu Saldo para continuar: ";
    std::cin>> saldoIN;

    if(saldoIN < 0){
        std::cout<< " Error! Saldo invalido Ingresa un numero positivo ";
    } else {
        std::cout<< " ============= BIENVENIDO ============ \n\n";
        std::cout<< " 1 = Consultar, 2 = Retirar, 3 = Consignar: ";
        std::cin>> ingreso;
        switch (ingreso){
        case 1:
            std::cout<< " Tu saldo es: " << saldoIN << "\n";
            break;
        case 2:
            std::cout<< " Ingresa el monto que quieres retirar: ";
            std::cin>> monto;
            if(monto < 0 || monto > saldoIN){
                std::cout<< " Error! Tu monto es negativo o Mayor a tu saldo ingresa de nuevo y pon un monto valido ";
            } else {
                int nuevoSal = saldoIN - monto;
                std::cout<< " Retiraste: " << monto << " $COL" << " Tu nuevo Saldo es: " << nuevoSal << " $COL \n";
            }
            break;
        case 3:
            std::cout<< " Ingresa el monto que quieres consignar: ";
            std::cin>> monto;
            if(monto < 0){
                std::cout<< " Error! Tu monto es negativo ingresa un monto valido ";
            } else {
                int nuevoSal = monto + saldoIN;
                std::cout<< " Consignaste: " << monto << " $COL" << ", Tu nuevo Saldo es: " << nuevoSal << " $COL \n";
            }
            break;
        default:
            std::cout<< " Opcion no valida ingresa el comando designado: \n";
        }
    }
    return 0;
}