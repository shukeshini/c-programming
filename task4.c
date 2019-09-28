#include <stdio.h>
#include <string.h>
 
void main()
{
    char first[20], last[20];
    int i, j, pos;
 
    /*  Initialize the string to NULL values */
    memset(first, 0, 20);
    memset(last, 0, 20);
 
    printf("Enter the first name: ");
    scanf("%s", first);
    printf("Enter the second name: ");
    scanf("%s", last);
    printf("First name  = %s\n", first);
    printf("Second name = %s\n", last);
 
    /*  Concate the second string to the end of the first string */
    for (i = 0; first[i] != '\0'; i++)
    {
        /*  null statement: simply traversing the string1 */
        ;
    }
    pos = i;
    for (j = 0; last[j] != '\0'; i++)
    {
        first[i] = last[j++];
    }
    /*  set the last character of string1 to NULL */
    first[i] = '\0';
    printf("Concatenated string = %s\n", first);
}
