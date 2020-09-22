#include<stdio.h>
#include<string.h>
void sort (char str[],int n)
{
    int i,j=0;int alp[26]={0};
    for(i=0;i<n;i++)
    {
        alp[str[i]-97]+=1;
    }
    for(i=0;i<n;i++)
    {   
        if(alp[j]!=0)
        {
            str[i]=j+97;
            alp[j]--;
        }
        else if(alp[j]==0)
        {
            i--;
            j++;
        }
    }
}

int main()
{   
    int test,n,i,temp;char str[200000];
    scanf("%d",&test);
    while(test--)
    {
        scanf("%s",str);
        n=strlen(str);
        sort(str,n);
        if(str[0]==str[n-1])
        printf("-1\n");
        else
        printf("%s\n",str);
    }
    return 0;
}