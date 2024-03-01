//Este programa crea y manipula objetos de la clase computadora

#include <iostream>
using namespace std;

//Declarar la clase Procesador
class Procesador{
private:
    string marcaProc;
    string modeloProc;
    float precio;
    int nucleos;

public:
    Procesador();
    Procesador(string, string, float, int);

    void muestraProc();

};


//Declarar la clase computadora
class computadora {
private:
    string marca;
    string colorComp;
    string modelo;
    int ram;
    Procesador CPU;

public:
    //Constructores
    computadora();
    computadora(string, string, string, int, Procesador);

    //Muestra
    void muestraCompu();

    //Metodos adicionales
    void encender();
    void grabar();
};

//Definir los metodos de procesador
Procesador::Procesador(){
    marcaProc = "Intel";
    modeloProc = "Core i7";
    precio = 1500;
    nucleos = 8;
}

Procesador::Procesador(string _marcaProc, string _modeloProc, float _precio, int _nucleos){
    marcaProc = _marcaProc;
    modeloProc = _modeloProc;
    precio = _precio;
    nucleos = _nucleos;
}

void Procesador::muestraProc(){
    cout << "Procesador: " << marcaProc << " " << modeloProc << " " << nucleos << " nucleos" << endl;
    cout << "Precio: " << precio << endl;
}


//Definir los metodos de la clase computadora
computadora::computadora(){
    marca = "Dell";
    colorComp = "Negro";
    modelo = "Bonita7070";
    ram = 32;
    CPU = Procesador();
}

computadora::computadora(string _marca, string _colorComp, string _modelo, int _ram, Procesador _CPU){
    marca = _marca;
    colorComp = colorComp;
    modelo = _modelo;
    ram = _ram;
    CPU = _CPU;
}

void computadora::muestraCompu(){
    cout << endl << "Computadora: " << endl;
    cout << "Marca: " << marca << "    Modelo: " << modelo << endl;
    cout << "Color: " << colorComp << "    Capacidad en RAM: " << ram << endl;
    CPU.muestraProc();
}

void computadora::encender(){
    cout << endl << "Método encenciendo computadora" << endl;
    cout << "Computadora: " << marca << " " << modelo << endl;
    cout << "YEEEEEEEEEEESSSSSS" << endl;
}

void computadora::grabar(){
    cout << endl << "Computadora: " << marca << " " << modelo << endl;
    cout << "*********Camara Acción*********" << endl;
}

//Crear objetos y manipularlos en el main
int main(){

    //Crear objetos de la clase procesador y computadora
    Procesador proc1, proc2("AMD", "Ryzen",1500,16), proc3("Intel","i9",2500,32);

    computadora comp1, comp2("HP","Gris","Pavillon",16,proc1), comp3("Mac","Blanco","MacAir",32,proc3);

    //Mostrar procesadores
    cout << "Procesadores disponibles: " << endl;
    proc1.muestraProc();
    proc2.muestraProc();
    proc3.muestraProc();

    //Mostrar las computadoras
    comp1.muestraCompu();
    comp2.muestraCompu();
    comp3.muestraCompu();

    return 0;
}
