#include <stdio.h>
#include <stdlib.h>
#include "coeffs.h"

int main(){

    double Mean = mean("gau.dat");
    printf("%lf\n",Mean);
    double var = variance("gau.dat")-(Mean*Mean);
    printf("%lf",var);

}