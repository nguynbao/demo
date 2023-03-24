#include <stdio.h>
void sap_xep(int a[], int n)
{
    int tg;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
            printf("%d", a[i]);
            printf("\t%d", a[j]);
            printf("\n");
        }
    }

    printf("\nMang da sap xep la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%5d", a[i]);
    }
}

int main()
{
    int a[100];
    int n;
    printf("\nNhap so luong phan tu n = ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\nNhap a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    sap_xep(a, n);
}