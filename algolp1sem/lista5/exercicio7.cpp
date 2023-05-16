#include <iostream>
using namespace std;

bool VerificadorTriangulo(float, float, float);
int TipoTriangulo(float, float, float);

int main(int argc, char const *argv[])
{
    float lado1, lado2, lado3;

    cout << "Insira os lados do triangulo" << endl;

    cout << "Lado 1: ";
    cin >> lado1;

    cout << "Lado 2: ";
    cin >> lado2;

    cout << "Lado 3: ";
    cin >> lado3;

    if (VerificadorTriangulo(lado1, lado2, lado3))
    {
        switch (TipoTriangulo(lado1, lado2, lado3))
        {
        case 1:
            cout << "Equilatero";
            break;
        case 2:
            cout << "Escaleno";
            break;
        case 3:
            cout << "Isosceles";
            break;
        }
    }
    else
        cout << "Nao forma um triangulo";

    return 0;
}

bool VerificadorTriangulo(float lado1, float lado2, float lado3)
{
    if ((lado1 < lado2 + lado3) && (lado2 < lado1 + lado3) && (lado3 < lado1 + lado3))
    {
        return true;
    }
    else
        return false;
}

int TipoTriangulo(float lado1, float lado2, float lado3)
{

    if (lado1 == lado2 == lado3)
    {
        return 1;
    }
    else if (lado1 != lado2 != lado3)
    {
        return 2;
    }
    else
        return 3;
}