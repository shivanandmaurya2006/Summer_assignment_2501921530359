// write a program to check symetric matrix.
#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cout << "Enter the size of the matrice 1 (m,n): ";
    cin >> m >> n;

    int mat[m][n];

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }

    if (m!=n)
    {
        cout<<"the matrice is not symetric.";
    }
    
    else
    {
        int count = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat[i][j] == mat[j][i])
                {
                    count++;
                }
            }
        }
        if (count == (m * n))
        {
            cout << "the matrice is symetric.";
        }
        else
        {
            cout << "The matrice is not symetric.";
        }
    }
    return 0;
}