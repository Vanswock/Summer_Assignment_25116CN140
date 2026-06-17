#include <iostream>
using namespace std;

int main()
{
    int n, m;

    cout << "Enter size of first array: ";
    cin >> n;
    int a[n];

    cout << "Enter elements of first array:\n";
    for (int i = 0; i < n; i++)
       {
         cin >> a[i];
       }
    cout << "Enter size of second array: ";
    cin >> m;
    int b[m];

    cout << "Enter elements of second array:\n";
    for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
    int inter[(n < m) ? n : m];
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        bool found = false;

        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                found = true;
                break;
            }
        }

        // Avoid duplicates in intersection array
        bool alreadyPresent = false;
        for (int t = 0; t < k; t++)
        {
            if (inter[t] == a[i])
            {
                alreadyPresent = true;
                break;
            }
        }

        if (found && !alreadyPresent)
        {
            inter[k++] = a[i];
        }
    }

    cout << "Intersection of arrays: ";
    for (int i = 0; i < k; i++)
    {
        cout << inter[i] << " ";
    }

    return 0;
}