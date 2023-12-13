#include <stdio.h>
void main ()
{
    int i,j,k,l,m,n,o=0 ;
    int a[3][3];
    int b[3][3];
    int c[3][3];
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          a[i][j]=i+1+j;
          b[i][j]=i+j; 
          printf("%d ",a[i][j]); 
        }
    printf("\n");
    }
    for (k=0 ; k<3 ; k++)
    {
      for (l=0 ; l<3 ; l++) 
      {
        printf("%d ",b[k][l]);
      } 
     printf("\n"); 
    }
    for ( m =0 ;m<3 ; m++)
    {
    for (n=0 ; n<3 ; n++)
    {
      for (o=0 ; o<3 ; o++) 
      {c[m][n]=0;
        c[m][n]=a[m][o]*b[o][n]+c[m][n];
      }
        printf("%d ",c[m][n]);
      } 
     printf("\n"); 
    }
    }