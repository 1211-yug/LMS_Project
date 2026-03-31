#include <stdio.h>

void main()
{
    char str[100];
    int i, j, count, visited[100] = { };

    printf("Enter any string:- ");
    scanf("%s", &str);

    for (i = 0 ; str[i] != '\0' ; i++)
    {
        if (visited[i] == 1)
            continue;

        count = 1;
        for (j = i+1 ; str[j] != '\0' ; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            	visited[j] = 1;
            }
        }

        printf("\n%c => %d\n", str[i], count);
    }

}
