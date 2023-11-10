#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    srand(time(NULL));
    
    const int SIZE = 10;
    int arr [SIZE];
    
    bool alredyThere;
    
    for (int i = 0; i < SIZE; i++)
    {
        alredyThere = false;
        int newRanomValue = rand()% 20;
        
        arr[i] = rand () % 20;
        for (int j = 0; j < i; j++)
        {
           if(arr[j]==newRanomValue) {
               alreadythere = true;
           }
        }
        if (alreadythere)
    }
    
    
    
    for (int q = 0; q < SIZE; q++)
    {
        cout << arr[q] << endl;
    }
    
    return 0;
}
