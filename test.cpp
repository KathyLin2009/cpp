#include <iostream>
#include <string>
using namespace std;

int main() {
  string cars[5] = {"Model S", "MODEL 3", "Model X", "CYBERTRUCK"};
  for(int i = 0; i < 5; i++) {
    cout << i << ": " << cars[i] << "\n";
  }
  
  return 0;
}
