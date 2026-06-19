#include<stdio.h>
#include<string.h>

int main(){
    char s[20];
    int i,len;

    scanf("%s",s);
    len=strlen(s);

    for(i=0;i<len/2;i++){
        if(s[i]!=s[len-1-i]){
            printf("Not Palindrome");
            return 0;
        }
    }

    printf("Palindrome");
}