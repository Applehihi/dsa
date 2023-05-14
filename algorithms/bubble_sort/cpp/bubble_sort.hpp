//Bubble sort on some container
//No return as it's sorted in place
#include <algorithm>
template<typename List, typename T>
void insertion_sort(int n, List& list, bool (compare)(T first, T second) = [](T x, T y){return x>y;}) {
    for(int i = 1; i < n-1; i++) {
        for(int j = 0; j < n - i; j++) {
            if(compare(list[j], list[j+1])) {
                T temp;
                temp = list[j+1];
                list[j+1] = list[j];
                list[j] = temp;
            }
        }
    }
}