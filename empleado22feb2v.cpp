#include <iostream>
#include <string>
using namespace std;

class Empleado {
private:
    int numNomina;
    string nombre;
    float salarioDI;
    string puesto;
    int edad;

public:
    Empleado();
    Empleado(int, string, float, string, int, string);

    void muestraEmpleado();
    float calculaImpuestos();
    void reciboDeNomina(float);
    void presentacion();
};

Empleado::Empleado() {
    numNomina = 0;
    nombre = "Sin nombre";
    salarioDI = 0;
    puesto = "Sin puesto";
    edad = 0;
}

Empleado::Empleado(int _numNomina, string _nombre, float _salarioDI, string _puesto, int _edad) {
    numNomina = _numNomina;
    nombre = _nombre;
    salarioDI = _salarioDI;
    puesto = _puesto;
    edad = _edad;
}

void Empleado::muestraEmpleado() {
    cout << endl << "Datos del empleado" << endl;
    cout << "Nomina: " << numNomina << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "SDI: " << salarioDI << endl;
    cout << "Puesto: " << puesto << endl;
    cout << "Edad: " << edad << endl;
    cout << "Presentarse: " << presentarse << endl;
}

float Empleado::calculaImpuestos() {
    return salarioDI * 0.2;
}

void Empleado::reciboDeNomina(float impuestos) {
    cout << endl << "********** Recibo de nomina ***************" << endl;
    cout << "Nomina: " << numNomina << "           Nombre: " << nombre << endl;
    cout << "SDI: " << salarioDI << "      Dias trabajados: 15" << endl;
    cout << "   Sueldo bruto: " << salarioDI * 15 << endl;
    cout << " - ISR:          "  << impuestos << endl;
    cout << "=============================================" << endl;
    cout << "   Neto a pagar: " << (salarioDI * 15 ) - impuestos << endl;
    cout << "******************************************************" << endl;
}

void Empleado::presentacion() {
    cout << "Hola, mi nombre es " << nombre << " y trabajo como " << puesto << ". ¡Es un placer conocerte!" << endl;
}

int main() {
    Empleado emp1(123, "Raul Rodriguez", 600, "Practicante", 23);
    Empleado emp2(456, "Alana", 2500, "Sr TI", 27);
    Empleado emp3;

    emp1.muestraEmpleado();
    emp1.presentacion();

    emp2.muestraEmpleado();
    emp2.presentacion();

    emp3.muestraEmpleado();
    emp3.presentacion();

    return 0;
}
