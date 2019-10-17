#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
struct student {
    int number;
    int score;
 };
 bool cmp(struct student a,struct student b) {
    if (a.score!=b.score)
       return a.score>b.score;
       return a.number<b.number;
 } 
int main() {
    struct student S[5005];
    int n,m,t,i,sum=0,dex;
    scanf("%d%d",&n,&m);
    t=m*1.5;
    for (i=0;i<n;i++) {
       scanf("%d%d",&S[i].number,&S[i].score);
    }
    qsort(S,S+n,sizeof(int),cmp);
    dex=t;
    sum=t;
    while(S[t-1].score==S[dex++].score) {
        sum++;
    }
    printf("%d %d",S[t-1].score,sum);
    for (i=0;i<dex-1;i++) { 
        printf("%d %d",S[i].number,S[i].score);
    }
    return 0;
 }