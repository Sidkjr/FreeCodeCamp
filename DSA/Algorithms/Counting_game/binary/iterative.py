"""Demonstrating binary search algorithm by an iterative method using python"""

# Importing numpy to create an array
import numpy as np

# Creating an empty list to store the number of tries it took
no_of_tries = []

# Creating a function that searches the array according to the index of the elements in the array
def binarySearch(array, x, low, high):

    # Where low is the 0th index and high is the ending index of the array
    while low <= high:

        # Finding the middle index element to execute binary search algorithm
        mid = low + (high-low) // 2

        # Setting up conditions for the program to decide to traverse left or right of the array
        if array[mid] == x:
            no_of_tries.append(mid)
            return mid

        elif array[mid] < x:
            low = mid + 1
            no_of_tries.append(mid)
        else:
            high = mid - 1
            no_of_tries.append(mid)
    return -1

# Sample array to execute the binary search upon
array = np.array([1, 2, 3, 4, 5, 6, 7, 8])

# Where x is the element that we are looking for
x = 8

# Result variable will store the index at which the element x is present at
result = binarySearch(array, x, 0, len(array)-1)

# If the index value is not negative, the element is found
if result != -1:
    print("The number is present")
    print("The number of tries it took was ", str(len(no_of_tries)))

# Otherwise if the number was not in the list then simply print not found.
else: 
    print("The number was a not found!")