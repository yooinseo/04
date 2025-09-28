#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int sec;
    
    printf("Input seconds : ");
    scanf("%i", &sec);
    
    printf("The time is %i:%i:%i\n", sec/3600, (sec%3600)/60, sec%60);
  system("PAUSE");	
  return 0;
}
