//Write a program to multiply matrices.
#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cout << "Enter the size of the matrice 1 (m,n): ";
    cin >> m>>n;

    int mat1[m][n];

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat1[i][j];
        }
    }

    int p, q;
    cout << "Enter the size of the matrice 2 (p,q): ";
    cin >> p>>q;

    int mat2[p][q];

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin >> mat2[i][j];
        }
    }
    if (n!=p)
    {
        cout<<"Matrix multiplication is not possible.";
    }
    else{
        int matMULTI[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                matMULTI[i][j]=0;
            }
            
        }
        
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    matMULTI[i][j]+=mat1[i][k]*mat2[k][j];
                }
                
            }
            
        }
         for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout<<matMULTI[i][j]<<"\t";
            }
            cout<<endl;
        }
    
    }
    
    
    return 0;
}