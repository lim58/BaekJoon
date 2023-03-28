#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
int score;
  scanf("%d",&score);

  if(score > 89)
  {
    printf("A");
  }
  else if(score > 79)
  {
    printf("B");
  }
  else if(score > 69)
  {
    printf("C");
  }
  else if(score > 59)
  {
    printf("D");
  }
  else
  {
    printf("F");
  }
  
  
  
  return 0;
}