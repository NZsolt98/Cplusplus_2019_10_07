#include <iostream>

using namespace std;

int main()
{
    //Tomb deklaráció felsorolással
    int tomb[]={1,2,3,4,5};
    cout<<"Tomb merete: "<<sizeof(tomb)<<endl;
    cout<<"In merete: "<<sizeof(int)<<endl;
    cout<<"Tomb elemszam: "<<sizeof(tomb)/sizeof(int)<<endl;
    int tombelemekDb=sizeof(tomb)/sizeof(int);

    int index=0; //tomb indexelése 0-tól méret 1-ig tart

    while(index<tombelemekDb){
        cout<<"A(z)"<<index<<".edik elem erteke: "<<tomb[index]<<endl;
        index++;
    }

    //tomb megadása méret segítségével
    int meret2=10;
    int tomb2 [meret2];
    for(int i=0;i<meret2;i++){
        tomb2[i]=0;//c++ nem incializál automtikusan azt nekünk kell megtenni
        cout<<"A(z) "<<i<<"-edik ertek: "<<tomb2[i]<<endl;
    }

    //tomb megadása méret + kezdõérték segítségével
    int meret3=20;
    int tomb3[meret3]={0};
    for(int elem : tomb3){
        cout<<elem<<", ";

    }
    cout<<endl;

    return 0;
}
