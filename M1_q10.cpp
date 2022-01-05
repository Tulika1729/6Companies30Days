#include<bits/stdc++.h>

using namespace std;

class kLargest {
    priority_queue<int, vector<int>, greater<int>> minHeap;
    int k;

public:
    kLargest(int k) {
        this->k = k;
    }

    int add(int num) {
        if(minHeap.size() < k || num > minHeap.top()) {
            if(num > minHeap.top())
                minHeap.pop();
            
            minHeap.push(num);
        }
    }

    vector<int> get_k_largest() {
        list<int> res;

        while(!minHeap.empty()) {
            res.push_back(minHeap.top());
            minHeap.pop();
        }

        return vector<int>(res.begin(), res.end());
    }
};
