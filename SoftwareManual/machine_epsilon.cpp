#include <iostream>
#include <cfloat>
using namespace std;

void machineEpsilon(float EPS);

int main() {
  machineEpsilon(0.5);
  return 0;
}

void machineEpsilon(float EPS) {
  float prev_epsilon;
  while ((1 + EPS) != 1) {
    prev_epsilon = EPS;
    EPS /= 2;
  }
  cout << "Machine Epsilon is: " << prev_epsilon << endl;
}