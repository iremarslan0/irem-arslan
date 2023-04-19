#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cout << "birinci sayi ";
    cin >> x;
    cout << "ikinci sayi ";
    cin >> y;

    z = !(x ^ y);
    cout << "sonuc: " << z << endl;
}
