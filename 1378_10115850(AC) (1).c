﻿#include <stdio.h>

int main()
{
    int i,j,k,n;
    int sum=0;


    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {


        for(j=1;j<=i;j++)
          {
              sum+=j;
          }

        }


    printf("%d",sum);




    }







