#include <iostream>
using namespace std;

void multiply(int arr1[100][100], int arr2[100][100],int r1,int c1, int r2, int c2){
    int c[c1][r2];
    int sum=0;
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            sum=0;
            for(int k=0; k<c1; k++){
                sum += arr1[i][k]*arr2[k][j];
            }
            c[i][j] = sum;
        }
        cout<<endl;
    }
}

class Matrix{
    private:
    int matrix_rows;
    int matrix_cols;
    int matrix[100][100];

    public:
    Matrix(int rows, int cols){
        matrix_rows = rows;
        matrix_cols = cols;
        
    }
    void get(){
        cout<<"Enter Elements"<<endl;
        for(int i=0; i<matrix_rows; i++){
            for(int j=0; j<matrix_cols; j++){
                cout<<"["<<i<<"] ["<<j<<"] ";
                cin>>matrix[i][j];
            }
        }
    }
    void matrix_addRows(){
        int sum = 0;
        for(int i=0 ;i<matrix_rows; i++){
            sum = 0;
            for(int j=0; j<matrix_cols; j++){
                sum+=matrix[i][j];
            }
            cout<<"Sum Of Row "<<i+1<<" : "<<sum<<endl;
        }
    }
    void display(){
        for(int i=0; i<matrix_rows; i++){
            for(int j=0; j<matrix_cols; j++){
                cout<<matrix[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    void transpose(){
        int arr[matrix_cols][matrix_rows];

        for(int i=0; i<matrix_rows; i++){
            for(int j=0; j<matrix_cols; j++){
                arr[i][j] = matrix[j][i];
            }
        }
        for(int i=0; i<matrix_cols; i++){
            for(int j=0; j<matrix_rows; j++){
                matrix[i][j] = arr[i][j];
            }
        }


    }
    int isIdentity(){
        int flag=0;
        for(int i=0; i<matrix_rows; i++){
            for(int j=0; j<matrix_cols; j++){
                if(i==j && matrix[i][j]==1){
                    flag=1;
                }
                else if(i!=j && matrix[i][j]==0){
                    flag=1;
                }
                else{
                    flag=0;
                    break;
                }
            }
        }
        if(!flag){
            return 1;
        }
        return 0;
    }
};

int main(){
   int arr1[2][2]={
       {1,2},
       {3,4}
   };
   int arr2[2][2]={
       {3,4},
       {3,4}
   };
//    multiply(arr1,arr2,2,2,2,2);

    return 0;
}