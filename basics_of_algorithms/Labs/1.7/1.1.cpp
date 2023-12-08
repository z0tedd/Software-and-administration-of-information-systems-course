#include<iostream>
#include <vector>
using namespace std;

int main() {
    const int SiZe = 13;
    int** a = new int* [SiZe];
    ///*
    for (int i=0;i<SiZe;i++){
        a[i] = new int [SiZe];
        for (int j=0;j<SiZe;j++){
            a[i][j] = 0;
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "%%%%%%%%%%"<<"\n";
    int Step = SiZe/2; 
    cout << Step <<"\n";
    for (int i=0;i<Step+1;i++){
        for (int j=0;j<Step+1;j++){
            if (i >= j){
                a[i+Step][j] = 1;
                a[i][j+Step]= 1;
            }
        }
    }
    for (int i=0;i<SiZe;i++){
        
        for (int j=0;j<SiZe;j++){
            
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    //*/
return 0;
}
