#include <iostream>
using namespace std;

void twoSum(int nums[], int size, int target) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[i] + nums[j] == target) {
                cout << "Positions: " << i << " and " << j << endl;
                cout << "Numbers: " << nums[i] << " + " << nums[j] << " = " << target << endl;
                return;
            }
        }
    }
    cout << "No solution found" << endl;
}

int main() {
    int numbers[] = {2, 7, 11, 15};
    int target = 9;
    int size = 4;
    
    twoSum(numbers, size, target);
    return 0;
}