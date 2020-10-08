#include <stdio.h>
#define FIL 2
#define COL 2
void SumaMat(float A[][COL], float B[][COL],float C[][COL], int f,int c ){
int i,j;
for (i=0; i<f; i++)
for (j=0; j<c; j++)
C[i][j]=A[i][j]+B[i][j];}
int main(){
float A[FIL][COL]={2,10,0 ,4};
float B[FIL][COL]={-1,9,3,-5};
float C[FIL][COL];
int i,j;SumaMat(A,B,C,FIL,COl);printf ("Contenido de C: \n");
for (i=0; i<FIL; i++){
for(j=0; j<Col; j++)
printf("%.2f", C[i][j]);
printf("\n");}
return 0;
}

