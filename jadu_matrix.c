#include <stdio.h>
int main(){
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int flag =1;
    int count = 0;

    if(row != col){
        flag = 0;
    }
    // counting the number greater than 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j] > 0){
                count++;
            }
        }
    }

    // if the matrix has even or odd -> getting the value conditionally
    if(row %2 == 0){
        if(count != row + col){
            flag = 0;
            // printf("Eijgay 1: ");
        }
    }
    else if(count != (row+col)-1){
        flag = 0;
        // printf("Eijgay 2: ");
    }

    // primary diagonal
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(i == j){
                if(arr[i][j] != 1){
                    flag = 0;
                    // printf("Eijgay 3: ");
                }
            }
        }
    }

    // secondary diagonal
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(i+j == row-1){
                if(arr[i][j] != 1){
                    flag = 0;
                    // printf("Eijgay 4: ");
                }
            }
        }
    }

    if(flag){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}