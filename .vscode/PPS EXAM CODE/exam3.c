#include<stdio.h>
int main(){
    char c;
    printf("Enter a character");
    scanf("%s",&c);
    switch (c){
        case 'a':
        case 'e':
        case 'i':
     case 'o':
     case 'u':
     printf("vowel");
     break;
     default:
     printf("consonant");
     break;
    }
    return 0;

}