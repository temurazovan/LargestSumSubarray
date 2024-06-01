#include <iostream>

int maxSubArraySum(int a[], int size)
{
    int max_so_far = 0, max_ending_here = 0;

    for (int i = 0; i < size; i++) {
        max_ending_here += a[i];

        if (max_so_far < max_ending_here) {
            max_so_far = max_ending_here;
        }
        if (max_ending_here < 0) {
            max_ending_here = 0;
        }
    }

    return max_so_far;
}

int main()
{
    int a[] = {-2, 1, -3, 4, -1 ,2 ,1 ,-5 ,4};
    int size = sizeof(a) / sizeof(a[0]);

    int max_sum = maxSubArraySum(a, size);
    std::cout << "Maximum sum is " << max_sum;

    return 0;
}
