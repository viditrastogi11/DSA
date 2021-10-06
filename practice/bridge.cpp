#include <bits/stdc++.h>
using namespace std ;

int dp[501] ;

int solve(vector<vector<int>> &arr, int curr, int n ,int m){
    if(arr[curr][1] >= n)
        return 2 ;
    if(curr >= m-1)
        return INT_MAX ;
    if(dp[curr] != -1)
        return dp[curr] ;
    int res = INT_MAX ;
    for(int i = curr+1 ; i < m ; i++){
        if(arr[i][0] <= arr[curr][1]){
            int t = arr[curr][1] - arr[i][0] + 1 ;
            res = min(res, 2+t+solve(arr, i, n, m)) ;
        }
        else if(arr[i][0] == arr[curr][1]+1){
            res = min(res, 2+solve(arr, i, n, m)) ;
        }
    }
    //cout << res << " " ;
    if(arr[curr][0] >= arr[curr+1][0])
        res = min(res, solve(arr, curr+1, n, m)) ;
    return dp[curr] = res;
}

int main(){
    int n, m, x, y ;
    cin >> n >> m ;
    vector<vector<int>>vec ;
    vector<int> t(2) ;
    for(int i = 0 ; i < m ; i++){
        cin >> x >> y ;
        t[0] = x ;
        t[1] = y ;
        vec.push_back(t) ;
    }
    memset(dp, -1, sizeof(dp)) ;
    sort(vec.begin(), vec.end()) ;
    /*
    for(auto v : vec){
        for(auto z : v)
            cout << z << " " ;
        cout << endl ;
    }
    */
    int temp = solve(vec, 0, n, m) ;
    if(temp < 0)
        cout << -1  << endl ;
    else
        cout << temp << endl ;
    return 0 ;
}
