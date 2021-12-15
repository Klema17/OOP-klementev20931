#include <iostream>
#include <string>
#include <vector>
#include "WorkflowExecutor.h"

using namespace std;

int main() {
    string s;
    int k;
    cout << typeid(k).name() << endl;
    vector<string> h (3, "aaaaaaa \n");
    WorkflowExecutor w1("config.txt");
    w1.execute();
    return 0;
}