#include <iostream>
extern int palindrome_sum(int integers[], int length);

int main(){
    int integers[5]={1,2,0,2,1};
    int length=5;
    int result=palindrome_sum(integers,length);
    std::cout << result << std::endl;
    
}