#include <iostream>
#include <cfloat>
#include <vector>
using namespace std;

vector< vector<int> > createMatrix();

int main() {
    vector< vector<int> > myMatrix;
    float myOneNorm = oneNorm(myMatrix);
    float myInfinityNorm = infinityNorm(myMatrix);
    cout << "The 1-Norm is " << myOneNorm << endl;
    cout << "The Infinity Norm is " << myInfinityNorm << endl;
    return 0;
}

vector< vector<int> > createMatrix() {
    vector< vector<int> > myMatrix;
    
    return myMatrix;
}

float oneNorm(vector< vector<int> > matrix) {
    vector<float> columnSum;
    float temp;
    for(int j = 0; j < matrix[0].size(); j++) {
        for(int i = 0; i < matrix.size(); i++) {
        temp = temp + matrix[i][j];
        }
        columnSum[j] = temp;
    }
    float oneNorm = 0;
    for(int k = 0;k < columnSum.size(); k++) {
        if (columnSum[k] > oneNorm) {
            oneNorm = columnSum[k];
        }
    }
    return oneNorm;
}

float infinityNorm(vector< vector<int> > matrix) {
    vector<float> rowSum;
    float temp;
    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix[0].size(); j++) {
            temp = temp + matrix[i][j];
        }
        rowSum[i] = temp;
    }
    float infinityNorm = 0;
    for (int k = 0; k < rowSum.size(); k++) {
        if(rowSum[k] > infinityNorm) {
            infinityNorm = rowSum[k];
        }
    }
    return infinityNorm;
}