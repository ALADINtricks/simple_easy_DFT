
#include "DFT.h"


void DFT(float *input,float *Re,float *Im,int N)
//input represent the input sample
//Re represent the real part of the output sample
//Im represent the imaginary part of the output sample
//N is the number of inputs which is the same for outputs
{
    int n,k;
    *Re=0;
    *Im=0;

    //DFT Calculation
    for(n=0;n<N;n++,Re++,Im++)
    {
        for(k=0;k<N;k++)
        {
            *Re+=*(input+k)*cos((2*Pi*n*k)/N);
            *Im+=*(input+k)*-(sin((2*Pi*n*k)/N));

        }
    }

}
