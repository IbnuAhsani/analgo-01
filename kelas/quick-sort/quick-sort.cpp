#include<stdio.h>
#include <chrono>
#include <fstream>
#include<iostream>

using namespace std;  
using namespace std::chrono;

void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 

int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high]; 
    int i = (low - 1);
  
    for (int j = low; j <= high- 1; j++) 
    {  
        if (arr[j] <= pivot) 
        { 
            i++; 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        int pi = partition(arr, low, high); 
   
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 
  
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
} 
  
int main() 
{ 
    int arrayMaxValues[7] = {100, 200, 400, 500, 700, 800, 1000};

    ofstream myfile;
    myfile.open ("quick-sort-result.txt");

    for(int arrayMaxValue : arrayMaxValues ){
        int array[arrayMaxValue];

        for(int i = 0; i < arrayMaxValue; i++)
        {
            array[i] = 0 + (rand() % static_cast<int>(arrayMaxValue - 0 + 1));
        }

        myfile <<"Mensortir array dengan elemen sebanyak "<<arrayMaxValue << endl;

        auto startSort = high_resolution_clock::now();
        quickSort(array, 0, arrayMaxValue-1); 
        auto stopStort = high_resolution_clock::now();

        auto durationLinear = duration_cast<nanoseconds>(stopStort - startSort);
        myfile << "Waktu yang dibutuhkan metode Linear: "<< durationLinear.count() <<" nanoseconds"<<endl<<endl;
    }

    myfile.close();
    
    return 0; 
} 