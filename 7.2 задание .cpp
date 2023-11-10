#include <iostream>
using namespace std;

int main()

{
    setlocale(0, "");
    
    int n;
    int sum = 0;
    
    cout<<" Введите n = ";
    cin>>n;
    {
        sum += n%10;
        n /=10;
    }
    cout<<"Сумма = " <<sum<<endl;

    return 0;
}
