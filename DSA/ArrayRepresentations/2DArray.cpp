#include<iostream>
using namespace std;
int main(){
    //2d array in stack
    int a[3][4]={{2,4,7,5},{5,7,3,9},{5,9,34,7}};

    //2d array in stack and heap
    int *b[3];
    b[0]=new int[4];
    b[1]=new int[4];
    b[2]=new int[4]; 

    //2d array in heap
    int **c;
    c=new int*[3];
    c[0]=new int[4];
    c[1]=new int[4];
    c[2]=new int[4];

    for(int i=0;i<3;i++){
      for(int j=0;j<4;j++){
        cout<<c[i][j]<<" ";
      }
      cout<<endl;
    }
}
