#include <iostream>
using namespace std;

class Bahce {
  public:
    float kenar;

    void alanHesapla() {
      alan = kenar * kenar;
    }

    void cevreHesapla() {
      cevre = 4 * kenar;
    }

    void bilgileriGoster() {
      cout << "Bahce Alani: " << alan << " birim kare" << endl;
      cout << "bahce Cevresi: " << cevre << " birim" << endl;
    }

  private:
    float alan;
    float cevre;
};

int main() {
  Bahce bahce1, bahce2;

  cout << "1. Bahçe Kenar Uzunluğunu Girin: ";
  cin >> bahce1.kenar;

  cout << "2. Bahçe Kenar Uzunluğunu Girin: ";
  cin >> bahce2.kenar;

  bahce1.alanHesapla();
  bahce1.cevreHesapla();
  bahce1.bilgileriGoster();

  bahce2.alanHesapla();
  bahce2.cevreHesapla();
  bahce2.bilgileriGoster();

  return 0;
}
