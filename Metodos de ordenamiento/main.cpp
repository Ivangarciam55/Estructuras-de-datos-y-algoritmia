#include <iostream>
#include "BubbleSort.h"

using namespace std;

int main()
{
    int opcion;
    BubbleSort bs;
    while (opcion != 4) {
        cout << "Bienvenido, seleccione una opcion" << endl;
        cout << "1.-Bubble Sort\n2.-Selection Sort\n3.-Insertion Sort" << endl;
        cin >> opcion;

        switch (opcion) {
            case 1:
                bs.principal();
            default:
                break;
        }
    }
    return 0;
}
