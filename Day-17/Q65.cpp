#include <iostream>

void arrayMaker(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
}

void arraymerge(int a[], int b[], int n, int k)
{
    int s = n + k;
    int c[s];
   for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i < k; i++)
    {
        c[n + i] = b[i];
    }

    std::cout << "Merged array: ";
    for (int i = 0; i < s; i++)
    {
        std::cout << c[i] << " ";
    }
}

int main()
{
    int n, k;

    std::cout << "Enter number of elements in first array: ";
    std::cin >> n;
    int a[n];

    std::cout << "Enter first array elements:\n";
    arrayMaker(a, n);

    std::cout << "Enter number of elements in second array: ";
    std::cin >> k;
    int b[k];

    std::cout << "Enter second array elements:\n";
    arrayMaker(b, k);

    arraymerge(a, b, n, k);

    return 0;
}