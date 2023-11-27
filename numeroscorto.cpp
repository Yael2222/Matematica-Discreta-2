#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    float numeros[4];
    float numeros1[4];
    int resp;
    do
    {
        cout << "Numeros incluyendo 0: ";
        for (int i = 0; i < 4; i++)
        {
            numeros[i] = -8 + rand() % 14;
            cout << numeros[i] << ",";
        }
        cout << endl
             << "Numeros excluyendo el 0: ";
        for (int i = 0; i < 4; i++)
        {
            numeros1[i] = -9 + rand() % 14 + 1;
            cout << numeros1[i] << ",";
        }
        cout << endl;
        float Mult1 = numeros[0] * numeros[1] * numeros[2] * numeros[3];
        float Mult2 = numeros1[0] * numeros1[1] * numeros1[2] * numeros1[3];
        cout << "Multiplicacion de numeros incluyendo el 0 = " << Mult1 << endl;
        cout << "Multiplicacion de numeros excluyendo el 0 = " << Mult2 << endl;
        cout << "Soluciones totales: (14 4) = 1001" << endl;
        cout << "Quiere repetir el experimento?" << endl;
        cout << "Si = 1, No = 2" << endl;
        cin >> resp;
    } while (resp == 1);
    float resultado1 = ((40320 / (2 * 720)) * (720 / (2 * 24)));
    float resultado2 = (40320 / (24 * 24));
    float resultado3 = (720 / (24 * 2));
    float suma1 = resultado1 + resultado2 + resultado3;
    cout << "EL NUMERO DE SOLUCIONES PARA CADA CASO:" << endl;
    cout << "Cuando solo hay soluciones positivas:" << endl;
    cout << "con 2 negativos,con todos en negativo y sin negativos: " << endl;
    cout << "(8 2) x (6 2) + (8 4) + (6 4) " << endl;
    cout << "La suma total de las soluciones es: " << suma1 << endl;
    float resultado01 = (1 / (1 * 1));
    float resultado02 = (6227020800 / (6 * 3628800));
    float suma2 = resultado01 + resultado02;
    cout << "---------------------------------------------" << endl;
    cout << "Cuando solo hay soluciones Nulas solo si se incluye el cero en los numeros positivos:" << endl;
    cout << "se escoge el unico cero y 3 numeros de el pool de numeros: " << endl;
    cout << "(1 1) x (13 3)" << endl;
    cout << "La suma total de las soluciones nulas es: " << suma2 << endl;
    float Cantveces;
    float resultadoP;
    float resultadoP2;
    do
    {
        cout << "-------------------------------------------" << endl;
        cout << "PROBABILIDAD EMPIRICA" << endl;
        cout << "Ingrese la cantidad de veces en que quiere realizar el experimento: ";
        cin >> Cantveces;
        resultadoP = suma1 / Cantveces;
        resultadoP2 = suma2 / Cantveces;
        cout << "Soluciones positivas: "
             << suma1 << "/" << Cantveces << " = " << resultadoP << "% de probabilidad" << endl;
        cout << "Soluciones Nulas: "
             << suma2 << "/" << Cantveces << " = " << resultadoP2 << "% de probabilidad" << endl;
        cout << "Quiere poner otra cantidad?" << endl;
        cout << "si=1 no=2";
        cin >> resp;
    } while (resp == 1);
    return 0;
}
