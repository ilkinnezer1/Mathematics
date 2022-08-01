#include <iostream>
#include <cmath>

// Mode is very useful in statistics; 
// It defines an element that's most frequency in a given array;
// Time complexity is calculated by adding input size and max value in a given array
// As a result O(size + max)

void findMode(int arr[], int size)
{
    // maximum element in the array
    int maxElement = *std::max_element(arr, arr + size);
    int temp = maxElement + 1;
    int modeFrequency[temp];

    for(int i = 0 ; i <  temp; ++i){
        modeFrequency[i] = 0;
    }

    // Storing each input frequency
    for(int j = 0; j < size; ++j)
        modeFrequency[arr[j]]++;
    
    int mode = 0;
    int frequency = modeFrequency[0];
    for(int i = 1; i< temp; ++i){
        if(modeFrequency[i] > frequency) {
            frequency = modeFrequency[i];
            mode = i;
        }
    }

    std:: cout<< "mode is: " << mode;
}

int main(){
    int arr[] = {1,2,4,2,12,321,31,2321,3,12,3,2,1};
    int size = sizeof(arr) / sizeof(int);
    findMode(arr, size);
}