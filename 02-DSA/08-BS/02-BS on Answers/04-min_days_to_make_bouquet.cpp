#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> bloomDay = {1, 10, 3, 10, 2};
    /*

    Position:    0    1    2    3    4
                 ↓    ↓    ↓    ↓    ↓
    bloomDay:   [1,  10,   3,  10,   2]

    Flower 0 → blooms on day 1
    Flower 1 → blooms on day 10
    Flower 2 → blooms on day 3
    Flower 3 → blooms on day 10
    Flower 4 → blooms on day 2

    */
    int m = 3;
    int k = 1;

    int needed_flowers = 1LL * m * k; // here 1LL means 1 as long long integer so that when m * n happens, int doesn't overflow.

    if (bloomDay.size() < needed_flowers) // edge case
        return -1;

    // pointers
    int left = *min_element(bloomDay.begin(), bloomDay.end());  // here the min_element iterates through array and gives min vals index and * gives us the value
    int right = *max_element(bloomDay.begin(), bloomDay.end()); // here the max_element iterates through array and gives max vals index and * gives us the value

    while (left < right)
    {
        int mid = (left + right) / 2; // left + (left + right)/2

        int consecutive = 0; // to count adjacent flowers
        int bouquets = 0;    // to count the bouquets we got.

        for (int i = 0; i < bloomDay.size(); i++)
        {
            if (bloomDay[i] <= mid)
            {
                consecutive++;

                if (consecutive == k)
                {
                    bouquets++;
                    consecutive = 0;
                }
            }
            else
            {
                consecutive = 0;
            }
        }

        if (bouquets >= m)
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }
    cout << left;

    return 0;
}