#include <stdio.h>
#include <string.h>
// HASHING IS NOT A ACCURATE SOLUTION TO COMPARE TWO STRINGS. SO WE GO FOR TRADITIOAL METHOD. 
int hashFunction(char S1[])
{
  unsigned short int count = 0;
  int hash = 0, i = 0;
  while(S1[i] != '\0'){
    count++;
    i++;
  }
  for (i = 0; i < count; i++)
    hash = hash + (int)S1[i];
  return hash;
}

void compare(char str1[], char str2[]){
  int flag;
  for(int i=0;i<strlen(str1);i++) //first for loop for browsing  elements of string 1
    {    
        flag=0; 
        for(int j=0;j<strlen(str2);j++) //second for loop for elements of string 2
        { 
          if(str1[i]==str2[j]) //if element of string 1 is equal string 2  break out of second loop
            { //flag variable is used to check is control reaches if block
              flag = 1; //i have made elements of string 2 =0  ,so that it does not match with any other element of string 1 more than 1 time ,you can use any other logic also.             
              str2[j] = '0'; 
              break; 
            } 
         }
          
        if(flag==0) //this means control does not reach if block or the two strings are not equal.
        break; 
    } 
    flag==1?printf("YES\n"):printf("NO\n"); 
}

int main()
{
  char S1[100000], S2[100000];
  unsigned int T, hash_1, hash_2, count;
  scanf("%u", &T);
  for (int i = 0; i < T; i++){
    scanf("%s %s", S1, S2);
    // hash_1 = hashFunction(S1);
    // hash_2 = hashFunction(S2);
    // if(hash_1 == hash_2) printf("YES\n");
    // else printf("NO\n");
    // OR
    compare(S1, S2);
    
  }
  return 0;
}