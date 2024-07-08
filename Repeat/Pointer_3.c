    //POINTERS  addtion
    
    #include<stdio.h>
    int main()
    {
        int *a,*b,*c;
        int *p1 , *p2 ;
        printf("Enter a,b values : ");
        scanf("%d%d",&a,&b);
        p1 = &a;
        p2 = &b;
        c = *p1 + *p2 ; 
        printf("Sum of given two numbers is %d\n",c);
    }
    