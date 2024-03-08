// Este programa sobrecarga el operador suma para la clase complejo

//Librerias
#include <iostream>
using namespace std;


//Declarar la clase Complejo
class Complejo{
private:
    int real;
    int imaginaria;

public:
    Complejo();
    Complejo(int, int);

    //Sobrecargar el operador suma para que funcione con complejos
    Complejo operator+(Complejo);

    //Muestra
    void muestraComplejo();
};


//Definir metodos de la clase complejo
//Constructores
Complejo::Complejo(){
    real = 1;
    imaginaria = 1;
}

Complejo::Complejo(int _real, int _imaginaria){
    real = _real;
    imaginaria = _imaginaria;
}

Complejo Complejo::operator+(Complejo compASumar){
    int realNueva;
    int imaginariaNueva;

    realNueva = real + compASumar.real;
    imaginariaNueva = imaginaria + compASumar.imaginaria;

    Complejo resultadoSuma(realNueva, imaginariaNueva);

    return resultadoSuma;

}

void Complejo::muestraComplejo(){
    cout << endl << "Numero complejo:" << endl;
    cout << real << " + " << imaginaria << " i" << endl;
}

//Crear objetos, manipularlos y utlizar la sobrecarga en el main
int main(){
    //Crear objetos de la clase complejo
    Complejo c1(5,3), c2(10,7), c3(4,5), c4;

    //Mostrar los numeros complejos instanciados o creados
    c1.muestraComplejo();
    c2.muestraComplejo();
    c3.muestraComplejo();
    c4.muestraComplejo();

    //Sumar complejos
    cout << endl << "Sumando c1 y c2 y dejando la suma en c4: " << endl;

    c4 = c1 + c2;
    //Mostrar el resultado que es c4
    c4.muestraComplejo();

        cout << endl << "Sumando c2 y c3 y dejando la suma en c4: " << endl;

    c4 = c2 + c3;
    //Mostrar el resultado que es c4
    c4.muestraComplejo();

    cout << endl << "Sumando c1 y c2 y dejando la suma en c4: " << endl;

    c4 = c1 + c2 + c3;
    //Mostrar el resultado que es c4
    c4.muestraComplejo();

    return 0;
}
