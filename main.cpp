#include <iostream>

struct Daiktas {
  int kodas;
};
struct Parduotuve{

};
struct Inventorius{
  Daiktas daiktas[10];
  int j = 0;

  void atvaizduoti(){
    for (int i = 0; i < sizeof(daiktas) / sizeof(daiktas[0]); i++) {
      std::cout << daiktas[i].kodas <<"\n";
    }
  }
  void pridetiDaikta(int code){
    daiktas[j].kodas = code;
    j++;
  }

};

int main() {

  Inventorius in;
  in.pridetiDaikta(92);
  in.pridetiDaikta(88);
  in.atvaizduoti();

  return 0;
}