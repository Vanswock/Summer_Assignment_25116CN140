#include <iostream>

int main()
{
    int n, m;

    std::cout << "Enter size of first array: ";
    std::cin >> n;
    int a[n];

    std::cout << "Enter elements of first array:\n";
    for (int i = 0; i < n; i++)
       std:: cin >> a[i];

   std:: cout << "Enter size of second array: ";
   std:: cin >> m;
    int b[m];

    std::cout << "Enter elements of second array:\n";
    for (int i = 0; i < m; i++)
       std:: cin >> b[i];

    int uni[n + m];
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        bool found = false;

        for (int j = 0; j < k; j++)
        {
            if (uni[j] == a[i])
            {
                found = true;
                break;
            }
        }

        if (!found)
            uni[k++] = a[i];
    }

    for (int i = 0; i < m; i++)
    {
        bool found = false;

        for (int j = 0; j < k; j++)
        {
            if (uni[j] == b[i])
            {
                found = true;
                break;
            }
        }

        if (!found)
            uni[k++] = b[i];
    }

    std::cout << "Union of arrays: ";
    for (int i = 0; i < k; i++)
        std::cout << uni[i] << " ";

    return 0;
}