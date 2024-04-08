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
  
## Strings
1. https://leetcode.com/problems/lexicographically-smallest-string-after-operations-with-constraint/description/
   KTA - You cannot do inplace updates on strings in python/Java because Strings are immutable. Instead what i did in python is used a list to do in place update and later
   converted that list to string and returned the result. Finding normal distance between characters and cyclic distance. Just write down few examples and you'll figure out.
   Normal distance = s[i]-97-j -> j is a variable running through from 0-26. So If s[i]= a and you have to find distance to c then it'll be abs((97-97) - 2) = 2
   Cyclic distance = Noraml distance - 26 will be cyclic distance. Distance between a-z is 1 because of the cyclic nature. 

   
