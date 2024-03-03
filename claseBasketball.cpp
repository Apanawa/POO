

class Basketball {
private:
    std::string nombre;    // Atributo para almacenar el nombre del jugador
    float estatura;        // Atributo para almacenar la estatura del jugador
    float peso;            // Atributo para almacenar el peso del jugador
    float envergadura;     // Atributo para almacenar la envergadura (span de brazos) del jugador
    int numJersey;         // Atributo para almacenar el n�mero de jersey (camiseta) del jugador

public:
    // Constructor por defecto
    Basketball() {}

    // Constructor con par�metros para inicializar los atributos de la clase
    Basketball(std::string nombre, float estatura, float peso, float envergadura, int numJersey)
        : nombre(nombre), estatura(estatura), peso(peso), envergadura(envergadura), numJersey(numJersey) {}

    // M�todos que realizar�n operaciones a�n no especificadas, relacionadas con el jugador
    void MVP() {
        // M�todo para determinar si el jugador es el m�s valioso (MVP)
    }

    void Titulares() {
        // M�todo para determinar si el jugador es titular
    }

    void MejorDef() {
        // M�todo para determinar si el jugador es el mejor en defensa
    }
};

class Posiciones {
private:
    std::string base;      // Atributo para la posici�n de Base
    std::string escolta;   // Atributo para la posici�n de Escolta
    std::string alero;     // Atributo para la posici�n de Alero
    std::string alaPivot;  // Atributo para la posici�n de Ala-P�vot
    std::string pivot;     // Atributo para la posici�n de P�vot

public:
    // Constructor por defecto
    Posiciones() {}

    // Constructor con par�metros para inicializar los atributos de la clase
    Posiciones(std::string base, std::string escolta, std::string alero, std::string alaPivot, std::string pivot)
        : base(base), escolta(escolta), alero(alero), alaPivot(alaPivot), pivot(pivot) {}

    // M�todo que realizar� una operaci�n a�n no especificada, relacionada con la posici�n del jugador
    void EjecutarPosicion() {
        // M�todo para ejecutar una acci�n basada en la posici�n
    }
};
