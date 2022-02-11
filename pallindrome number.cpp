#include <stdio.h>
int reverse(int x)
{
    int num=x;
    int rev,rem=0;
    for(int i=1;i<num;i++)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    return rev;
}

int main()
{
    int snum,num,rev,rem;
    scanf("%d",&num);
    snum=num;
    rev=reverse(num);
    if(snum==num)
    {
        printf("pallindrome");
    }
    else
    {
        printf("not a pallindrome");
    }
   return 0;
}
