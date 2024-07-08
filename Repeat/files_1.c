//int fclose(FILE *   stream);
// c program for fopen() and fclose()
#include<stdio.h> 
int main()
 { 
  FILE *fp; 
  fp = fopen("fileName.txt","w"); 
  fprintf(fp, "%s", "Sample Texts"); 
  fclose(fp); 
  return 0; 
} 