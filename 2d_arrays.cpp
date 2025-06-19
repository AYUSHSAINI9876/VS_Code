#include<iostream>
using namespace std;

bool linearsearch(int mat[][3],int rows,int cols,int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(mat[i][j]==key){
                return true;
            }
        }
    }return false;
}
int main(){
    int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int rows=4,cols=3;

//input

//  for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//        cin>>matrix[i][j];
//         }cout<<endl;
//     }cout<<endl;

    //output

    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //    cout<<matrix[i][j]<<" ";
    //     }cout<<endl;
    // }cout<<endl;

    //linear search
    cout<<linearsearch(matrix,rows,cols,8)<<endl;
    return 0;
}