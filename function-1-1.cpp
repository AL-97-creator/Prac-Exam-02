#include <iostream>

void print_matrix(int array[10][10]){
    for (int i=0;i<10;i++){
        for (int k=0;k<10;k++){
            std::cout << array[i][k] << " ";
        }
        std::cout << ""<< std::endl;
    }
}