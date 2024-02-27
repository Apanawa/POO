//Este programa declara y manipula objetos de la clase rectangulo

//Librerias
#include <iostream>
using namespace std;


//Declarar la clase rectangulo
class Rectangulo{
    //Atriibutos
private:
    double largo;
    double ancho;

//Metodos
public:
    //constructores - Crean o instancian objetos
    Rectangulo(); //Constructor sin parametros
    Rectangulo(double, double); //Constructor con parametros

    //Metodos setters
    void setLargo(double);
    void setAncho(double);

    //Metodo mostrar
    void muestraRec();

    //Metodos adicionales
    double calcArea();

    void  cantar();

};

//Definir metodos de la clase Rectangulo
Rectangulo::Rectangulo(){
    //Asignar valores a los atributos por default
    largo = 10;
    ancho = 3;
}

Rectangulo::Rectangulo(double _largo double _ancho){
    largo = _largo;
    ancho = _ancho;
}

void Rectangulo::setLargo(double _largo){
    largo = _largo;
}

void Rectangulo::setAncho (double _ancho){
    ancho = _ancho;
}

//Metodo muestra para desplegar en pantalla los atributos
void Rectangulo::muestraRec(){
    cout << "***************" << endl;
    cout << "Largo : " << largo << endl;
    cout << "Ancho : " << ancho << endl <<endl;
}

double Rectangulo::calcArea(){
    return largo*ancho;
}

void Rectangulo::cantar(){
    cout << endl << "Estas son las mananitas" << endl;
    cout << "Que cantaba el rey David" << endl;
    cout << "Hoy por ser tu no cumpleanos" << endl;
    cout << "Te las cantamos aqui" << endl;
}

//Crear o instancias objetos de la clase Rectangulo y manipularlos
//en el modo main
int main(){
    //Crear objetos de la clase Rectangulo
    Rectangulo rect1(20,5),rect2(25,7)rect3;

    //Mostrar en pantalla rect1,rect2 y rect3
    cout << endl << "Rect1" << endl;
    rect1.muestraRec();

    cout << endl << "Rect2" << endl;
    rect2.muestraRec();

    cout << endl << "Rect3" << endl;
    rect3.muestraRec();

    return 0;
}






