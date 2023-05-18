#include <iostream>
using namespace std;
int pi_sayisi = 3;

class Havuz {
public:
    double yaricap;

    double getAlan() {
        return pi_sayisi * yaricap * yaricap;
    }
};

int main() {
    Havuz havuz1, havuz2;
    double yaricap1, yaricap2;

    cout << "Birinci havuzun yaricapini gir: ";
    cin >> yaricap1;
    havuz1.yaricap = yaricap1;

    cout << "Ikinci havuzun yaricapini gir: ";
    cin >> yaricap2;
    havuz2.yaricap = yaricap2;

    double alan1 = havuz1.getAlan();
    double alan2 = havuz2.getAlan();

    cout << "Birinci havuzun alani: " << alan1 << endl;
    cout << "Ikinci havuzun alani: " << alan2 << endl;

    return 0;
}
