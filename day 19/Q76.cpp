//write a program to find daigonal sum.
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
     
    int SUMdiagonal=0;
    for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
             if (i==j)
             {
                    SUMdiagonal+=mat[i][j];
             }
             
            }
            
        }
    
        cout<<"The sum of diagonal is : "<<SUMdiagonal<<endl;

    return 0;
}