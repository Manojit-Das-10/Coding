#include<bits/stdc++.h>
using namespace std;

int calculateRosteringDays(int N, int M, vector<pair<int, int>> &friendships, int K) {
    vector<vector<int>> adj(N);  // Adjacency list for friendships
    vector<bool> currentStatus(N, true);  // Day 1: All employees are WFO (true)
    vector<bool> nextStatus(N, false);    // Stores WFO/WFH status for the next day

    // Build adjacency list
    for (auto &f : friendships) {
        adj[f.first].push_back(f.second);
        adj[f.second].push_back(f.first);
    }

    int totalRosteringValue = N;  // All N employees are in office on Day 1
    int days = 1;

    while (totalRosteringValue < K) {
        int dailyRosteringValue = 0;

        for (int i = 0; i < N; ++i) {
            int friendsInOffice = 0;

            for (int friendID : adj[i]) {
                if (currentStatus[friendID]) {
                    friendsInOffice++;
                }
            }

            // Determine next day's status for employee i
            if (currentStatus[i] && friendsInOffice == 3) {
                nextStatus[i] = true;
            } else if (!currentStatus[i] && friendsInOffice < 3) {
                nextStatus[i] = true;
            } else {
                nextStatus[i] = false;
            }

            // Increment daily rostering value if WFO
            if (nextStatus[i]) {
                dailyRosteringValue++;
            }
        }

        totalRosteringValue += dailyRosteringValue;
        currentStatus = nextStatus;  // Move to the next day
        days++;
    }

    return days;
}

int main() {
    int N, M, K;

    cout << "Enter the number of employees (N): ";
    cin >> N;

    cout << "Enter the number of friendships (M): ";
    cin >> M;

    vector<pair<int, int>> friendships(M);
    cout << "Enter the friendships (M pairs of employee IDs):\n";
    for (int i = 0; i < M; ++i) {
        int u, v;
        cin >> u >> v;
        friendships[i] = {u, v};
    }

    cout << "Enter the required rostering value (K): ";
    cin >> K;

    cout << "Answer is " << calculateRosteringDays(N, M, friendships, K) << endl;

    return 0;
}
