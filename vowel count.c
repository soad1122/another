//count number of vowel
#include <stdio.h>
#include<string.h>

int main()
{
    int i; char str[100];
    printf("Enter string: ");
    gets(str);
    printf("Number of vowel: ");ASDFBGVBNM
    int count=0;
    for(i=0; str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            {count++;}

    }
    printf("%d",count);



    return 0;
}
