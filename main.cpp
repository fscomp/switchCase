#include <stdio.h>
#include <iostream>
using std::cout;

int main (void )
{
  int valor;
 
  cout <<"Digite um valor de 1 a 7: ";
  scanf("%d", &valor);
 
  switch (valor)
  {
     case 1 :
        cout << "Domingo\n";
     break;
 
     case 2 :
        cout << "Segunda\n";
     break;
 
     case 3 :
        cout << "Terça\n";
     break;
 
     case 4 :
        cout << "Quarta\n";
     break;
 
     case 5 :
        cout << "Quinta\n";
     break;
 
     case 6 :
        cout << "Sexta\n";
     break;
 
     case 7 :
        cout << "Sabado\n";
     break;
 
     default :
       cout<< "Valor invalido!\n";
  }
 
 
  return 0;
}
