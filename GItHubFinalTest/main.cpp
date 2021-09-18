#include <iostream>
#include <cmath>

using namespace std;

double FunkciaKalkulacka(double cislo1, double cislo2, char op);

int main()
{
char rozhodnutie = '+';
double cislo1,cislo2 = 0.0;
    
    cout<<"Zadajte dve hodnoty a operator prosim [ + - * /  Q = Ukoncenie] \n";
    cout<<"Zadajte prvu hodnotu : \n";
    cin>>cislo1;
    cout<<"Zadajte operand [ + - * / ] \n";
    cin>>rozhodnutie;
    cout<<"Zadajte druhu hodnotu : \n";
    cin>>cislo2;
    
    while(rozhodnutie != 'Q')
    {
        cout<<"Vysledok je : "<<FunkciaKalkulacka(cislo1, cislo2, rozhodnutie);
        
        cout<<"\n Zadajte dve hodnoty a operator nachadzajuci sa v zatvorke [ + - * /  Q = Ukoncenie]";
        cout<<"Zadajte prvu hodnotu prosim : \n";
        cin>>cislo1;
        cout<<"Zadajte operand nachadzajuci sa v zatvorke [ + - * / ] \n";
        cin>>rozhodnutie;
        cout<<"Zadajte druhu hodnotu prosim. : \n";
        cin>>cislo2;
    }
    system("PAUSE");
    
    return 0;
    
}

double FunkciaKalkulacka(double cislo1, double cislo2, char op)
{
    
    double vysledok = 0.0;
    
    if(op == '+')
{
    vysledok = cislo1 + cislo2;
}
    
    else if  (op == '-')
{
    vysledok = cislo1 - cislo2;
}

else if (op == '/')
{
    vysledok = cislo1 / cislo2;
}
else if (op == '*')
{
vysledok = cislo1 * cislo2;
}
else
{
cout<<" ! Zlyhanie, opakujte zadanie operatora ! ";
}
return vysledok;

}
