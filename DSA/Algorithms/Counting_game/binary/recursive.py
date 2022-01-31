"""Demonstrating binary search algorithm by an recursive method using python"""

# Initializing an empty list to store the no.of tries 
no_of_tries = []

# Creating a binary search function
def binary_search(list1, low, high, x):

   if high >= low:
      mid = (high + low) // 2
      
      # Checking whether the element is in the middle of the list or not
      if list1[mid] == x:
          no_of_tries.append(mid)
          return mid

      # Conditions to check whether the element is on the left or on the right side of the list  
      elif list1[mid] > x:
          no_of_tries.append(mid)

          # Calling the function again (Recursion)
          return binary_search(list1, low, mid - 1, x)
      else:
          no_of_tries.append(mid)

          # (Recursion)
          return binary_search(list1, mid + 1, high, x)
   else:
      # Returns the index as -1 when the element is not in the list 
      return -1

# Sample list      
sample_list = [1, 2, 3, 4, 5, 6, 7, 8]

# The element that the Algorithm has to look for 
x = 1

# The result variable which stores the index of the element
result = binary_search(sample_list, 0, len(sample_list)-1, x)

# Condition to test if the index of the element is 0 i.e if the element is present or not
if result != -1:
   print("Element found")
   print("It took total " + str(len(no_of_tries)) + " no.of tries!") 
else:
   print("Element not found!")