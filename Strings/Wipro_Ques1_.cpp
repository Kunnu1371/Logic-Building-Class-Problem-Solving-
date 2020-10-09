#include <stdio.h> 
#include <string.h>
#include <math.h>

int sum(char word[], int len){
    int s=0, i;
    for(i=0; i<len/2; i++){
    //    printf("%c - %c\n", word[i],word[len-i-1]);
        s += abs(word[i]-word[len-i-1]);
    //    printf("%d\n", s);
    }
    if(len%2==1)
        s+= word[len/2]-'A'+1;
    return s;
}

int main() 
{   
    char str[500];
    int i,j,n,len;
    gets(str);
    len=strlen(str);
    
    for(i=0; i<len; i++){
        j=i;
        while(str[j]!=' ' && str[j]!='\t' && str[j]!='\0' && str[j]!='\n' )
            j++;
        printf("%d", sum(&str[i], j-i));
        i=j;
    }
    printf("\n");
    return 0; 
}