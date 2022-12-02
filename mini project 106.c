
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<time.h>
#include<math.h>
#define max 6000
int adj_mat[max][max];
int main(){
  int i,j,n,sum=0,edge,deg[6000];

double total_time;
  clock_t start,end;

  printf("How many vertices:");
  scanf("%d",&n);

  srand(2);

  start=clock();


  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        if(adj_mat[i][j]!=1){
            adj_mat[i][j]=rand()%2;
        }
        if(adj_mat[i][j]==1)
            adj_mat[j][i]=1;
    }
  }


  printf("\n");

  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        printf("%d\t",adj_mat[i][j]);
    }
    printf("\n");
  }

  printf("\n Vertex \t degree");
  for(i=1;i<=n;i++){
    deg[i]=0;
    for(j=1;j<=n;j++){
        if(adj_mat[i][j]==1){
            deg[i]++;
        }
    }
        printf("\n %5d\t\t  %d",i,deg[i]);
    }
    for(i=1;i<=n;i++){
        sum=sum+deg[i];
    }
    edge=sum/2;


    printf("\n Total degree is:%d\n",sum);
    printf("\n Total edge is:%d\n",edge);
    printf("\n (sum of degree/2)=(%d/2)=%d",sum,sum/2,edge);
    printf("\n So the handshaking theorem is proved.\n");
    end=clock();
    total_time=((double)(end-start)/ CLOCKS_PER_SEC);

    printf("\n Time is taken for execute:%1f\n",total_time);
}
