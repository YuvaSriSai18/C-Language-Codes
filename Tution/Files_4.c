 #include<stdio.h>
 
 int main()
 { 
   FILE *fp; 
   char ch; 
   fp = fopen("PPSUC_UNIT5(R20).docx","r"); //Statement 1 
   if(fp == NULL) 
  { 
    printf("\nCan't open file or file doesn't exist.");
    exit(0); 
  } 
  printf("\nData in file...\n"); 
   while((ch = fgetc(fp))!=EOF) //Statement 2
   printf("%c",ch);
   fclose(fp); 
} 
