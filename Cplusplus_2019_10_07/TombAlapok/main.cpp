#include <iostream>

using namespace std;

int main()
{
    //Tomb deklar�ci� felsorol�ssal
    int tomb[]={1,2,3,4,5};
    cout<<"Tomb merete: "<<sizeof(tomb)<<endl;
    cout<<"In merete: "<<sizeof(int)<<endl;
    cout<<"Tomb elemszam: "<<sizeof(tomb)/sizeof(int)<<endl;
    int tombelemekDb=sizeof(tomb)/sizeof(int);

    int index=0; //tomb indexel�se 0-t�l m�ret 1-ig tart

    while(index<tombelemekDb){
        cout<<"A(z)"<<index<<".edik elem erteke: "<<tomb[index]<<endl;
        index++;
    }

    //tomb megad�sa m�ret seg�ts�g�vel
    int meret2=10;
    int tomb2 [meret2];
    for(int i=0;i<meret2;i++){
        tomb2[i]=0;//c++ nem incializ�l automtikusan azt nek�nk kell megtenni
        cout<<"A(z) "<<i<<"-edik ertek: "<<tomb2[i]<<endl;
    }

    //tomb megad�sa m�ret + kezd��rt�k seg�ts�g�vel
    int meret3=20;
    int tomb3[meret3]={0};
    for(int elem : tomb3){
        cout<<elem<<", ";

    }
    cout<<endl;

    return 0;
}
