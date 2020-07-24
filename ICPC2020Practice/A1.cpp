#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int N;
int nums[300000];

int main() {
	freopen("sort.in", "r", stdin);
	freopen("sort.out", "w", stdout);
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    qsort(nums);

    for (int i = 0; i < N; i++) {
        cout << nums[i];
    }
    
}
