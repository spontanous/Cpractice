/*************************************************************************
	> File Name: 141.c
	> Author: 
	> Mail: 
	> Created Time: 2019年08月17日 星期六 18时44分50秒
 ************************************************************************/
#include<stdio.h>

char arr[30] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
                'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T' ,'U', 'U','V', 'W', 'X', 'Y', 'Z'};

int main(){
    int m, n;
    scanf("%d", &m);
    n = m + 1;
    for(int i = 0; i < n; i++){ 
        for(int p = 0; p < i; p++){
            printf(" ");
        }
        for(int j = i; j < n; j++){
            printf("%c", arr[j]);
        }
        for(int k = n - 2; k >=  i;  k--){
            printf("%c", arr[k]);
        }
        printf("\n");
    }
    for(int i = n; i < 2 * n - 1; i++){
        for(int p = 2 * n - 2 - i; p > 0; p--){
            printf(" ");
        }
        for(int j = 2 * n - 2 - i; j <= n - 1; j++){
            printf("%c", arr[j]);
        }
        for(int k = n - 2; k >= 2 * n - 2 - i; k--){
            printf("%c", arr[k]);
        }
        printf("\n");
    }
    return 0;
}
