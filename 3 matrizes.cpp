#include <iostream>

using namespace std;

int main()
{
    int matriza[3][3] = {{10,30,50}, {5,15,25}, {2,5,9}};
    int matrizb[3][3] = {{5,35,70},{1,25,70},{1,4,7}};
    int matrizc[3][3];
    int i=0,j=0;
    
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            if (matriza[i][j]>matrizb[i][j]){
                matrizc[i][j] = matriza[i][j];
            }    
            else{
                matrizc[i][j] = matrizb[i][j];
            }
        }
    }
    
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            cout<<" "<<matrizc[i][j];
        }        
    }   
    return 0;
}
