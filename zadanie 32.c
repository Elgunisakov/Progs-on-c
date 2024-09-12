#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
 int k;
 FILE *f = fopen("zadanie 32.txt", "r");
 double prev, cur, next;
 k = 0;

 if (fscanf(f, "%lf", &prev) != 1)
 {
  printf("File is empty");
  return 0;
 }
 fscanf(f, "%lf", &cur);
 //fscanf(f, "%lf", &next);
 while (fscanf(f, "%lf", &next) == 1)
 {
  if (2*cur > prev + next)
  {
   prev = cur;
   cur = next;
  }
  else
  {
   if (2*cur < prev + next)
   {
    prev = cur;
    cur = next;
   }
   else
   {
    k += 1;
    prev = cur;
    cur = next;
   }
  }
  
 }
 printf("%d", k);
 return 0;
}
