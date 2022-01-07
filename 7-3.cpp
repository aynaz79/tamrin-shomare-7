#include <bits/stdc++.h>
using namespace std;

int recursiveBinarySerarch(int nums[], int low, int high, int target)
{
    if (low > high)
    {
        return -1;
    }

    int mid = (low + high) / 2;

    if (target == nums[mid])
    {
        return mid;
    }
    else if (target < nums[mid])
    {
        return recursiveBinarySerarch(nums, low, mid - 1, target);
    }
    else
    {
        return recursiveBinarySerarch(nums, mid + 1, high, target);
    }
}

int main(void)
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int array[n];
    cout << "Enter " << n << " elements:\n";
    for (int index = 0; index < n; ++index)
    {
        cin >> array[index];
    }
    int target;
    cout << "Enter target number: ";
    cin >> target;
    int low = 0, high = n - 1;
    int index = recursiveBinarySerarch(array, low, high, target);
    if (index != -1)
    {
        cout << "Target was found at index " << index;
    }
    else
    {
        cout << "Not found";
    }
    return 0;
}
