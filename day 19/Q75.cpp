//Write a program to find transpose of a matrix.
#include <iostream>

using namespace std;

int main() {
    int m, n;
    cout << "Enter the size of the matrice 1 (m,n): ";
    cin >> m>>n;

    int mat[m][n];

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
     
    int matTrans[n][m];
    for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                matTrans[i][j]=mat[j][i];
                cout<<matTrans[i][j]<<"\t";
            }
            cout<<endl;
        }
    
    return 0;
}