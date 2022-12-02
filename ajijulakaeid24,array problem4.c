#include <stdio.h>

int zero(int a[],int m){
    int cnt=0,i;
    for(i=0;i<m;i++){
        if(a[i]==0){
            cnt++;
        }
    }
    return cnt;
}

void end (int a[],int m,int cnt){
    int b[1000];
    int i,j=0;
    for(i=0;i<m;i++){
        if(a[i]!=0){
            b[j]=a[i];
            j++;
        }
    }
    for(i=0;i<cnt;i++){
        b[j]=0;
        j++;
    }
    for(i=0;i<m;i++){
        printf("%d",b[i]);
    }
}

int main(){
    int i,m,a[1000];

    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    int cnt=zero(a,m);
    printf("n\%d\n",cnt);

    end(a,m,cnt);
}
