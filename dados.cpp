#include <iostream>
#include <cstdlib>  // Para la función rand()
#include <ctime>    // Para la función time()

using namespace std;

int main() {
    // Inicializar la semilla para obtener números aleatorios diferentes en cada ejecución
    srand(time(0));

    const float numLanzamientos = 10000; // Puedes ajustar este número según tus necesidades
   float conteoExitos = 0;

    for (int i = 0; i < numLanzamientos; ++i) {
        // Lanzar dos dados (valores entre 1 y 6)
        int dado1 = rand() % 6 + 1;
        int dado2 = rand() % 6 + 1;

        // Verificar la condición: la suma de puntos es ≥ 9 y la cara 6 aparece en al menos uno de los dados
        if (( dado1 == 6 || dado2 == 6)) {
            if (dado1 + dado2 >= 9)
            {
                conteoExitos++;
            }
            
        }
    }

    // Calcular la probabilidad
   float probabilidad = (conteoExitos) / numLanzamientos;

    // Mostrar resultados
    cout << "Número de lanzamientos: " << numLanzamientos << endl;
    cout << "Número de casos favorables: " << conteoExitos << endl;
    cout << "Probabilidad P(la suma de puntos sea >= 9 | la cara 6 aparece): " << probabilidad << endl;

    return 0;
}

