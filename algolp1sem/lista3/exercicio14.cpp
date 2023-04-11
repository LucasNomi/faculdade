#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float dist1, dist2, deltaEspaco, tempo;

    dist1 = 1;
    dist2 = 0;

    while (dist1 != dist2)
    {
        do
        {
            cout << "marco quilometrico da primeira cidade: ";
            cin >> dist1; 

            cout << "marco quilometrico da segunda cidade: ";
            cin >> dist2;

            if (dist1 == dist2)
            {
                cout << "Distancias não pode ser iguais \n";
                continue;
            }else if (dist1 > dist2)
            {
                cout << "Distancias precisam estar em ordem crescente \n";
                continue;
            }
        } while (dist1 == dist2 || dist1 > dist2);

        deltaEspaco = dist1 - dist2;

        for (int i = 20; i <= 80; i += 10)
        {
            tempo = deltaEspaco / i;

            if (tempo > 2)
            {
                cout << "Distancia 1: " << dist1 << endl;
                cout << "Distancia 2: " << dist2 << endl;
                cout << "velocidade : " << i << endl;
                cout << "Tempo percorrido: " << dist1 << endl;
            }
        }
    }

    return 0;
}
