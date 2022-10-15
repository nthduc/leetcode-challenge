#include<iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) return false;

        while(n % 3 == 0) {
            n /= 3;
        }
        return n == 1;
    }
};

int main() {
    Solution sol;
    int n1{ 27 };
    int n2{ 0 };
    int n3{ -1 };

    cout << boolalpha << sol.isPowerOfThree(n1) << endl;
    cout << boolalpha << sol.isPowerOfThree(n2) << endl;
    cout << boolalpha << sol.isPowerOfThree(n3) << endl;
    return 0;

}
