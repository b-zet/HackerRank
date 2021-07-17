// https://www.hackerrank.com/challenges/vector-sort/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,input;
    vector<int> data;

    cin >> n;

    for (int i=0; i<n; i++){
        cin >> input;
        data.push_back(input);
    }

    sort(data.begin(),data.end());

    for(auto i : data){
        cout << i << " ";
    }

    return 0;
}