#include <stdio.h>
#include "Log1Con.h"

int main(){
    int i = 1;
    int res;

    while (i){

        scanf("%i",&res);

        switch(res){
            case 1:
                prtabl();
                break;
            case 2:
                prfunc5();
                break;
            case 3:
                i--;
                break;
            default:
                printf("Enter a value (1, 2 or 3)\n");
                break;
        }
    }
    return 0;
}