//To check if a given Matrix is a Sparse Matrix or not
#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter No. of Rows of Matrix :";
    cin>>r;
    cout<<"Enter No. of Columns of Matrix :";
    cin>>c;

    cout<<endl;

    int a[r][c];
    int zeroes = 0 ;
    int nonzero = 0 ;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 0)
            {
                zeroes++;
            }
        }
    }

    if (zeroes > (r * c) / 2)
    {
        cout << "The matrix is a sparse matrix";
    }
    else
    {
        cout << "The matrix is not a sparse matrix";
    }

    return 0;
}
