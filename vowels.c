//to check if the given character is a vowel or a consonant
#include<stdio.h>
int main(){
    char ch;
    printf("enter character:");
    scanf("%c",&ch);
    (ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='u'||ch=='U')? printf("character is vowel",ch): printf("character is consonant",ch);
    return 0;
}
