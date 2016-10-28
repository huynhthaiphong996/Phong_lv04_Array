#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i,n,mang[100],min,max;
    printf("Nhap vao so phan tu:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nNhap phan tu thu %d:",i+1);
        scanf("%d",&mang[i]);
    }
    max = mang[0];
     for(i=0;i<n;i++)
     {
         if(mang[i]>max) max = mang[i];
     }
    min = mang[0];
    for(i=0;i<n;i++)
      {
          if(mang[i] < min) min = mang[i];
      }

      printf("\nMax = %d\nMin = %d",max,min);
}
