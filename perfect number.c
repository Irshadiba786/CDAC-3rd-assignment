#include<stdio.h>  
#include<conio.h>  
void main()  
{  
int num, rem, sum = 0, i;  
printf("Enter a number\n");  
scanf("%d", &num);      
for(i = 1; i < num; i++)  
    {  
        rem = num % i;  
        if (rem == 0)  
    {  
        sum = sum + i;  
    }  
     }  
if (sum == num)  
     printf("a Perfect Number");  
    else  
    printf("\n  not a Perfect Number");  
getch();  
} 
