﻿#include <stdio.h>

int n;



char grade(int k)
{
  if(k >= 90) 
  {return 'A';
  
  }
  
  else if(k>=80&&k<90)
  {
      return 'B';
  }
  
    else if(k>=70&&k<80)
  {
      return 'C';
  }
  
  
    else if(k>=60&&k<70)
  {
      return 'D';
  }
  
    else if(k<60)
  {
      return 'F';
  }
  
  
 
}
int main()
{
  scanf("%d", &n);
  printf("%c", grade(n));
  return 0;
}
