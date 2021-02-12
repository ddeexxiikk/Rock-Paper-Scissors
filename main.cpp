#include <iostream>
#include <ctime>
#include <random>

using namespace std;

int losowanie(){
    // 1 - Papier
    // 2 - Kamien
    // 3 - Nozyce
    int tab[3]={1,2,3};
    srand(time(0));
    return tab[rand()%3];
}

int main()
{
    int wybor_gracza, i_g=0, i_k=0;
    cout << "Gramy do trzech zwyciestw." << endl;

    while(i_g<3 && i_k<3){
    LOOP:
    cout << "Podaj numer co wybierasz: 1 - Papier; 2 - Kamien; 3 - Nozyce? : ";
    cin >> wybor_gracza;
    if(wybor_gracza>3 || wybor_gracza<1){
        cout << "Zbyt duza liczba. Jeszcze raz!" << endl;
        goto LOOP;
    }
        if(wybor_gracza==1){
            if(losowanie()==1)
                cout << "Remis!" << endl;
            else if(losowanie()==2){
                cout << "Wygrales!" << endl;
                i_g++;
                cout << "Gracz - " << i_g << " : " << i_k << " - Komputer" << endl << endl;
            }else if(losowanie()==3){
                cout << "Przegrales!" << endl;
                i_k++;
                cout << "Gracz - " << i_g << " : " << i_k << " - Komputer" << endl << endl;
            }
        }else if(wybor_gracza==2){
            if(losowanie()==1){
                cout << "Przegrales!" << endl;
                i_k++;
                cout << "Gracz - " << i_g << " : " << i_k << " - Komputer" << endl << endl;
            }else if(losowanie()==2)
                cout << "Remis!" << endl;
            else if(losowanie()==3){
                cout << "Wygrales!" << endl;
                i_g++;
                cout << "Gracz - " << i_g << " : " << i_k << " - Komputer" << endl << endl;
            }
        }else{
            if(losowanie()==1){
                cout << "Wygrales!" << endl;
                i_g++;
                cout << "Gracz - " << i_g << " : " << i_k << " - Komputer" << endl << endl;
            }else if(losowanie()==2){
                cout << "Przegrales!" << endl;
                i_k++;
                cout << "Gracz - " << i_g << " : " << i_k << " - Komputer" << endl << endl;
            }else if(losowanie()==3)
                cout << "Remis!" << endl;
        }
    }
    if(i_g>i_k)
        cout << "Gratulacje. Wygrales z komputerem!" << endl;
    else
        cout << "Komputer cie pokonal!" << endl;
    return 0;
}
