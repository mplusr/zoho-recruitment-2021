#include <stdio.h>
#include <string.h>

int main(){
    char s[50];
    printf("Enter a string with odd length: ");
    scanf("%s", s);
    int l = strlen(s);
    int mid = l/2;
    for(int i=0; i<l; i++){
        for(int j=i+1; j<l; j++)
            printf(" ");
        for(int j=0; j<=i; j++){
            printf("%c",s[(mid+j)%l]);
        }
        printf("\n");
    }
}
