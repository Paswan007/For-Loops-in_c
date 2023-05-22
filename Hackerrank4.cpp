#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b,i;
    scanf("%d\n%d", &a, &b);
      char* alpha[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    scanf("%d\n%d", &a, &b);
    
    for( i = a; i <= b; i++) {
        if(i <= 9) {
            printf("%s",alpha[i-1]);
        }
        else if(i > 9 && i%2!=0) {
            printf("odd");
        }
        else {
            printf("even");
        }
        printf("\n");
    }

    return 0;
}


