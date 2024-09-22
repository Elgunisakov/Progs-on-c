#include "first_or_second.h"
#include <math.h>

int first_or_second(FILE *f)
{
	int k1 = 0, k2 = 0;
	double first, second, cur;
 	if (fscanf(f, "%lf", &first) != 1)
 	{
  		printf ("File is empty");
  		return 0;
 	}
 	else
 	{
		if (fscanf(f, "%lf", &second) != 1)
  		{
   			printf ("V file nedostatochno dannih");
   			return 0;
  		}
  		else
  		{
   			if (fabs(first - second) < eps)
   			{
    				printf ("First = Second");
    				return 0;
   			}
   			else
   			{
    				while (fscanf(f, "%lf", &cur) == 1)
    				{
     					if (fabs(first - cur) < eps) k1 += 1;
     					if (fabs(second - cur) < eps) k2 += 1;
    				}
    				if (k1 == k2)
   	 			{
     					printf ("Pervih stolko ge skolko vtorih");
     					return 0;
    				}
    				if (k1 > k2)
    				{
     					printf ("First > Second");
     					return 0;
    				}
    				if (k1 < k2)
    				{
    	 				printf ("First < Second");
     					return 0;
    				}
   			}
  		}
 	}
	return 0;
}
