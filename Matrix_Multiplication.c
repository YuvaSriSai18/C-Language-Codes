#include<stdio.h>
#include<conio.h>
int main()
{
 int n,m,p,q,a[10][10],b[10][10],i,j,k,P[10][10];
 //clrscr();

 printf("\nEnter n,m");
 scanf("%d%d",&n,&m);
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   printf("\nEnter a[%d][%d] element",i,j);
   scanf("%d",&a[i][j]);
  }
 }

 printf("\nEnterp,q values");
 scanf("%d%d",&p,&q);
 for(i=0;i<p;i++)
 {
  for(j=0;j<q;j++)
   {
    printf("Enter b[%d][%d] element",i,j);
    scanf("%d",&b[i][j]);
   }
 }
  if(m==p)
   {
     for(i=0;i<p;i++)
     {
      for(j=0;j<q;j++)
      {
       P[i][j]=0;
       for(k=0;k<m;k++)
       {
	P[i][j] = P[i][j] + a[i][k]*b[k][j];
       }
      }
     }
    }
    else
    {
     printf("\nMultiplication not possible");
    }

  for(i=0;i<n;i++)
  {
   printf("\n ");
   for(j=0;j<q;j++)
   {
    printf("%d\t",P[i][j]);
   }
  }



 return 0;
 }