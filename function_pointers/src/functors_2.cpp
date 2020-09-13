#include "../header/functors_2.h"

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);
    int to_add = 5;

    // functors is similar to the function pointers
    // the below line is same as writing below two lines
    //      creating object: increment obj(to_add)
    //      passing the object : transform(arr, arr+n, arr, obj)
    std::transform(arr, arr+n, arr, increment(to_add));

    for(int i = 0; i < n; i++){
        std::cout << arr[i] << std::endl;
    }

    return 0;
}