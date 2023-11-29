#include <iostream>
#include <random>
#include <ctime>

int main() {
    // Número de simulaciones a realizar
    int num_simulations = 100000000;

    // Contadores para los eventos A, B y A ∩ B
    int count_A = 0, count_B = 0, count_A_and_B = 0;

    // Inicializa el generador de números aleatorios
    std::mt19937 rng(time(0));
    std::uniform_int_distribution<int> die(1, 6);

    // Realiza las simulaciones
    for (int i = 0; i < num_simulations; ++i) {
        // Lanza dos dados
        int die1 = die(rng);
        int die2 = die(rng);

        // Comprueba si se cumple el evento A (la suma de los puntos es mayor o igual a 9)
        if (die1 + die2 >= 9) {
            ++count_A;
        }

        // Comprueba si se cumple el evento B (al menos un dado muestra un 6)
        if (die1 == 6 || die2 == 6) {
            ++count_B;

            // Si se cumple el evento B, comprueba si también se cumple el evento A
            if (die1 + die2 >= 9) {
                ++count_A_and_B;
            }
        }
    }

    // Calcula las probabilidades
    double P_A = static_cast<double>(count_A) / num_simulations;
    double P_B = static_cast<double>(count_B) / num_simulations;
    double P_A_and_B = static_cast<double>(count_A_and_B) / num_simulations;

    // Calcula la probabilidad condicional P(A|B)
    double P_A_given_B = P_A_and_B / P_B;

    // Imprime el resultado
    std::cout << "P(A|B) = " << P_A_given_B << std::endl;

    return 0;
}


