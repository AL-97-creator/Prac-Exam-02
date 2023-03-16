#include <iostream>
extern int bin_to_int(int binary_digits[], int number_of_digits);

int main(){
    int binary_digits[5]={1,0,1,0,1};
    int number_of_digits=5;
    int num=bin_to_int(binary_digits,number_of_digits);
    std::cout << num << std::endl;
}