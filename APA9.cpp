#include "iostream"
#include "cstdlib"
#include "math.h"
using namespace std;

struct Media {
     double VA;
     double VB;
     double M;
};

struct Media me[10];

void  armazenar(int lin, double A,double B)
{
      me[lin].VA = A;
      me[lin].VB = B;
      
}


double lerA() 
{
   double A;
   system("cls");
   cout << "Digite valor de A: \n"; cin >> A;
   return A;      
}

double lerB() 
{
   double B;
   system("cls");
   cout << "Digite valor de B: \n"; cin >> B;
   return B;      
}

void CalMed(int lin)
{
    double MG, v1, v2;
    
    for (int i = 0; i <= lin; i++)
    {
    v1 = me[i].VA;
    v2 = me[i].VB; 
    MG = sqrt(v1 * v2);   
    me[i].M = MG;
    }  
}

void Exibir(int lin)
{
     system("cls");
     for (int i=0; i <= lin; i++)
     {
          cout << "\nValor do primeiro número: " << me[i].VA << " - Valor do segundo número: " << me[i].VB << " - Valor da média geométrica: " << me[i].M;
     } 
     system("pause");
}

int menu()
{
	     int tecla;
         system("cls");
	     cout << "\n**Tela Inicial**\n";
         cout << "\n1 - Inserir valores";
         cout << "\n2 - Realizar Cálculos";
         cout << "\n3 - Exibir Resultados";
         cout << "\n4 - Sair \n" << endl;
         cin >> tecla;
		  
return tecla;}

int main()
{
         setlocale(LC_ALL,"Portuguese");
	     int tecla = 0, linha = -1;
	     double A1, B1;
	     while (tecla != 4)
	     {
         tecla = menu();
		  
           switch(tecla)
           {
              case 1:
                   {
                        A1 = lerA();
                        B1 = lerB();
                      
                        linha = linha + 1;
                        armazenar(linha, A1, B1);
                        break;   
                   }
                 
              case 2:
                   {
                       if (linha >= 0)
                       {
                          CalMed(linha);  
                          break;        
                       }                
                   }
            
              case 3:
                   {
                      if (linha >= 0)
                      {
                        Exibir(linha);
                        break;          
                      }        
                   }
           } } return 0; }

