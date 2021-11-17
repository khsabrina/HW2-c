#include <stdio.h>
#include "my_mat.h"
//#include "my_mat.c"


int main(){
    char func='E';
    int mat[10][10];
    while(func!='D'){
        scanf("%c", &func);
        if(func=='A'){
            Create_mat2(mat);
            Short_Path_mat(mat);
         
        }
        if(func=='B'){
            Is_Path(mat);
        }
        if(func=='C'){
            Short_Path(mat);
        }
    }
}
