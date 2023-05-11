#include <iostream>
using namespace std;
int main()
{
    int notlar[2][6] = {{85, 90, 72, 84, 80, 93},
                    {65, 98, 84, 72, 87, 62}};
    int top1 = 0, top2 = 0, n = 6;
    float ort1, ort2;
    cout << "kimya notlari: " << endl;
    for (int i=0; i < n; i++) {
        cout << notlar[0][i] << " ";
        top1 += notlar[0][i];
    }
    cout << "\nbiyoloji notlari: " << endl;
    for (int i=0; i < n; i++) {
        cout << notlar[1][i] << " ";
        top2 += notlar[1][i];
    }
    ort1 = (float)top1 / n;
    cout << "\nkimya ortalamasi: " << ort1 << endl;
    ort2 = (float)top2 / n;
    cout << "\nbiyoloji ortalamasi: " << ort2 << endl;
    return 0;
}
