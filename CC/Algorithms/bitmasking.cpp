#include<iostream>

using namespace std;

/*
division O(n^2)
multiplication O(n^2)
modulo O(n^3)

***Tricks came across****

AND use it to test whether a number is odd or even (n&1)
XOR to convert a number n to m how many bit changes do you have to make 
XOR use  to check if two numbers are same if yes you will get zero 



***Significance***
   Right shift is a/2^n
   Left Shift is a*2^n


*/

//count no of bits
unsigned countBits(unsigned int number) 
{	 
	// log function in base 2 
	// take only integer part 
	return (int)log2(number)+1; 
} 

// how many bits are set

int no_of_set_bits(int n)
{
    int count = 0;
        while(n>0)
        {
            count+= (n&1);
            n = n>>1;
        }
    return count;    

}

void XOR_swap(int a,int b)
{
    a = a^b;
    b = b^a;
    a = a^b;
}

int extract_ith_bit(int n,int i)
{
    n = n&(1<<i);
    return n;

}

int change_ith_bit(int n,int i)
{

    n^(1<<i);
    return n;
}

int clear_ith_bit(int n,int i)
{
    n = n & ~(1<<i);
    return n;
}
//binary to decimal conversion

int binary_to_decimal(int n)
{
    
    
    int base = 1;
    
    int dec_value= 0;
    
        while(n)
        {
            int last_digit = n%10;
            n = n/10;
            
            dec_value+= last_digit*base;
            
            base*=2;
        }
    return dec_value;
}
                



