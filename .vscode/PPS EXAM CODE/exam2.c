/*IF Else for vowel and consonent*/
#include<stdio.h>
int main(){
    char c;
    printf("Enter a vowel");
    scanf("%c", &c);
    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='c' )
    {
    printf("Vowel\n");}
    else{
        printf("Consonant\n");
    }
    
}
