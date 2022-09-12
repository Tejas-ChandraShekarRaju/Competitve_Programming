package foobar;

import java.math.BigInteger;

/*
I initially though we migth have to generate all subsets and check the maximum product which is also true but below points will suffice.

1.The truth lies in keeping track of the negative count, zero count and the max_negative_num.

2.If the set did not contain zeroes and negative values, the whole set's product is the answer.

3.Since it contains both performing 1 will let us handle the edge cases.

*/

public class LevelTwoQ2 {

    public static void main(String[] args){
        System.out.println(maximumProductSubsequence(new int[]{2,0,2,2,0}));
        System.out.println(maximumProductSubsequence(new int[]{-2,-3,4,-5}));
        System.out.println(maximumProductSubsequence(new int[]{2,-3,1,0,-5}));

        int[] arr = new int[50];
            for(int i = 0;i<50;i++){
                arr[i] = 1000;
            }
        BigInteger res = maximumProductSubsequence(arr);
        System.out.println(res.toString());
        System.out.println(maximumProductSubsequence(new int[]{-5   }));
    }

    public static BigInteger maximumProductSubsequence(int[] set) {
        int n = set.length;
        if(n==1){
            return BigInteger.valueOf(set[0]);
        }
        BigInteger product = new BigInteger("1");
        int zeroCount = 0,negativeCount = 0;
        int maxNegative = Integer.MIN_VALUE;
        
            for(int i=0;i<n;i++){
                if(set[i] == 0){
                    zeroCount+=1;
                    continue;
                }

                else if(set[i] < 0){
                    negativeCount+=1;
                    maxNegative = Integer.max(maxNegative,set[i]);
                }
                product = product.multiply(new BigInteger(Integer.toString(set[i])));
            }
        if(zeroCount==n){
            return BigInteger.valueOf(0);
        }
        else if(negativeCount == 1 && zeroCount+negativeCount == n ){
            return BigInteger.valueOf(0);
        }
        else if((negativeCount & 1) > 0){// checking if negative count in odd, if odd then eliminate one negative element
            product = product.divide(new BigInteger(Integer.toString(maxNegative)));
        } 

        return product;
    }


    
}
