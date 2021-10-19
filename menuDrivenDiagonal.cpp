#include <iostream>
using namespace std;

void create(int a[], int n)
{

    for (int i = 1; i <= n; i++)
    {
        cout << "Enter the value of [" << i << "][" << i << "] ";
        cin >> a[i];
    }
    cout << endl;
}

void setdata(int a[], int i, int j, int k)
{
    if (i == j)
    {
        a[i] = k;
    }
    cout << endl;
}
int getdata(int a[], int i, int j)
{
    if (i = j)
        return a[i];
    else
        return 0;
}
void display(int a[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                cout << a[i] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
    cout << endl;
}
int main()
{
    int *a, n, ch, x, i, j;
    cout << "Enter the dimension of matrix" << endl;
    cin >> n;
    a = new int[n];
    do
    {
        cout << endl;
        cout << "Choice 1: Create" << endl;
        cout << "Choice 2: Get" << endl;
        cout << "Choice 3: Set" << endl;
        cout << "Choice 4: Display" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            create(a, n);
            // cout<<endl;
            break;
        case 2:
            cout << "Enter indices" << endl;
            cin >> i >> j;
            cout << getdata(a, i, j) << endl;
            // cout</<endl;
            break;
        case 3:
            cout << "Enter indices" << endl;
            cin >> i >> j;
            cout << "Enter the value " << endl;
            cin >> x;
            setdata(a, i, j, x);
            // cout<<endl;
            break;
        case 4:
            display(a, n);
            // cout<<endl;
            break;
        default:
            break;
        }
    } while (ch > 0 && ch < 5);
}
