#include <stdio.h>

int string_compare(char *one,char *two)
{
    int i = 0;

    while( (one[i] != '\0') && (two[i] != '\0') )
    {

        if(one[i] == two [i])
        {
            i++;
            continue;
        }
        else if(one[i] < two[i])

            return -1;
        else
            return  1;
    }
    if( (one[i] == '\0') && (two[i] == '\0') )
        return 0;
    else
    {
        if(one[i] == '\0')
            return -1;
        else
            return 1;
    }

}

int main(void)
{
    char string_one[30],string_two[30];
    int rv;

    printf("Enter first string\n");
    scanf("%s",string_one);
    printf("Enter second string\n");
    scanf("%s",string_two);

    rv = string_compare(string_one,string_two);
    printf("%d",rv);
    return (0);
}
