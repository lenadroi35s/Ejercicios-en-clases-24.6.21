#include <iostream>
using namespace  std;

int main() {
    //1.- imprimir 5 veces las palabra pucese
    for(int i=0; i<5; i++){
        cout<<"Pucese"<<endl<<(i + 1);

    }
    cout<<endl;
    //2.- imprimir la tabla de numero 5
    cout<<"tabla de 5"<<endl;
    for(int x=1; x<=10; x++)
        {
        cout<<endl<<"5 x " <<x<<" = "<<(5*x);
    }
    cout<<endl;
    //3.- Ingrese por teclado un numero entero
    //que represente desde 1 al 12
    int y,num;
    cout<<"Ingrese un numero entero"<<endl;
    cin>> num;
    for(y=1; y<=12; y++)
        {
            cout<<endl <<num<< "x " <<y<<" = "<<(num*y);
        }
    cout<<""<<endl;
    //4.- Calcular la sumatoria de los numeros comprendidos entre 500 y 800
    int acum,yi;
    acum = 0;
    for(yi=500; yi<=800; yi++){
        acum=acum + yi;
    }
    cout<<"la sumatoria es: "<<acum<<endl;
    //5.- ingrese 2 enteros que presenten el inicio y fin
    //de una serie . Se pide realizar la sumatoria multiplos de 5
    //que se encuentran en esta serie
    int xx,ini,fin,acmf;
    acmf = 0;
    cout<<"Ingrese el princio "<<endl;
    cin>> ini;
    cout<<"Ingrese un final"<<endl;
    cin>> fin;
    for (xx= ini; xx<=fin; xx++){

        if(xx%5==0)
        {
            acmf=acmf+xx;
        }
    }
    cout<<"La sumatoria es :" <<acmf <<endl;
    //6. for anidados(un for dentro de otro for)
    //imprimir un ractangulo de "*"
    int ar,rr;
    cout<< "Impresion del triangulo"<<endl;
    for(ar=1; ar<=5; ar++)
    {
        for(rr=1; rr<=10; rr++)
        {
            cout<<"*";
        }
    }
    cout<<endl;
    //7.- imprimir las 10 primeras tablas
    cout<<"las 10 primeras tablas"<<endl;
    for(int qw=1; qw<=10; qw++)
    {
        cout<<endl<<"tabla del "<<qw;
        for(int qq=1; qq<=10; qq++)
        {
            cout<<endl<< qw << " x "<< qq << " = "<<(qw*qq);
        }
        cout<<endl;
    }
    return 0;
    }
