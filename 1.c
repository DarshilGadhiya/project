// #include <stdio.h>

// void main()
// {
//     char ch = 'a';

//     do
//     {
//         printf("%c ", ch);
//         ch += 4;
//     } while (ch <= 'z');
// }

// #include<stdio.h>

// void main(){
//     int num ,count=0;
//     printf("enter numbazer:-");
//     scanf("%d",&num);

//     while(num != 0){
//         num = num/10;
//         count+=1;

//     }
//     printf("count is %d",count);
// }

#include <stdio.h>

void main()
{
    int num, firstDigit, lastDigit;

    printf("Enter any number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    firstDigit = num;
    while (firstDigit >= 10)
    {
        firstDigit /= 10;
    }

    int sum = firstDigit + lastDigit;

    printf("The sum of the first and last digits is: %d\n", sum);
}
