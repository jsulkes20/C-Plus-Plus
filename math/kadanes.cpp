/**
 * @file
 * @brief This program portrays a c++ implementation of the kadanes algorithm, which finds the maximum subarray sum
 
 * @details
 *  The purpose of Kadanes algorithm is to dynamically traverse through every sum of contiguous subarrays and find the largest sum 
 *  of positive contiguous segments. First, the program goes through every positive continuous segment (possible subarrays). The variable 
 *  maxTemp keeps track of all the different sums of possible subarrays. If the subarray sum number goes below 0, it is set back to 0 because the 
 * biggest sum is never 0
 *  
 * @author [Joseph Sulkes](https://github.com/jsulkes20)
 * @return the 
 */
#include<climits>
#include<iostream>
using namespace std;

int Kadanes(int arr[], int size)
{
  //  maxTemp is used to find every positive continuous segment 
  //  maxSum is the maximum subarray sum, which is returned
    int maxSum = INT_MIN; 
    int maxTemp = 0;
    for (int i = 0; i < size; i++)
    {
        maxTemp+= arr[i]; //add each element in the array to the subarray to change maxTemp and check every subarray 
        if(maxSum < maxTemp) {
          maxSum=maxTemp; //maxSum ends up as the biggest subarray sum
        }
        if(maxTemp<0) {
          maxTemp=0; //if the segment is ever negative, set it to 0 because the biggest subarray sum will never be a negative
        }   
}
 return maxSum;
}

void printArr(int arr[], int size)
{
    for (int i=0; i < size; i++)
    cout << arr[i] << " ";
    cout << endl;
}
 

 
int main()
{
    int arr[] = {5,3,-2,4,-5,1,-4};
     int size = sizeof(arr)/sizeof(arr[0]);
    cout<< "Array example 1 is: \n"; 
    printArr(arr, size);
    int max = Kadanes(arr, size);
    cout << "The maximum contiguous sum is " << max<<endl;
     int arr1[] = {-2,-4,2,-1,6,-3};
      int size2 = sizeof(arr1)/sizeof(arr1[0]);
    cout<< "Array example 2 is: \n"; 
    printArr(arr1, size2);
    int max2 = Kadanes(arr1, size);
    cout << "The maximum contiguous sum is "<< max2<<endl;
    int arr2[] = {-6,3,-4,8,-2,-3,5,-9};
      int size3 = sizeof(arr2)/sizeof(arr2[0]);
    cout<< "Array example 3 is: \n"; 
    printArr(arr2, size3);
    int max3 = Kadanes(arr2, size3);
    cout << "The maximum contiguous sum is " << max3<<endl;
    return 0;
}
