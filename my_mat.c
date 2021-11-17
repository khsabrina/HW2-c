//#include "my_mat.h"
#include <stdio.h>

char Create_mat(int mat[10][10]){
    int k;
    char fun= 'E';
    int res;
    for(int i=0; i<10;i++){
        for(int j=0; j<10;j++){
            if(fun == 'E'){
                res = scanf( "%d", &k);
                if(res!=1){
                    scanf( "%c", &fun);
                }
                else{
                mat[i][j]=k;
                }
        }
            else{
                mat[i][j]=0;
            }
        }
    }
    return fun;

}
void Create_mat2(int mat[10][10]){
    int k;
    int res;
    int check = 2;
    for(int i=0; i<10;i++){
        for(int j=0; j<10;j++){
            if(check==2){
                res = scanf( "%d", &k);
                if(res!=1){
                    check=check+1;
                    mat[i][j]=0;
                }
                else{
                    mat[i][j]=k;
                }
            }
            else{
                mat[i][j]=0;
            }
        }
    }

}
int Min(int x,int y){
    if(x>=y){
        return y;
    }
    else {
        return x;
    }
}
void Short_Path_mat(int mat[10][10]){
    for(int k = 0 ; k<10 ; k++){
        for(int i= 0 ; i<10;i++){
            for(int j=0;j<10;j++){
                if(i==j){
                    mat[i][j]=0;
                }
                else if(mat[i][j]==0 && mat[i][k]==0){
                        mat[i][j]=0;
                    
                }
                else if(mat[i][j]==0 && mat[k][j]==0){
                    mat[i][j]=0;
                }
                else if(mat[i][j]==0){
                    mat[i][j]= mat[k][j]+mat[i][k];
                }
                else if(mat[k][j]!=0 && mat[i][k]!=0){
                    int sum= mat[k][j]+mat[i][k];
                    mat[i][j]= Min(mat[i][j], sum); 
                }
            }
        }
    }
} 

void Is_Path(int mat[10][10]){
    int i;
    int j;
    scanf( "%d", &i);
    scanf( "%d", &j);
    if(mat[i][j]>0){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
}
void Short_Path(int mat[10][10]){
    int i;
    int j;
    scanf( "%d", &i);
    scanf( "%d", &j);
    if(mat[i][j]==0){
        printf("-1\n");
    }
    else{
        printf("%d\n", mat[i][j]);
    }
}

