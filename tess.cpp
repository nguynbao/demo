#include <stdio.h>
int laSoNguyenTo2(int f)
{
    if (f < 2)
    {
        return 0;
    }

    if (f == 2)
    {
        return 1;
    }

    if (f % 2 == 0)
    {
        return 0;
    }
    for (int i = 3; i < (f - 1); i += 2)
    {
        if (f % i == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    return 1;
}
void tach_snt(int a[], int na, int b[], int &nb, int c[], int &nc)
{
    int f;
    nb = 0;
    nc = 0;
    //  puts("\nnhap so can tach");
    // scanf("\n%d\n", &na);
    for (int i = 0; i < na; i++)
    {
        if (laSoNguyenTo2(a[i]) == 1)
        {
            b[nb] = a[i];
            printf("so nguyen to la%d\n", b[nb]);
            nb++;
        }
    }
    else
    {
        c[nc] = a[i];
        printf("so nguyen to la %d", c[nc]);
        nc++;
    }
}
void xuat_mang(int a[], int n)
{
    int i = 0;
    for (; i < n; i++)
        printf("%5d", a[i]);
}
void tim_kiem(int a[], int n)
{
    int i = 0;
    int t;
    puts("\nnhap vi tri can tim");
    scanf("%d", &t);
    for (; i <= t; i++)
    {
        if (t == a[i])
        {
            printf("%d", a[t]);
        }
    }
}

int main()
{
    int n, a[100];
    int b[100], c[100];
    int na;
    int nb = 0;
    int nc = 0;
    puts("nhap so phan tu n");
    scanf("%d", &n);
    puts("nhap cac gia tri mang");
    int i = 0;
    for (; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    xuat_mang(a, n);
    int f;
    puts("\nnhap so f");
    scanf("%d", &f);
    printf("%d", laSoNguyenTo2(f));
    tach_snt(a, na, b, nb, c, nc);
}
