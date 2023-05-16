#include <iostream>
using namespace std;

float MediaArit(float, float, float);
float MediaPond(float, float, float);
float MediaHarmonica(float, float, float);

int main()
{
    float nota1, nota2, nota3;

    cout << "Nota 1:";
    cin >> nota1;

    cout << "Nota 2:";
    cin >> nota2;

    cout << "Nota 3:";
    cin >> nota3;

    cout << "Média Aritmética: " << MediaArit(nota1, nota2, nota3) << endl;
    cout << "Média Ponderada: " << MediaPond(nota1, nota2, nota3) << endl;
    cout << "Média Harmonica: " << MediaHarmonica(nota1, nota2, nota3) << endl;

    return 0;
}

float MediaArit(float num1, float num2, float num3)
{
    return (num1 + num2 + num3) / 3;
}

float MediaPond(float num1, float num2, float num3)
{
    return ((num1 * 3) + (num2 * 5) + (num3 * 2)) / (3 + 5 + 2);
}

float MediaHarmonica(float num1, float num2, float num3)
{
    return 3 / ((1 / num1) + (1 / num2) + (1 / num3));
}