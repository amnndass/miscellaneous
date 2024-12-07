#include <stdio.h>
#define MAX 10 //maximum size possible for matrices

int multiplyMatrix(int resultMatrix[MAX][MAX], int matrix1[MAX][MAX] ,int matrix2[MAX][MAX],int  aRow,int  aCol,int bRow,int bCol){
    for(int i = 0; i<aRow; i++){
        for(int j = 0; j<bCol; j++){
            resultMatrix[i][j] = 0;
            for(int k = 0; k<aCol; k++){
                resultMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void printMatrix(int resultMatrix[MAX][MAX], int row, int col){
    printf("\nResult Matrix: \n");
    for(int i = 0; i<row; i++){
        for(int j =0 ; j<col; j++){
            printf("%d ", resultMatrix[i][j]);
        }
        printf("\n");
    }
}

int main(){
    //perform multiplication on matrices

    //decalaring the matrices
    int matrix1[MAX][MAX], matrix2[MAX][MAX];

    //entering dimensions of first matrix
    int aRow , aCol , bRow, bCol;
    printf("enter dimension of matrix 1 : ");
    scanf("%d %d",&aRow, &aCol);

    //entring elements of matrix 1
    printf("enter elements of first matrix\n");
    for(int i = 0; i<aRow; i++){
        for(int j = 0; j<aCol; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }

    //entering dimensions of second matrix
    printf("enter dimension of matrix 2 : ");
    scanf("%d %d",&bRow, &bCol);

    //entring elements of matrix 1
    printf("enter elements of first matrix\n");
    for(int i = 0; i<bRow; i++){
        for(int j = 0; j<bCol; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }

    if(aCol != bRow){
        printf("muliplicaiton not possible\n");
        return 0;
    }

    int resultMatrix[aCol][bRow];

    multiplyMatrix(resultMatrix, matrix1 ,matrix2, aRow, aCol, bRow, bCol);

    printf("\nresultant matrix after multiplication\n");
    printMatrix(resultMatrix, aCol, bRow);

    return 0;
}