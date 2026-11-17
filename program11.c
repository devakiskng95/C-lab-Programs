#include <stdio.h>
int main()
{
    int n, term, i;
    unsigned long factorial = 1;
    unsigned long long first = 0, second = 1, next;

    printf("Enter a non-neggative integer for factorial: ");
    scanf("%d", &n);
        
        if (n < 0 | n > 20)
        {
            printf("Enter a  value from 0 to 20.\n");
            return 0;
    }
            for (i = 1; i <= n; i++)
                factorial = factorial * i;
                
                printf("Factorial = %llu\n", factorial);

                printf("Enter number of Fibonacci term: ");
                scanf("%d", &term);
                
                if (term <= 0)
                {
                      printf("number of terms must be positive. \n");
                      return 0;
                }
                      printf("Fibonacci series: ");
                      
                      for (i = 1 ; i <= term; i++)
                      {
                          printf("%llu ", first);
                          next = first + second;
                          first = second;
                          second = next;
                          
                    }

                     printf("\n");
                     return 0;
                     
                }
                




                     
