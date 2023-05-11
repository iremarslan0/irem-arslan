#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int sayi;
    int tahmin = -1;
    int tahmin_sayisi = 0;
    int tahmin_limiti = 3;
    bool outOfGuesses = false;
    srand(time(NULL));

    sayi = rand() % 9 + 1;
    cout << sayi;
    while(tahmin != sayi && tahmin_sayisi < tahmin_limiti){
        cout << "tahmini gir: ";
        cin >> tahmin;
        tahmin_sayisi++;
    }
    if(tahmin == sayi){
         cout << "Tebrikler, " << tahmin_sayisi <<". denemede kazandin" << endl;
    } else {
         cout << "3 hakkinda da bilemedin" << endl;
    }
    return 0;
}
