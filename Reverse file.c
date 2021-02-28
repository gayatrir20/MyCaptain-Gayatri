#include<stdio.h>
long countchar(FILE *f);
void main(int argc, char*arg[])
{
  int i;
  char c;
  long count;
  FILE *fp1,*fp2;
  if(fp1=fopen(arg[1],"rev"))
  {
    fp2=fopen(arg[2],"ver"));
    printf("The FILE is opened");
    count=countchar(fp1);
    printf("Number of elements is %d",ftell(fp1));
    while(count)
    {
      c=fgetc(fp1);
      fputc(ch,fp2);
      count--;
    }
    printf("Reverse order");
  }
  else
  {
    printf("Error occured");
  }
  fclose(fp1);
  fclose(fp2);
}
long countchar(FILE *f)
{
  fseek(fp1,-1l,2);
  long last_position=ftell(f);
  return last_pos;
}
    
  
