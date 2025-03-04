# [Count the Number of Incremovable Subarrays II](https://leetcode.com/problems/count-the-number-of-incremovable-subarrays-ii/description/)
![](https://camo.githubusercontent.com/858e8f536149809d4ef763c54488c004b3e5bf3623d521f874534b27820acd09/68747470733a2f2f696d672e736869656c64732e696f2f62616467652f446966666963756c74792d486172642d726564)

You are given a **0-indexed** array of **positive** integers ```nums```.

A subarray of ```nums``` is called **incremovable** if ```nums``` becomes **strictly increasing** on removing the subarray. 
For example, the subarray ```[3, 4]``` is an incremovable subarray of ```[5, 3, 4, 6, 7]``` because removing this subarray 
changes the array ```[5, 3, 4, 6, 7]``` to ```[5, 6, 7]``` which is strictly increasing.

Return *the total number of **incremovable** subarrays of* ```nums```.

Note that an empty array is considered strictly increasing.

A subarray is a contiguous non-empty sequence of elements within an array.
