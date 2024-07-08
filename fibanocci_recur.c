#include<stdio.h>
#include<time.h>
int fib(int x)
{       
       
  if(x==1)
          return 0;
  else if(x==2)
          return 1;
  else
          return fib(x-1) + fib(x-2) ;
}
void main()
{
        int n,r;
	float tick1 = clock();
        printf("ENter n :");
        scanf("%d",&n);
        r=fib(n);
        printf("\n%dth term of fib is %d",n,r);
	float tick2 = clock();
	float elapse = tick2 - tick1;
	float time = elapse / CLOCKS_PER_SEC ;
	printf("\nExecution time = %lf ",time);
}
