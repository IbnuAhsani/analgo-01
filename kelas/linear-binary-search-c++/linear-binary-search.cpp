#include <chrono>
#include <fstream>
#include <iostream>

using namespace std; 
using namespace std::chrono;
  
int linearSearch(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
} 

int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 

        if (arr[mid] == x) 
            return mid; 

        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 

        return binarySearch(arr, mid + 1, r, x); 
    } 

    return -1; 
} 
  
int main(void) 
{ 
    int arrayMaxValues[7] = {100, 200, 400, 500, 700, 800, 1000};

    ofstream myfile;
    myfile.open ("search-result.txt");

    for(int arrayMaxValue : arrayMaxValues ){
        int array[arrayMaxValue];

        for(int i = 0; i < arrayMaxValue; i++)
        {
            array[i] = i;
        }

        int x = 0 + (rand() % static_cast<int>(arrayMaxValue - 0 + 1));

        myfile <<"Mencari nilai "<<x<<" pada array berisi "<<arrayMaxValue<<" elemen.\n";

        auto startLinear = high_resolution_clock::now();
        int resultLinear = linearSearch(array, arrayMaxValue, x); 
        auto stopLinear = high_resolution_clock::now();
        
        auto startBiner= high_resolution_clock::now();
        int resultBiner= linearSearch(array, arrayMaxValue, x); 
        auto stopBiner= high_resolution_clock::now();

        auto durationLinear = duration_cast<nanoseconds>(stopLinear - startLinear);
        myfile << "Waktu yang dibutuhkan metode Linear: "<< durationLinear.count() <<" nanoseconds\n";

        auto durationBiner = duration_cast<nanoseconds>(stopBiner - startBiner);
        myfile << "Waktu yang dibutuhkan metode Biner: "<< durationBiner.count() <<" nanoseconds\n\n";
    }

    myfile.close();

   return 0; 
} 