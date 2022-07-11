#include <bits/stdc++.h> 
long long getInversions(long long *arr, int n){
    // Write your code here.
    int inv=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j])
                inv++;
        }
    }
    return inv;
}