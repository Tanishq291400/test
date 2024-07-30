/*sum of two 3*3 matrix
*/
#include <stdio.h>
int main(){
    int mat1[3][3],mat2[3][3],sum[3][3],i,j;
    printf("enter elements of matrix1:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("enter elements of matrix2:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&mat2[i][j]);
            }
        }
        printf("Sum of a matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum[i][j]=mat1[i][j] + mat2[i][j];
            printf("%d\t",sum[i][j]);
            }
            printf("\n");
    }
}