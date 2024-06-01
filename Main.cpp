#include <iostream>
#include <chrono>
#include <thread>
#define size  12
using namespace std;

void BubbleShort(int array[])
{

    static int arrayAux[size];
    int aux;
    int cont =0;
for (int i = 0; i < sizeof(arrayAux)/sizeof(int); i++)
{
   arrayAux[i] = array[i];
}

for (int i = 0; i < size-1; i++)
{
    for (int j = 0; j < size-i-1; j++)
    {
        if (arrayAux[j] > arrayAux[j+1] )
        {
            aux = arrayAux[j];
            arrayAux[j] = arrayAux[j+1];
            arrayAux[j+1] = aux;
            cont++;
        }
    }
    
}

for (int i = 0; i < sizeof(arrayAux)/sizeof(int); i++)
{
     cout<<arrayAux[i]<<" ";
}
cout<<"\n iteracciones: "<<cont<<endl;

}

int main() 
{

int array[] = {22,3,3,10,14,15,1,2,4,5,6,55,23};


auto start = chrono::system_clock::now();

 BubbleShort(array);

auto end = chrono::system_clock::now();
chrono::duration<float,milli> duration = (end - start)/1000;


cout<<"\n el programa tardo: "<< duration.count()<<"s\n";