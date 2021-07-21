#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool is_pos(double n) {
    return n > 0;
}

int main() {
    vector<double> nums;
    cout << "Type numbers separated by a space: ";
    while (1) {
        while (cin.peek() == ' ') cin.get();
        if (cin.peek() == '\n') break;
        double n;
        cin >> n;
        nums.push_back(n);
    }
    if (nums.size() == 0) {
        cout << "\nNo numbers entered.\n";
        return 0;
    }

    int count_pos = count_if(nums.begin(), nums.end(), is_pos);
    cout << "There are " << count_pos << " +ve numbers entered" << endl;

    vector<double>::iterator it = nums.begin();
    cout << "The first +ve number you've entered is " << *it << " and is located at " << &*it << endl;

    double sum = 0, largest = nums[0], smallest = nums[0];
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (nums[i] > largest)
            largest = nums[i];
        else if (nums[i] < smallest)
            smallest = nums[i];
    }

    cout << "\nAverage: " << sum / nums.size() << "\n";
    cout << "Smallest: " << smallest << "\n";
    cout << "Largest: " << largest << "\n";
    return 0;
}