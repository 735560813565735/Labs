//Jake Mayer cs135
#include <stdio.h>
#define N 15
int main (void) {


        int count[N];
        int even = 1, odd = 1;
        printf("Enter fifteen integers: \n");
        //prints to the screen enter integer 1-15:
        for (int i = 0; i < N; i++) {
                printf("Enter integer %d: ", i+1);
                scanf("%d", &count[i]);
        }
        //first loop for even
        printf("The even indexed integers are: ");
        for (int i = 0; i < N; i+=2) {
                even = count[i];
                printf("%d", even);
                if(i!=N-1){
                  printf(", ");
                }
        }
        //seperate lines
        printf("\n");
        //second loop for odd
        printf("The odd indexed integers are: ");
        for (int i = 1; i < N; i+=2) {
                odd = count[i];
                printf("%d", odd);
                if(i!=N-2){
                  printf(", ");
                }
        }
        return 0;
}
