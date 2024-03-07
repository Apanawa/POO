//Este programa crea y manipula objetos de la clase Automovil en composicion con motor

//Librerias
#include <iostream>
using namespace std;

class Motor{
private:
    int cilindros;
    int potencia;
    float rendimiento;
    string forma;
    int torque;

public:
    Motor();
    Motor(int, int, float, string, int);

    void muestraMotor();
};

class Automovil{
private:
    string marca;
    string colorAuto;
    int puertas;
    string modelo;
    int anio;
    string material;
    Motor motorDesc;

public:
    Automovil();
    Automovil(string, string, int, string, int, string, Motor);

    void muestraAuto();
};

//Definicion de metodos
//Definicion de la clase Motor
Motor::Motor(){
    cilindros = 4;
    potencia = 200;
    rendimiento = 10.7;
    forma = "V";
    torque = 154;
}

Motor::Motor(int _cilindros, int _potencia, float _rendimiento, string _forma, int _torque){
    cilindros = _cilindros;
    potencia = _potencia;
    rendimiento = _rendimiento;
    forma = _forma;
    torque = _torque;
}

void Motor::muestraMotor(){
    cout << "Caracteristicas del motor: " << endl;
    cout << "Cilindros: " << cilindros << "    Potencia: " << potencia << " hp" << endl;
    cout << "Rendimiento: " << rendimiento << " kms/litro" << endl;
    cout << "Forma de motor: " << forma << endl;
    cout << "Torque: " << torque << " libras/ft" << endl;
}

//Definir metodos de la clase Automovil

Automovil::Automovil(){
    marca = "Tesla";
    colorAuto = "Rojo";
    puertas = 4;
    modelo = "roadster";
    anio = 2025;
    material = "Fibra de carbono";
    motorDesc = Motor();
}

Automovil::Automovil(string _marca, string _colorAuto, int _puertas, string _modelo, int _anio, string _material, Motor _motorDesc){
    marca = _marca;
    colorAuto = _colorAuto;
    puertas = _puertas;
    modelo = _modelo;
    anio = _anio;
    material = _material;
    motorDesc = _motorDesc;
}

void Automovil::muestraAuto(){
    cout << "Marca del auto: " << endl;
    cout << "Color del auto: " << colorAuto << "    Puertas: " << puertas << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Año: " << anio << endl;
    cout << "Material: " << material << endl;
    motorDesc.muestraMotor();
}

//Crear objetos y manipularlos en el main
int main(){
    Motor motor1(6,560,10,"V",200), motor2(8,500,7,"W",200), motor3;

    Automovil auto1("Nissan","Rojo",5,"Sentra",2024,"Acero",motor3), auto2 ("BMW","Negro",5,"X7.5",2022,"Aluminio",motor2), auto3;

    //Mostrar los automoviles
    auto1.muestraAuto();
    auto2.muestraAuto();
    auto3.muestraAuto();

    return 0;
}
