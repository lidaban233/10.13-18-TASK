#include <stdio.h>
#include <stdlib.h> 
#define N 40 
float male[N], female[N];
int cmp1( const void *a , const void *b ){
    return *(float *)a > *(float *)b ? 1 : -1;
}
int cmp2( const void *a , const void *b ){
    return *(float *)a < *(float *)b ? 1 : -1;
} 
int main(void){
    int n, nm, nf, i;
    char sex[7];
    scanf("%d", &n);
    for(i=0,nm=0,nf=0; i<n; i++) {
        scanf("%s%f", sex, &male[nm]);
        if(sex[0] == 'm')
            nm++;
        else
            female[nf++] = male[nm];
    }
    qsort(male, nm, sizeof(float), cmp1);
    qsort(female, nf, sizeof(float), cmp2);
    for(i=0; i<nm; i++)
        printf("%.2f ", male[i]);
    for(i=0; i<nf; i++)
        printf("%.2f ", female[i]);
    printf("\n");
    return 0;
}