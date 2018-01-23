#include <iostream>
#include <cmath>
using namespace std;

int relativeError (int solution, int computedSolution);

int main() {
    int solution;
    int computedSolution;
    cin >> solution;
    cin >> computedSolution;
    cout << relativeError(solution,computedSolution);
    return 0;
}

int relativeError (int solution, int computedSolution) {
    int relativeError = abs((computedSolution - solution)/(solution));
    return relativeError;
}