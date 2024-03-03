

class Basketball {
private:
    std::string nombre;    // Atributo para almacenar el nombre del jugador
    float estatura;        // Atributo para almacenar la estatura del jugador
    float peso;            // Atributo para almacenar el peso del jugador
    float envergadura;     // Atributo para almacenar la envergadura (span de brazos) del jugador
    int numJersey;         // Atributo para almacenar el número de jersey (camiseta) del jugador

public:
    // Constructor por defecto
    Basketball() {}

    // Constructor con parámetros para inicializar los atributos de la clase
    Basketball(std::string nombre, float estatura, float peso, float envergadura, int numJersey)
        : nombre(nombre), estatura(estatura), peso(peso), envergadura(envergadura), numJersey(numJersey) {}

    // Métodos que realizarán operaciones aún no especificadas, relacionadas con el jugador
    void MVP() {
        // Método para determinar si el jugador es el más valioso (MVP)
    }

    void Titulares() {
        // Método para determinar si el jugador es titular
    }

    void MejorDef() {
        // Método para determinar si el jugador es el mejor en defensa
    }
};

class Posiciones {
private:
    std::string base;      // Atributo para la posición de Base
    std::string escolta;   // Atributo para la posición de Escolta
    std::string alero;     // Atributo para la posición de Alero
    std::string alaPivot;  // Atributo para la posición de Ala-Pívot
    std::string pivot;     // Atributo para la posición de Pívot

public:
    // Constructor por defecto
    Posiciones() {}

    // Constructor con parámetros para inicializar los atributos de la clase
    Posiciones(std::string base, std::string escolta, std::string alero, std::string alaPivot, std::string pivot)
        : base(base), escolta(escolta), alero(alero), alaPivot(alaPivot), pivot(pivot) {}

    // Método que realizará una operación aún no especificada, relacionada con la posición del jugador
    void EjecutarPosicion() {
        // Método para ejecutar una acción basada en la posición
    }
};
