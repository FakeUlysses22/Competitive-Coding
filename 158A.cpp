#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int n, k, contar = 0; cin >> n >> k; vector<int> nums(n);
    for (int &num : nums) {
        cin >> num; 
    }
    int threshold = nums[k - 1]; 
    for (const int num : nums) {
        if (num >= threshold && num > 0) {
            contar++;
        }
    }

    cout << contar << endl;
    return 0;
}