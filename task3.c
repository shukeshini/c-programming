#include <stdio.h>
 
int main()
{
    int maths,sci,hin,sum;
    float avg;
 
    printf("Enter maths marks :");
    scanf("%d",&maths);
    printf("Enter science marks :");
    scanf("%d",&sci);
    printf("Enter hindi marks :");
    scanf("%d",&hin);
 
    sum=maths+sci+hin;
    avg= (float)(maths+sci+hin)/3;
 
    printf("\nSum of 3 subjects",maths,sci,hin,sum);
    printf("\nAverage of 3 subjects",maths,sci,hin,avg);
 
    return 0;
}
