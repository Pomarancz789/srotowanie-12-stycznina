#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
using namespace std;

void wersjapierwsza()
{
    float tab[10]={0.45,0.01,0.99,0.23,0.69,0.56,0.34,0.78,0.89,0.12};
    int kubel[10]={0};
    for(int i=0; i<10; i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl;
    
    
    for(int j=0; j<10; j++)
    {
        int indexkubla=tab[j]*10;
        kubel[indexkubla]=j;
    }
    
    
    for(int h=0; h<10; h++)
    {
        cout << tab[kubel[h]] << " ";
    }
    cout << endl;
}


int main()
{
    wersjapierwsza();
    
    return 0;
}
