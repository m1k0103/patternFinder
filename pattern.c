#include <stdlib.h>
#include <string.h>


char getUniqueChars(char string){
    // Count how many unique items there are
    int stringLen = strlen(string);
    char final[] = "";
    // Cycle though all characters
    for (int i=0; i<stringLen; i++){
        // Cycle through them again and compare each second cycle letter with first cycle letter
        for (int j=0; j<i; j++){

        }

    }


}

int main(){
    char text[] = "kgoahkrhgrkrrorghaoargohorakoaoahrhoohkarkoorrrokaggahrogoagaoka";
    printf(getUniqueChars(text));

    return 0;
}