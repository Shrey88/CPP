#include <iostream>
#include <bits/stdc++.h>

int increment (int x){
    return (x + 1);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);

    // apply increment method to all the elements from the array
    // and store them back to the same array.
    std::transform(arr, arr+n, arr, increment);

    for (int i = 0; i < n; i++){
        std::cout << arr[i] << std::endl;
    }

    return 0;
}