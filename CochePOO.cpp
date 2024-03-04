#include <string>
#include <vector>
#include <iostream>

// Definición de la clase Engine
class Engine {
private:
    int horsepower; // Potencia del motor en caballos de fuerza
    std::string type; // Tipo de motor, por ejemplo, "V8", "V6", etc.

public:
    // Constructor por defecto
    Engine() : horsepower(0), type("") {}

    // Constructor con parámetros para inicializar los atributos
    Engine(int hp, std::string t) : horsepower(hp), type(t) {}

    // Método para arrancar el motor
    void start() {
        std::cout << "Motor arrancando. Tipo: " << type << " con " << horsepower << " caballos de fuerza." << std::endl;
    }

    // Método para detener el motor
    void stop() {
        std::cout << "Motor detenido." << std::endl;
    }

    // Método para obtener la potencia del motor
    int getHorsepower() {
        return horsepower;
    }
};

// Definición de la clase Vehicle
class Vehicle {
private:
    std::string make; // Marca del vehículo
    std::string model; // Modelo del vehículo
    int year; // Año del vehículo
    std::vector<Engine> engines; // Vector que contiene los motores del vehículo

public:
    // Constructor por defecto
    Vehicle() : make(""), model(""), year(0) {}

    // Constructor con parámetros para inicializar los atributos
    Vehicle(std::string mk, std::string mdl, int yr) : make(mk), model(mdl), year(yr) {}

    // Método para agregar un motor al vehículo
    void addEngine(Engine engine) {
        engines.push_back(engine);
    }

    // Método para remover un motor del vehículo
    void removeEngine(Engine engine) {
        // La implementación se omitirá para simplificar el ejemplo
    }

    // Método para listar los motores del vehículo
    void listEngines() {
        for (const auto& engine : engines) {
            std::cout << "Motor: " << engine.getHorsepower() << " HP" << std::endl;
        }
    }
};

// Función principal para demostrar la creación de objetos y composición
int main() {
    // Crear un motor
    Engine engine(300, "V6");

    // Crear un vehículo
    Vehicle car("Toyota", "Camry", 2021);

    // Agregar el motor al vehículo
    car.addEngine(engine);

    // Mostrar los motores del vehículo
    car.listEngines();

    return 0;
}
