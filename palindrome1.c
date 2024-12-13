//palindrome number 
#include <stdio.h>

int main() {
    int  c ,n,rev=0,rem;
    printf("enter the number:");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        rem = n%10;
        rev= rev*10+rem; 
        n = n/10;
    }
    if(c==rev)
    {
        printf("palindrome number:%d",rev);
    }
    else{
    printf("not a palindrome number:%d",rev);
    }
    return 0;
}
