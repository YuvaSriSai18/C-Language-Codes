    //POINTERS 
    #include<stdio.h>
    int add(int * , int * );
    int main()
    {
        int a,b,c;
        printf("Enter a,b values : ");
        scanf("%d%d",&a,&b);
        c = add(&a,&b);
        printf("Sum of given two numbers is %d\n",c);
    }
    int add(int *a , int *b)
    {
        int c;
        c = *a + *b ; 
        return c; 
    }