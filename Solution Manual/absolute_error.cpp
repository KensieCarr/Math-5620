#include <iostream>
#include <cmath>
using namespace std;

int absoluteError (int solution, int computedSolution);

int main() {
    int solution;
    int computedSolution;
    cin >> solution;
    cin >> computedSolution;
    cout << absoluteError(solution,computedSolution);
    return 0;
}

int absoluteError (int solution, int computedSolution) { 
    int absoluteError = abs(computedSolution - solution);
    return absoluteError;
}