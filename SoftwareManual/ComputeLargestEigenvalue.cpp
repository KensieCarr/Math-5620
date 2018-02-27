#include<iostream>
#include<cmath>
#include<vector>

using namespace std;
float findEigenvalue(int order, int iter);

int main() {
    int iter, order;
    cout << "Enter the order of the matrix: ";
    cin >> order;
    cout << "Enter the number of iterations: ";
    cin >> iter;
    findEigenvalue(order, iter);
}

float findEigenvalue(int order, int iter){
    float matrix[10][10];
    float x[10], y[10], z[10];
    float eigenvalue;
    cout << "Enter the coefficients of the matrix(rows left to right)";
    for(int i=0; i < order; i++) {
        for (int j = 0; j < order; j++) {
            cin >> matrix[i][j];
        }
        x[i] = 1;
    }
    int k = 0;
    if ( k < iter ) {
        for(int i=0; i < order; i++){
            y[i]=0;
                for(int j=0; j < order; j++) {
                y[i]=y[i]+matrix[i][j]*x[j];
                }
            z[i]=fabs(y[i]);
         }
        float Z=z[0];
        int j=0;
        for(int i=1; i < order; i++) {
            if(z[i]>=Z) {
                Z=z[i];
                j=i;
            }
        }
        if(Z==y[j]) {
        eigenvalue = Z;
        } else {
        eigenvalue = -Z;
        }
        for(int i=0; i < order; i++) {
        x[i]=y[i]/eigenvalue;
        }
        k++;
    } else {
        cout << "The largest Eigenvalue is " << eigenvalue << endl;
    }
    return eigenvalue;
}