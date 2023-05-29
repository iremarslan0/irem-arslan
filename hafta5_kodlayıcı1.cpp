#include <iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int toplam=0;
    for(int i=0;i<10;i++)
    {
        int sayi;
        cin >> sayi;
        toplam += sayi;

    }
     cout << "toplam:" << toplam;
}
