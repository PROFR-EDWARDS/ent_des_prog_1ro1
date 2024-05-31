// Codificado por: Beastieux
// Código para convertir de Decimal a Binario (0-255).
#include <iostream>
using namespace std;

//César Ronaldo Morales Samaniego
//grupo: 1-1

int main() {
    int D, D1, D2, D3, D4, D5, D6, D7, D8, R1, R2, R3, R4, R5, R6, R7, R8;
 //Corregí el error, es cambiar las variables de minuscula a mayuscula
// hay error de compilacion ya que aqui las variables d1, d8, r2 y r5 ya que estan en misnusculas y en el "else" estan en mayusculas
 eso hace que marque error ya que no las detecta como variables
     
     
    cout << "Ingrese un numero decimal" << endl;
    cin >> D;
     
    if (D > 255 || D < 0)
        cout << "Ingrese un numero del 0 al 255" << endl;
    else {
        D1 = D / 2; R1 = D % 2; //error por ser "D1" y no estar asignadas como variable
        D2 = D1 / 2; R2 = D1 % 2; //error por ser "R2" y no estar asignadas como variable
        D3 = D2 / 2; R3 = D2 % 2;
        D4 = D3 / 2; R4 = D3 % 2;
        D5 = D4 / 2; R5 = D4 % 2; //error por ser "R5" y no estar asignadas como variable
        D6 = D5 / 2; R6 = D5 % 2;
        D7 = D6 / 2; R7 = D6 % 2;
        D8 = D7 / 2; R8 = D7 % 2; //error por ser "D8" y no estar asignadas como variable
        
        cout<<endl<< "El resultado en Binario es:  ";
        cout << R8 << R7 << R6 << R5 << R4 << R3 << R2 << R1 << endl;
    }
     
    cin.ignore();
    return 0;
}
