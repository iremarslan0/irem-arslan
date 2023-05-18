#include <iostream>
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

    std::cout << "Birinci havuzun yaricapini gir: ";
    std::cin >> yaricap1;
    havuz1.yaricap = yaricap1;

    std::cout << "Ikinci havuzun yaricapini gir: ";
    std::cin >> yaricap2;
    havuz2.yaricap = yaricap2;

    double alan1 = havuz1.getAlan();
    double alan2 = havuz2.getAlan();

    std::cout << "Birinci havuzun alani: " << alan1 << std::endl;
    std::cout << "Ikinci havuzun alani: " << alan2 << std::endl;

    return 0;
}
