////write a program to find colomn wise sum.
#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cout << "Enter the size of the matrice (m,n): ";
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
    
    int sum=0;
     for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum+=mat[j][i];
        }
        cout<<"the sum of "<<i+1<<" colomn is : "<<sum<<endl;
        sum=0;
    } 

    return 0;
}