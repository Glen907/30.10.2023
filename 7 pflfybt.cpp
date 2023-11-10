#include <iostream>
#include <ctime>
using namespace std;

void int_massiv(){
    
    setlocale(LC_ALL, "RU");
    srand(time(NULL));
    
    const int SIZE = 10;
    int arr {SIZE};
    
    bool alredyThere;
    
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand () % 20;
    }
    
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << endl;
    }
    
    return 0;
}