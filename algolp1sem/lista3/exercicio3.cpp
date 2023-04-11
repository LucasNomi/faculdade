#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float centrigrados;

    for (float i = 50; i <= 150; i++)
    {
        centrigrados = (i - 32) * 5/9;
        cout << i << " farenheit para centigrados: " << centrigrados << endl;
    }
    
    return 0;
}
