#include <iostream>
#include <vector>
#include <algorithm> // for sort and count
#include <cstdlib>   // for rand
#include <ctime>     // for seeding rand

using namespace std;

int main() {
    const int n = 1000;  // number of scores
    const int m = 10;    // number of queries

    int scores[n];
    int queries[m] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    // Seed the random generator
    srand(time(0));

    // Generate random scores from 0 to 100
    for (int i = 0; i < n; i++) {
        scores[i] = rand() % 101; // scores between 0 to 100
    }

    // Sort the scores
    sort(scores, scores + n);

    // Display sorted scores (optional)
    cout << "Sorted Scores: ";
    for (int i = 0; i < n; i++) {
        cout << scores[i] << " ";
    }
    cout << endl;

    // Process queries
    for (int i = 0; i < m; i++) {
        int q = queries[i];
        // Count how many times q appears in scores
        int count_q = count(scores, scores + n, q);
        cout << "Query [" << q << "] occurs " << count_q << " times.\n";
    }

    return 0;
}

/*
Step	Complexity
============================
Generating Random Scores	O(n)
Sorting Scores	O(n log n)
Processing m Queries	O(m * n) (each count() is O(n))

✅ Total Time Complexity:
O(n log n + m * n)

For better performance in large queries, you could use a map<int, int> to store frequency (O(n)), then query in O(1) — would reduce to O(n log n + n + m)

Item	Space
scores[n]	O(n)
queries[m]	O(m)
✅ Total Space Complexity: O(n + m)
*/