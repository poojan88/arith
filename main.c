#include<stdio.h>
#include"arith.h"

int main(int argc, char const *argc[])
{
   int result;
   result= add(10,20);
   printf("Addition: %d\n", result);
   return 0;
}