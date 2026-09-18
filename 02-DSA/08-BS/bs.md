Binary Search is an efficient way to find an element in a sorted array.
    key idea is:
    Don't search one by one. Keep cutting the search area in half.

IMp note: ordinary binary search requires the array to be sorted.
________________________________________________________

BS can be used in problem involving:
    a sorted array 
    searching for a value
    finding first/last occurrence
    finding a boundary
    finding the minimum/maximum possible answer
________________________________________________________

There are two types of BS pattern :
    BS on an array where: 
        left = 0, 
        right = arr.size() - 1

    BS on answer where:
    General rule

    left  = smallest possible answer
    right = largest possible answer

    Common patterns:
    Problem type                  |         left          |           right
    -------------------------------------------------------------------------------------------------
    Minimum capacity / allocation |	Largest single value  |     Sum of all values
    Minimum speed	              |            1	      |     Maximum value
    Minimum days	              |      Minimum value    |     Maximum value
    Minimum divisor	              |            1	      |     Maximum value
    Maximum distance	          |            1          |     Maximum position − Minimum position
    Maximum minimum value	      | Minimum possible value|	    Maximum possible value

