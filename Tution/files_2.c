//int fclose(FILE *   stream);
// c program for fopen() and fclose()
#include<stdio.h> 
int main()
 { 
  FILE *fp; 
  fp = fopen("fileName2.txt","r"); 
  fprintf(fp, "%s", "Sample Texts dhfjcxghd"); 
  fclose(fp); 
  return 0; 
} 