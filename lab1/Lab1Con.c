#include <stdio.h>
#include "Log1Con.h"

int logic(int a)
{
    if (a == 0)
        return 0;
    else
        return 1;
}

int  NOT(int a)
{
    if (a == 1)
        return 0;
    else
        return 1;
}


int IMP(int a, int b)
{

    if ((a == 1) && (b == 0))
        return 0;
    else
        return 1;
}

int EQU(int a, int b)
{
    if (a == b)
        return 1;
    else
        return 0;
}

int OR(int a, int b)

{
    if ((a == 1) || (b == 1))
        return 1;
    else
        return 0;
}

int AND(int a, int b)
{

    if ((a == 1) && (b == 1))
        return 1;
    else
        return 0;

}

int XOR(int a, int b)
{
    if (a == b)
        return 0;
    else
        return 1;
}

void tabl(int a,int b){
    printf("| %i | %i |  %i  |  %i  |  %i  |   %i  |   %i   |   %i   |\n",
            logic(a),logic(b),NOT(a),AND(a,b),OR(a,b),IMP(a,b), EQU(a,b), XOR(a,b));
}
void prtabl(){
    printf("| A | B | NotA| A^B | AvB | A=>B |  A~B  | A(+)B |\n");
    tabl(1,1); tabl(1,0); tabl(0,1); tabl(0,0);
}
void func5(int a,int b,int c){

    printf("|%i|%i|%i|  %i  | %i |    %i   |   %i   |         %i          |\n",
            logic(a),logic(b),logic(c),NOT(a),AND(a,b), OR(AND(a,b),c),
            AND(c,NOT(a)), EQU(OR(AND(a,b),c),AND(c,NOT(a))));

}
void prfunc5(){
    printf("|a|b|c|not a|a^b|(a^b)vc)|c^not a|((a^b)vc)~(c^not a))|\n");
    func5(1,1,1);func5(1,1,0);func5(1,0,1);func5(1,0,0);func5(0,0,1);func5(0,1,0);
    func5(0,1,1);func5(0,0,0);
}
