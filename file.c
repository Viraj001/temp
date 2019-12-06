#include <stdio.h>
#include <math.h>
int convertBinaryToDecimal(long long n);
int r;
int main()
{
    long long n;
    printf("Enter a binary number: ");
    scanf("%lld", &n);
    printf("%lld = %d in decimal", n, convertBinaryToDecimal(n));
    return 0;
}
int convertBinaryToDecimal(long long n)
{
    int dNum= 0, i = 0;
    
    while (n!=0)
    {
        r = n%10;
        n /= 10;
        dNum += r*pow(2,i);
        ++i;
    }
    return dNum;
}
