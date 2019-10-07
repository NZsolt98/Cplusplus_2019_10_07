#include <iostream>
#include <iomanip> //setw() függvény

using namespace std;

int main()
{
    /*
        Kérjünk be a konzolról egy számot(felteszzuk hogy ez 1 és 9 között van).
        Generáljuk ki az ehhez a számhoz tartozó szorzótáblát!
    */
    cout << "Kerek egy szamot 1 es 9 kozott: ";
    unsigned short szam;
    cin>>szam; //TODO: célszerû az adatellenõrzést megvalósítani

    //szorzótábla elõállítása
    unsigned short szorzotabla[szam][szam];
    for(int i=0;i<szam;i++) //az elsõ dimenzió feldolgozása
        for(int j=0;j<szam;j++) // a második dimenzió feldolgozása
            szorzotabla[i][j]=(i+1) * (j+1);

    //mi legyen a setw paramétere?
    //A lehetõ legnagyobb szorzat számjegyei+1
    unsigned short maxSzorzat=szam*szam;
    unsigned short maxSzamjegyekDb=0;
    do
    {
        maxSzorzat /=10; // egy helyiértéket lecsapok a végérõl
        maxSzamjegyekDb++;
    }
    while(maxSzorzat);
    maxSzamjegyekDb++; // mindig +1 hely kell hogy legyen egy szóköz

    cout<<setw(maxSzamjegyekDb)<<"";
    for(int i=1;i<=szam;i++){

        //setw: a közvetlenül mögéírt szöveg megjelenítésének hosszát határozza meg
        cout<<setw(3)<<i;
    }
    cout<<endl;
    for(int i=0;i<szam;i++){
        cout<<setw(3)<<(i+1);
        for(int j=0;j<szam;j++){
            cout<<setw(maxSzamjegyekDb+1)<<szorzotabla[i][j];
        }
        cout<<endl;
    }

    return 0;
}
