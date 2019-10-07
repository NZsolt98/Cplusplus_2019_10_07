#include <iostream>
#include <iomanip> //setw() f�ggv�ny

using namespace std;

int main()
{
    /*
        K�rj�nk be a konzolr�l egy sz�mot(felteszzuk hogy ez 1 �s 9 k�z�tt van).
        Gener�ljuk ki az ehhez a sz�mhoz tartoz� szorz�t�bl�t!
    */
    cout << "Kerek egy szamot 1 es 9 kozott: ";
    unsigned short szam;
    cin>>szam; //TODO: c�lszer� az adatellen�rz�st megval�s�tani

    //szorz�t�bla el��ll�t�sa
    unsigned short szorzotabla[szam][szam];
    for(int i=0;i<szam;i++) //az els� dimenzi� feldolgoz�sa
        for(int j=0;j<szam;j++) // a m�sodik dimenzi� feldolgoz�sa
            szorzotabla[i][j]=(i+1) * (j+1);

    //mi legyen a setw param�tere?
    //A lehet� legnagyobb szorzat sz�mjegyei+1
    unsigned short maxSzorzat=szam*szam;
    unsigned short maxSzamjegyekDb=0;
    do
    {
        maxSzorzat /=10; // egy helyi�rt�ket lecsapok a v�g�r�l
        maxSzamjegyekDb++;
    }
    while(maxSzorzat);
    maxSzamjegyekDb++; // mindig +1 hely kell hogy legyen egy sz�k�z

    cout<<setw(maxSzamjegyekDb)<<"";
    for(int i=1;i<=szam;i++){

        //setw: a k�zvetlen�l m�g��rt sz�veg megjelen�t�s�nek hossz�t hat�rozza meg
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
