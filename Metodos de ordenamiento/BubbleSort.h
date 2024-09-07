//
// Created by ivang on 07/09/2024.
//

#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <iostream>
#include <random>
#include <ctime>

using namespace std;

class BubbleSort {
public:
    BubbleSort() {
        t0 = 0;
        t1 = 1;
    }
    BubbleSort(clock_t t0, clock_t t1)
        : t0(t0),
          t1(t1){}

private:
    clock_t t0, t1;
public:
    int principal() {
        t0 = clock();
        bSort();
        t1 = clock();
        double time = (static_cast<double>(t1 - t0)/CLOCKS_PER_SEC);
        cout << endl << "Tiempo de ejecucion: " << time << endl;
        return 0;
    }

    static void bSort() {
        int tam;
        int contador = 1;
        cout << "Ingrese el tamano del arreglo" <<endl;
        cin >> tam;
        //int num[tam];

        vector<int> num(tam);

        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dis(1, 50);

        cout << "Desordenado" << endl;

        for (int i = 0; i < tam; ++i) {
            num[i] = dis(gen);
        }
        for (int i = 0; i < tam; ++i) {
            cout << num[i] << " ";
        }

        for(int i = 0; i < tam; i++){
            for(int j = 0; j < tam-i-1; j++) {
                if(num[j] > num[j +1]) {
                    cout << endl <<"Vuelta " <<contador++ << " ";
                    const int pos = num[j];
                    cout << pos << " ";
                    num[j] = num[j +1];
                    cout << num[j] << " ";
                    num[j +1] = pos;
                    cout << num[j +1] << " ";
                }
            }
        }

        cout << endl << "Ordenado" << endl;
        for(int i = 0; i < tam; i++) {
            cout << num[i] << " ";
        }
    }
};



#endif //BUBBLESORT_H
