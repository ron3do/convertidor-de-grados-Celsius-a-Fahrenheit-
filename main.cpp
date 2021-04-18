#include <iostream>

using namespace std;

int main() {
  
  float factor=1.8;
  int celsius;
  float fahrenheit;
  cout<< "Digite la temperatura en grados celsius\n";
  cin >> celsius;
  fahrenheit=(celsius*factor)+32;
  cout<< "la temperatura que digito, es en grados fahrenheit "<<fahrenheit;
}