//Selection sort on some container
//No return as it's sorted in place
#include <algorithm>
template<typename List, typename T>
void selection_sort(int n, List& list, bool (compare)(T first, T second) = [](T x, T y){return x>y;}) {
    for(int i = 0; i < n; i++) {
        int cur_min_index = i;
        for(int j = i+1; j<n; j++) {
            if(compare(list[cur_min_index], list[j])) {
                cur_min_index = j;
            }
        }
        T temp = list[i];
        list[i] = list[cur_min_index];
        list[cur_min_index] = temp;
    }
}