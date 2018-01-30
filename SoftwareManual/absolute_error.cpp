#include <iostream>
#include <cmath>
using namespace std;

float absoluteError (float solution, float computedSolution);

int main() {
    float solution;
    float computedSolution;
    cin >> solution;
    cin >> computedSolution;
    cout << absoluteError(solution,computedSolution);
    return 0;
}

float absoluteError (float solution, float computedSolution) { 
    float absoluteError = abs(computedSolution - solution);
    return absoluteError;
}