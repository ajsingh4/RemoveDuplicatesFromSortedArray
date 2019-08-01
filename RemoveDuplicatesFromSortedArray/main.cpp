//
//  main.cpp
//  RemoveDuplicatesFromSortedArray
//
//  Created by Aj Gill on 8/1/19.
//  Copyright © 2019 Aj Gill. All rights reserved.
//

#include <iostream>
#include <vector>

//For ease of access
using namespace std;

void removeDuplicates(vector<int> &nums){
    int slowPtr = 0;
    for(int i=0; i<nums.size(); i++){
        //If the number doesnt equal the next one, it is unique
        if(nums[i] != nums[i+1]){
            //Rewrite initial positions in the list with unique numbers
            nums[slowPtr] = nums[i];
            slowPtr++;
        }
    }
    //Resize the vector to just include upto the unique values
    nums.resize(slowPtr);
}

int main() {
    vector<int> nums = {1,1,3,3,5,5,7,7,9,9,9,9,9,9,9};
    removeDuplicates(nums);
    cout << "The sorted array of numbers without duplicates: ";
    for(int i=0; i<nums.size(); i++){
         cout << nums[i] << ", ";
    }
    cout << "\nThe length of the array without duplicates is " << nums.size() << "\n";
}
