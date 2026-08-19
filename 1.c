#include <stdio.h>

int main()
{
    int marks;
    printf("\n Enter the marks obtained : ");
    scanf("%d", &marks);
    if ( marks>=75)
        printf("\n Distinction");
    else if ( marks >= 60 && marks <75)
        printf("\n First Division");
    else if ( marks >= 50 && marks < 60)
        printf("\n Second Division");
    else if ( marks >= 40 && marks < 50)
        printf("\n Third Division");
    else
        printf("\n Fail");
    return 0;
}
