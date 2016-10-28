#include <stdio.h>
#include <stdlib.h>

void main()
{
    float mang[30][30],max;
    int n,m,i,j;
    printf("Nhap hang cua ma tran:");
    scanf("%d",&n);
    printf("\nNhap cot cua ma tran:");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\nNhap gia tri phan tu A[%d][%d]:",i,j);
            scanf("%f",&mang[i][j]);
        }
    }
    max = mang[0][0];
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(mang[i][j]>max) max = mang[i][j];
        }
    }
    printf("\nMax = %.3f",max);
}
