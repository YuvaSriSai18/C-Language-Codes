//wap c function to pass UNION refernece to a function

#include<stdio.h>
union student
{
	int id ;
	char name[20] ;
	float marks ;
}s1;
void display(union student *);
int main()
{
	
	printf("Enter student 1 details : \n");
	
	printf("Enter ID :	");
	scanf("%d",&s1.id);
	//printf("Enter name :	");
	//scanf("%s",s1.name);
	//printf("Enter marks :	");
	//scanf("%f",&s1.marks);
	
	display(&s1);
}

void display(union student *s1)
{
	printf("ID: %d\n",s1->id);
}
