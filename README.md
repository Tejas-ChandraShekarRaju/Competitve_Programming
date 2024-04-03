## Sliding Window. 
1. Buy and Sell Stock 1
   KTA - Every Iteration we are using the lowest price in hand to calculate the profits.
         If the profit increases we will assign it to result
2. We dont need a hash map to check a value's existence. Given a unsorted array of positive integers. You can make values in 1 through n indexes negative. So if you want
   to check in an example [3,-4,3,5] if 2 exists. See if 2-1 = 1 index, the value is negative. If negative then it exists.
3. Most sliding window problems you need left and right pointers. It makes you think about the window easily.
4. Window lenght is right-left+1

   ### Practice Group 1
      1. https://leetcode.com/contest/weekly-contest-391/problems/count-alternating-subarrays/
      2. https://leetcode.com/problems/count-subarrays-where-max-element-appears-at-least-k-times/submissions/1222155038/ - Arriving at this solution is super hard. 

   
