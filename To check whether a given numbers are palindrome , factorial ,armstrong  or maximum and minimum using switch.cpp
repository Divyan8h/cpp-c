#include<stdio.h>
using namespace std;
int main()
{
    int n1,n2,ch;
    printf("Enter first number ");
    scanf("%d",&n1);
    printf("Enter second number");
    scanf("%d",&n2);
    printf("Enter your choice 1 Palindrom \n 2 Factorial\n 3 Amstrong \n 4 Maximum and minimum");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
    {
        int num,rem,rev=0,temp;
        temp=num;
       
        while(num!=0)
        {
            rem=num%10;
            rev=rev*10 + rem;
            num=num/10;
        }
        if (rev==temp)
        {
            printf("Palindrom number");
        }
        else
        {
            printf("Not palindrom");
        }
        break;
    }
    case 2:{
        int i;
        int f=1;
        for(i=1;i<=n1;i++)
        {
            f=f*i;
        }
        printf("Factorial=%d",f);
        break;
    }
    case 3:
    {
        int rem;
        int num;
        int rev=0;
        int temp;
        temp=num;
       
        while(num!=0)
        {
            rem=num%10;
            rev=rev+ rem*3;
            num=num/10;
        }
        if (rev==temp)
        {
            printf("Palindrom number");
        }
        else
        {
            printf("Not palindrom");
        }
        break;
    }
    
    }
}
