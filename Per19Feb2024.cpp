//Este programa crea manipula objetos de la clase Persona

//librerias
#include <iostream>
using namespace std;

//Declarar la clase persona
class Persona{
private:
    string nombre;
    int edad;
    float estatura;
    float masa;

public:
    //Constructores
    Persona();
    Persona(string, int, float, float);

    //Setrers
    void setNombre(string);
    void setEdad(int);
    void setEstatura(float);
    void setMasa(float);

    //Getters
    string getNombre();
    int getEdad();
    float getEstatura();
    float getMasa();

    //Muestra
    void muestraPersona();

    //Metodos adicionales
    void calculaIMC();

    void calculaAgua();

};

//Definir los metodos de la clase Persona
//Definir los constructores
Persona::Persona(){
    nombre = "sin nombre";
    edad = 0;
    estatura = 1;
    masa = 0;
}

Persona::Persona(string _nombre, int _edad, float _estatura, float _masa){
    nombre = _nombre;
    edad = _edad;
    estatura = _estatura;
    masa = _masa;
}

//Definir los setters - Asignan un valor al atributo correspondiente
void Persona::setNombre(string _nombre){
    nombre = _nombre;
}

void Persona::setEdad(int _edad){
    edad = _edad;
}

void Persona::setEstatura(float _estatura){
    estatura = _estatura;
}

void Persona::setMasa(float _masa){
    masa = _masa;
}


//Definicion de los getters - Consultan y dan de retorno el valor del atributo correspondiente

string Persona::getNombre(){
    return nombre;
}

int Persona::getEdad(){
    return edad;
}

float Persona::getEstatura(){
    return estatura;
}

float Persona::getMasa(){
    return masa;
}

//Definición del metodo muestra
void Persona::muestraPersona(){
    cout << endl << "Datos de la persona: " << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << " anios     Estatura: " << estatura << " Mts.   Masa: " << masa << " Kgs. " << endl;
}

//Definición de metodo adicionales
void Persona::calculaIMC(){
    cout << "IMC " << (masa/(estatura * estatura)) << endl;
}

float Persona::calculaAgua(){

}

//Crear objetos y manipularllos en el main
int main(){

    //Crear objetos de la clase persona
    Persona per1("Pancho Pantera",19,1.80,70), per2("Tigre tonio",21,1.75,90), per3;

    //Mostrar los atributos de las personas en el peto muestra
    cout << "Objetos de los objetos de la clase persona: " << endl;
    per1.muestraPersona();



    per2.muestraPersona();


    per3.muestraPersona();

    cout << endl << "IMC de las personas: " << endl;
    per1.calculaIMC();
    per2.calculaIMC();
    per3.calculaIMC();
}

//cambiando el nombte de per3
