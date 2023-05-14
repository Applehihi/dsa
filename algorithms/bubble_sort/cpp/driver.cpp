#include "bubble_sort.hpp"
#include <iostream>
#include <vector>
int main(void) {
    //Sort on array
    int unsorted_array[10] = {10, 7, 8, 9, 2, 3, 4, 1, 5, 6};
    int sorted_array[10];
    int check_array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::copy(unsorted_array, unsorted_array+10, sorted_array);
    std::cout<<"Bubble sort on array of 10 elements: \n";
    std::cout<<"Unsorted: ";
    for(auto i: unsorted_array) std::cout<<i<<' ';
    insertion_sort<int[10], int>(10, sorted_array);
    std::cout<<"\nSorted: ";
    for(auto i: sorted_array) std::cout<<i<<' ';
    for(int i=0;i<10;i++) {
        if(check_array[i]!=sorted_array[i]) {
            std::cout<<"\nArray did not sort properly";
            return -1;
        }
    }
    std::cout<<"\nArray sorted properly\n";
    
    //Descending sort
    int check_array_descending[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    std::copy(unsorted_array, unsorted_array+10, sorted_array);
    std::cout<<"\nDescending bubble sort on array of 10 elements: \n";
    std::cout<<"Unsorted: ";
    for(auto i: unsorted_array) std::cout<<i<<' ';
    insertion_sort<int[10], int>(10, sorted_array, [](int x, int y){ return x<y;});
    std::cout<<"\nSorted: ";
    for(auto i: sorted_array) std::cout<<i<<' ';
    for(int i=0;i<10;i++) {
        if(check_array_descending[i]!=sorted_array[i]) {
            std::cout<<"\nArray did not sort properly";
            return -1;
        }
    }
    std::cout<<"\nArray sorted properly\n";


    //Sort with std::vector
    std::vector<int> unsorted_vector = {10,6,7,4,2,9,8,3,1,5};
    std::vector<int> sorted_vector = unsorted_vector;
    std::cout<<"\nBubble sort on std::vector of 10 elements: \n";
    std::cout<<"Unsorted: ";
    for(auto i: unsorted_vector) std::cout<<i<<' ';
    insertion_sort<std::vector<int>, int>(10, sorted_vector);
    std::cout<<"\nSorted: ";
    for(auto i: sorted_vector) std::cout<<i<<' ';
    for(int i=0;i<10;i++) {
        if(check_array[i]!=sorted_vector[i]) {
            std::cout<<"\nVector did not sort properly";
            return -1;
        }
    }
    std::cout<<"\nVector sorted properly\n";

    //std::vector sort with mod 3
    sorted_vector = unsorted_vector;
    std::cout<<"\nBubble sort on std::vector of 10 elements with mod 3 comparison: \n";
    std::cout<<"Unsorted: ";
    for(auto i: unsorted_vector) std::cout<<i<<' ';
    insertion_sort<std::vector<int>, int>(10, sorted_vector, [](int x, int y){return x%3>y%3;});
    std::cout<<"\nSorted: ";
    for(auto i: sorted_vector) std::cout<<i<<' ';

    return 0;
}