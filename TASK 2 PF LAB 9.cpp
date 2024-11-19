#include<iostream>
using namespace std;

int main() {
         int S;
      
    cout << "Enter the size of the square matrix (S x S): ";
    cin >> S;

 int matrix[S][S]; 
	    int transposedMatrix[S][S];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < S; i++) {
        for (int j = 0; j < S; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < S; i++) {
        for (int j = 0; j < S; j++) 
		{
            transposedMatrix[i][j] = matrix[j][i];
        }
    }
     cout << "Original Matrix:" << endl;
    for (int i = 0; i < S; i++) {
        for (int j = 0; j < S; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Transposed Matrix:"<<"  " << endl;
    for (int i = 0; i < S; i++) {
        for (int j = 0; j < S; j++) {
            cout << transposedMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
