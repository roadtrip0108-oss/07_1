#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i;
  
  for(i=0; i<5; i++)
  {
           static int temp=1;
           printf("temp=%d\n", temp);
           temp++;
  }
  
  system("PAUSE");	
  return 0;
}
