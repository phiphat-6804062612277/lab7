#include <stdio.h>
long convert(long h,long m,long s);
int main(){
    int hour,minutes,seconds;
    long avs;
    scanf("%d %d %d",&hour,&minutes,&seconds);
    avs = convert(hour,minutes,seconds);
    printf("seconds = %d",avs);
    return 0;
}
long convert(long h,long m,long s){
    long aveee;
    aveee = (h*60*60) + (m * 60) + s;
    return aveee;
}
