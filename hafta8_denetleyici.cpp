#include <iostream>

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
      std::cout << "Bahce Alani: " << alan << " birim kare" << std::endl;
      std::cout << "bahce Cevresi: " << cevre << " birim" << std::endl;
    }

  private:
    float alan;
    float cevre;
};

int main() {
  Bahce bahce1, bahce2;

  std::cout << "1. Bahçe Kenar Uzunluğunu Girin: ";
  std::cin >> bahce1.kenar;

  std::cout << "2. Bahçe Kenar Uzunluğunu Girin: ";
  std::cin >> bahce2.kenar;

  bahce1.alanHesapla();
  bahce1.cevreHesapla();
  bahce1.bilgileriGoster();

  bahce2.alanHesapla();
  bahce2.cevreHesapla();
  bahce2.bilgileriGoster();

  return 0;
}
