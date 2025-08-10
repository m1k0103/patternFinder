#include <stdlib.h>
#include <string.h>
#include <stdio.h>


char *getUniqueChars(char* string){
    // Count how many unique items there are
    int stringLen = strlen(string);
    // Cycle though all characters
    for (int i=0; i<stringLen; i++){
        // Cycle through them again and compare each second cycle letter with first cycle letter
        for (int j=0; j<i; j++){
            if ((string[i] == string[j]) || (i != j)){
                //printf("removed %s", string[j]);
                printf(string);
                string[j] = '\0';
            }
        }
    }
    printf("%s", strlen(string));
    return string;
}

int main(){
    char text[] = "kgoahkrhgrkrrorghaoargohorakoaoahrhoohkarkoorrrokaggahrogoagaoka";
    printf("%s", getUniqueChars(text));
    //printf("test");
    return 0;
}