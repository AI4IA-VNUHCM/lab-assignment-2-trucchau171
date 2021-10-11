/*
3. Write a function to represent a given integer as product of prime numbers
Ex:
______________________________________
| Input: 24                          |
| Output: 2 * 2 * 2 * 3              |
|____________________________________|
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int n)
{
	if (n < 2)
	{
		return 0;
	}
	else if (n == 2)
	{
		return 1;
	}
	else 
	{
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)
			{
				return 0;
			}
			
		}
	}
	return 1;
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	//Your codes here
	int i = 1;
	while (testcase > 1)
	{
		do
		{
			i++;
		} while (!isPrime(i));
		
		while (testcase % i == 0)
		{
			testcase /= i;
			if (testcase > 1)
			{
				printf("%d * ", i);
			}
			else printf("%d", i);
		}
		
	}
	
	
	
	return 0;
}
