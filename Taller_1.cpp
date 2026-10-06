/* Taller 1 crear un centro de salud que digitalice su proceso de admisión.capture la información de un paciente,
 calcule métricas de salud automáticamente y genere una ficha médica formateada en pantalla. */

# include <iostream>
# include <iomanip>
# include <string>
# include <limits> /*Este que nos ayuda a utilizar limites numericos es clave para la parte de Direccion, 
en el codigo sin esto no se lee el cin ignore lo cual no me dejaria arreglar el problema con getline*/
int main() {
    // Creacion de las variables a utilizar
    std::string nombreCompleto, correo, numeroTel, direccion;
    int edadPa;
    char genero, estrato;      // Aqui tenemos a las variables divididas segun sun funcionamiento correspondiente 
    float peso, altura, iMC;
    bool alergias;

    // Ahora la entrada de los datos
    std::cout << " Ficha del Paciente mirar sus datos con detenimiento " << "\n\n";
    std::cout << "Ingrese el Nombre del paciente "; 
    std::getline(std::cin, nombreCompleto); /*Aqui no es necesario poner el cin.ignore de abajo ya que es la primera linea
    por lo cual no se salta nada ya qu se lee directamente caso contrario a lo que pasa con Direccion*/
    std::cout << "Ingrese la Edad del Paciente ";
    std::cin >> edadPa;

    std::cout << "Ingrese el Genero del Paciente "; // M = Masculino, F = Femenino O = otros 
    std::cin >> genero;

    std::cout << "Ingrese el peso del Paciente ";
    std::cin >> peso;
    
    std::cout << "Ingrese la Altura del Paciente ";
    std::cin >> altura;

    std::cout << "Ingrese el Estrato socieconomico del Paciente ";
    std::cin >> estrato;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); /*Aqui ponemos esto porque si no el getline de direccion
     no se lee si no que se salta y no dejaria ingresar nada en este espacio saltaria directamente al Numero del Paciente  */
    std::cout << "Ingrese la Direccion del Paciente  ";
    std::getline(std::cin, direccion); 

    std::cout << "Ingrese el Numero de telefono del Paciente ";
    std::cin >> numeroTel;

    std::cout << "Ingrese el Correo Electronico del Paciente ";
    std::cin >> correo;

    std::cout << "¿El Paciente tiene alergias conocidas? (1 = si 0 = no) ";
    std::cin >> alergias;

    iMC = peso / (altura * altura); /*Aqui lo pngo altura x altura ya que no me lee signos de potencia como lo seria ** asi que esta 
    manera reemplaza lo de la potencia*/
    std::cout << " =========== INFORME DEL PACIENTE =========== " << "\n\n";

    std::cout << "Nombre del Paciente: " << nombreCompleto << "\n";
    std::cout << "El Paciente Tiene: " << edadPa << " anios \n";
    std::cout << "Genero Paciente: " << genero << "\n";
    std::cout << "Peso del Paciente: " << peso << " kg \n";
    std::cout << "Altura del Paciente: " << altura << " metros \n"; // Ahora ya mostramos en pantalla los resultados de nuestro paciente
    std::cout << "Estrato del Paciente: " << estrato << "\n";
    std::cout << "Direccion del Paciente: " << direccion << "\n";
    std::cout << "Numero Telefonico: " << numeroTel << "\n";
    std::cout << "Correo Electronico: " << correo << "\n";
    std::cout << "¿Alergias conocidas? " << (alergias ? "si" : "no") << "\n\n";

    std::cout << " =========== Clasificacion de IMC ============" "\n\n";

    std::cout << "Tu IMC es: " << iMC << "\n";
    // Y por ultimo las comparaciones logicas para Clasificar a nuestro Paciente segun su IMC a el peso correspondiente
    if (iMC < 18.5) {
        std::cout << "Bajo peso ";
    } else if (iMC > 18.5 && iMC < 25.0) {  
        std::cout << "Peso Normal ";
    } else if (iMC >= 25.0 && iMC < 30.0 ) {
        std::cout << "Sobrepeso";
    } else {
        std::cout << "Obesidad! cuidadooo";
    }
    
    return 0;
// Y este Es el Fin de mi Codigo espero le agrade y muestre el potencial que tengo en la carrera.
}