
#include "DFT.h"

int main()
{
    int i,N;
    float input[Nmax],Re[Nmax],Im[Nmax];

    //Nmax represent the maximum number of inputs (in DFT.h)
    //input is an array of input samples
    //Re is an array of real parts of output samples
    //Im is an array of imaginary parts of output samples



    //request for the number of inputs
    do {
    printf("Enter the number of input samples please\n");
    scanf("%d",&N);
    }
    while(N<0 || N>Nmax);

    //request for input values
    printf("Enter input values\n\n");
    for(i=0;i<N;i++)
    {
        printf("input[%d]= ",i);
        scanf("%f",&input[i]);
    }

    DFT(input,Re,Im,N);  //call of DFT function

    //Display outputs
    for(i=0;i<N;i++)
    {

        printf("\n output[%d]= %f + j * %f\n",i,Re[i],Im[i]);

    }
    return 0;
}
