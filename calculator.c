#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"

int main(int argc, char *argv[]){
    float a;
    float b;
    int op;
    float result = 0;

    a = atof(argv[1]);
    b = atof(argv[2]);
    op = atoi(argv[3]);

    if (op == 1){
	result = Addfunc(a,b);
    } else if (op == 2){
	result = Minusfunc(a,b);
    } else if (op == 3){
	result = Multifunc(a,b);
    } else{
	result =Dividefunc(a,b);
	}

    printf("Result value: %.6f\n", result);
    return 0;

}
