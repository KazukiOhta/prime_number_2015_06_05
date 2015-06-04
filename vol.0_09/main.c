#include <stdio.h>
#include <math.h>
int number_table[1000000];
int data[30];
int i = 0;
int j = 0;
int n = 0;
int max = 0;
int ans = 0;

int main(int argc, const char * argv[]) {
    
    n = 0;
    max = 0;
    while (scanf("%d",&data[n]) != EOF) {
        if (max > data[n]) {
            
        } else {
            max = data[n];
        }
        n ++;
    }
    
    number_table[0] = 1;
    number_table[1] = 1;
    
    for (i = 2; i < max; i ++) {
        if (number_table[i] == 0) {
            for (j = 0; j < max; j ++) {
                if (j % i == 0 && j != i) {
                    number_table[j] = 1;
                }
            }
        }
    }
    
    for (i = 0; i < n; i ++) {
        ans = 0;
        for (j = 0; j <= data[i]; j ++) {
            if (number_table[j] == 0) {
                ans ++;
            }
        }
        printf("%d\n",ans);
    }
    
    return 0;
}
