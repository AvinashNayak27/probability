#include <stdio.h>
#include <stdlib.h>
#include "coeffs.h"

int main(){

    double Mean = mean("uni.dat");
    printf("%lf\n",Mean);
    double var = variance("uni.dat")-(Mean*Mean);
    printf("%lf",var);

}