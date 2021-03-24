#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> A;

void fun(){
    A.push_back(30);
}

int main()
{
    A.push_back(10);
    A.push_back(20);

    fun();

    for(int i = 0; i < A.size(); i++)
        cout << A[i] << " ";
    cout << endl;

    return 0;

}