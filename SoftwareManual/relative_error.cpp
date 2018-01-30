#include <iostream>
#include <cmath>
using namespace std;

float relativeError (float solution, float computedSolution);

int main() {
    float solution;
    float computedSolution;
    cin >> solution;
    cin >> computedSolution;
    cout << relativeError(solution,computedSolution);
    return 0;
}

float relativeError (float solution, float computedSolution) {
    float relativeError = abs((computedSolution - solution)/(solution));
    return relativeError;
}