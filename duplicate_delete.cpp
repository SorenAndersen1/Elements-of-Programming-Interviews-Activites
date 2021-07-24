#include <string>
#include <iostream>
#include <vector>
using std::vector;

int duplicate_delete(vector<int> sortedArr) {
  // TODO - you fill in here.
    int valid_num = 0;
    vector<int> A = sortedArr;

    if(A.empty()){
        return 0;
    }
    int holder = 1;
    for (int i = 1; i < A.size(); ++i)
    {
        if(A.at(holder - 1) != A[i]){
            A[holder++] = A[i];
        }
    }
    
  return A.size() - holder;
}
int main() {

    
    vector<int> test_variable;
        for (int i = 0; i < 15; i++)
    {
        if(i % 3){
        test_variable.push_back(i - 1);
        }
        else{
        test_variable.push_back(i);

        }
    }
        for (int i = 0; i < 15 - 1; i++)
    {
    std::cout << test_variable[i] << " ";

    }
    std::cout << std::endl;
    std::cout << duplicate_delete(test_variable) << std::endl;
}