#include <stdio.h>
#include<time.h>
int main()
{
   int n, f = 0,s = 1, next, i;
   float tick1 = clock();
   printf("Enter n: ");
   scanf("%d",&n);

   if (n == 1)
   {
      printf("The %dst term of the Fibonacci series is %d.", n, f);
   }
   else if (n == 2)
   {
      printf("The %dnd term of the Fibonacci series is %d.", n, s);
   }
   else
   {
      for (i = 3; i <= n; i++)
      {
         next = f + s;
         f = s;
         s = next;
      }
      printf("The %dth term of the Fibonacci series is %d.", n, next);
   }

   
   float tick2 = clock();
   float time = (tick2 - tick1 ) / CLOCKS_PER_SEC ;
   printf("\nExecution time = %lf " ,time);
   return 0;
}

