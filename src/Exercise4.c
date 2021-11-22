/*
4. Receive a string, remove all blank spaces at begin and
end of the string and leave only one blank space between words.
Ex:
 ________________________________________________
| Input: "  this  is an   unformatted  string "  |
| Output: this is an unformatted string          |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex4(char *str){
	int i=0,j;
    int n = strlen(str);
    for(i=0;i<n;i++)
     if(str[i]==' ')
      {
        j=i;
           while(j<n-1)
           {
            str[j] = str[j+1];
            j++;
           }
        n--;
        i--;
      }
      str[n]='\0';
    printf(" %s ",str);
	
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex4(testcase);

	return 0;
}