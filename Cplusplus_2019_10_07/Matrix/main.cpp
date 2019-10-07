#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    /*
        Kérjünk be egy n es egy m dimenziót
        Töltsunk fel ket darab n*m-es mátrixot adatbekéréssel
        Készítsünk egy új mátrixot, amely az elõzõ kettõ mátrix összegébõl áll elo
        írjuk ki a mátrixot a képernyõre
    */
    unsigned short n,m;
    cout<<"Kerek egy n erteket: ";
    cin>>n;

    cout<<"Kerek egy m erteket: ";
    cin>>m;

    int m1[n][m];
    int m2[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<"Kerem m1 "<<i<<"es"<<j<<"elemet: ";
            cin>>m1[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<"Kerem m2 "<< i << "es" << j <<"elemet: ";
            cin>>m2[i][j];
        }
    }

    int osszegM[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            osszegM[i][j]=m1[i][j]+m2[i][j];
        }
    }
    cout<<"Eredmeny matrix: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<setw(5)<<osszegM[i][j];
        }
        cout<<endl;
    }


    return 0;
}
