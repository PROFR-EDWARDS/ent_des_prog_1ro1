#include<iostream>
#include<conio.h>
using namespace std;
int main()
//César Ronaldo Morales Samaniego
//Grupo: 1-1

{
    int num;
    cout<<"PROPORCIONA UN NUMERO: ";
    cin>>num;
    if (num>0)
       cout<<"ES NUMERO POSITIVO.......";
    else
      if (num<0)
         cout<<"ES UN NUMERO NEGATIVO.....";
      else
        cout<<"ES UN NUMERO NULO O NULL....";
    getch(); 
}

//El codigo funciona correctamente y es facil de hacer, si el numero es menor a 0 es negativo de lo contrario es positivo
