#include <string>
#include <vector>
#include <iostream>

// Definici�n de la clase Engine
class Engine {
private:
    int horsepower; // Potencia del motor en caballos de fuerza
    std::string type; // Tipo de motor, por ejemplo, "V8", "V6", etc.

public:
    // Constructor por defecto
    Engine() : horsepower(0), type("") {}

    // Constructor con par�metros para inicializar los atributos
    Engine(int hp, std::string t) : horsepower(hp), type(t) {}

    // M�todo para arrancar el motor
    void start() {
        std::cout << "Motor arrancando. Tipo: " << type << " con " << horsepower << " caballos de fuerza." << std::endl;
    }

    // M�todo para detener el motor
    void stop() {
        std::cout << "Motor detenido." << std::endl;
    }

    // M�todo para obtener la potencia del motor
    int getHorsepower() {
        return horsepower;
    }
};

// Definici�n de la clase Vehicle
class Vehicle {
private:
    std::string make; // Marca del veh�culo
    std::string model; // Modelo del veh�culo
    int year; // A�o del veh�culo
    std::vector<Engine> engines; // Vector que contiene los motores del veh�culo

public:
    // Constructor por defecto
    Vehicle() : make(""), model(""), year(0) {}

    // Constructor con par�metros para inicializar los atributos
    Vehicle(std::string mk, std::string mdl, int yr) : make(mk), model(mdl), year(yr) {}

    // M�todo para agregar un motor al veh�culo
    void addEngine(Engine engine) {
        engines.push_back(engine);
    }

    // M�todo para remover un motor del veh�culo
    void removeEngine(Engine engine) {
        // La implementaci�n se omitir� para simplificar el ejemplo
    }

    // M�todo para listar los motores del veh�culo
    void listEngines() {
        for (const auto& engine : engines) {
            std::cout << "Motor: " << engine.getHorsepower() << " HP" << std::endl;
        }
    }
};

// Funci�n principal para demostrar la creaci�n de objetos y composici�n
int main() {
    // Crear un motor
    Engine engine(300, "V6");

    // Crear un veh�culo
    Vehicle car("Toyota", "Camry", 2021);

    // Agregar el motor al veh�culo
    car.addEngine(engine);

    // Mostrar los motores del veh�culo
    car.listEngines();

    return 0;
}
