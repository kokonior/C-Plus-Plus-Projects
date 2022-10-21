// Count quadruples(i, j, k, l) in an array such that i < j < k < l and arr[i] = arr[k] and arr[j] = arr[l]

#include <bits/stdc++.h>
    using namespace std;

// Function to count total number
// of required tuples
int countTuples(int arr[], int N)
{
    int ans = 0, val = 0;

    // Initialize unordered map
    unordered_map<int, int> freq;

    for (int j = 0; j < N - 2; j++)
    {
        val = 0;

        // Find the pairs (j, l) such
        // that arr[j] = arr[l] and j < l
        for (int l = j + 1; l < N; l++)
        {

            // elements are equal
            if (arr[j] == arr[l])
            {

                // Update the count
                ans += val;
            }

            // Add the frequency of
            // arr[l] to val
            val += freq[arr[l]];
        }

        // Update the frequency of
        // element arr[j]
        freq[arr[j]]++;
    }

    // Return the answer
    return ans;
}

// Driver code
int main()
{
    // Given array arr[]
    int arr[] = {1, 2, 1, 2, 2, 2};

    int N = sizeof(arr) / sizeof(arr[0]);

    // Function Call
    cout << countTuples(arr, N);

    return 0;
}
