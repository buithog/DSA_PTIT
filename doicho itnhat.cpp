// C++ program to find
// minimum number of swaps
// required to sort an array
#include <bits/stdc++.h>
using namespace std;

int minSwaps(int nums[], int n)
{
    int len = n;
    map<int, int> map;
    for (int i = 0; i < len; i++)
        map[nums[i]] = i;
  
    sort(nums, nums + n);
  
    // To keep track of visited elements. Initialize
    // all elements as not visited or false.
    bool visited[len] = { 0 };
  
    // Initialize result
    int ans = 0;
    for (int i = 0; i < len; i++) {
  
        // already swapped and corrected or
        // already present at correct pos
        if (visited[i] || map[nums[i]] == i)
            continue;
  
        int j = i, cycle_size = 0;
        while (!visited[j]) {
            visited[j] = true;
  
            // move to next node
            j = map[nums[j]];
            cycle_size++;
        }
  
        // Update answer by adding current cycle.
        if (cycle_size > 0) {
            ans += (cycle_size - 1);
        }
    }
    return ans;
}

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		cout<<minSwaps(a,n)<<endl;;
	}
}

