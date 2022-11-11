#include <iostream>

// BINOMINAL COEFFICENT (PASCAL TRIANGLE)
// matrix with value 0
#define CHOOSEN_SIZE 100

class PascalPrecompution{
private:
    int choose[CHOOSEN_SIZE][CHOOSEN_SIZE];
public:
    void init_choose(){
        for(int i = 0; i < CHOOSEN_SIZE; ++i){
            choose[i][0] = 1;
            choose[i][i] = 1;
        }
        for(int n = 1; n < CHOOSEN_SIZE; ++n){
                choose[0][n] = 0;
            for(int k = 1; k < n; ++k){
                // Value of current cell in Pascal's triangle
                choose[n][k] =(choose[n-1][k-1] + choose[n-1][k]);
                choose[k][n] = 0;
            }
        }
    }

    int getElementIndex(int n, int k){
        return choose[n][k];
    }
};

int main(){
        PascalPrecompution p;
        p.init_choose();
        std::cout << p.getElementIndex(8, 3);
    return  0;
}