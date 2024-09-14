#include<bits/stdc++.h>
using namespace std;


int minimumClicksToReachEndPage(int N, vector<vector<int>>& pages, int start_page, int end_page) {
    vector<vector<int>> links(N + 1);
    
    for (int i = 1; i <= N; i++) {
        links[i] = pages[i - 1];
    }

    vector<bool> visited(N + 1, false);
    queue<pair<int, int>> q;
    q.push({start_page, 0});

    while (!q.empty()) {
        int current_page = q.front().first;
        int clicks = q.front().second;
        q.pop();

        if (current_page == end_page) {
            return clicks;
        }

        visited[current_page] = true;

        for (int linked_page : links[current_page]) {
            if (!visited[linked_page]) {
                q.push({linked_page, clicks + 1});
            }
        }
    }

    return -1; // If end page cannot be reached
}

int main() {
    int N;
    cout<<"enter the value of N :";
    cin >> N;

    vector<vector<int>> pages(N);
    for (int i = 0; i < N; i++) {
        int L;
        cout<<"Input L :"<<endl;
        cin >> L;
        pages[i].resize(L);
        for (int j = 0; j < L; j++) {
            cin >> pages[i][j];
        }
    }

    int start_page, end_page;
    cout<<"Enter start page :";
    cin >> start_page;
    cout<<"Enter End page :";
    cin>> end_page;

    int result = minimumClicksToReachEndPage(N, pages, start_page, end_page);

    cout <<"The result is : "<< result << endl;


return 0;
}