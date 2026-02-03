#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random100to200();
int main(){
    int arrayy[20][20],m,n,t=1,stf;
    srand(time(NULL));
    scanf("%d %d",&m,&n);
    if ((m <= 2 || m >20)||(n <= 2|| n > 20)){
        return 0;
    }
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            t = 1;
            while(t){
                stf = random100to200();
                t = 0;
                for(int c =0;c<m;c++){
                    for(int y=0;y<n;y++){
                        if(stf == arrayy[c][y]){
                            t = 1;
                        }
                    }
                }
            }
            arrayy[i][j] = stf;
        }
    }
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            printf("%d ",arrayy[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int random100to200(){
    int ran;
    ran = (rand() % 101)+100;
    return ran;
}
