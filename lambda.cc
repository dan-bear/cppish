#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class LambdaExamples{
public:
    void makeMinIntegerHeap(){
        vector<int> data = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
        ///the order of the heap is from smaller number to larger.
        ///A lambda function is passed as a parameter.
        make_heap(data.begin(),
                  data.end(),
                  [](int val1, int val2) { return val1 > val2;});
                  
        cout << "first heap element is: " << data.front() << "\n";
    }
  
};

int main(){
  LambdaExamples examples;  
  //1:
  examples.makeMinIntegerHeap();


  return 0;
}
