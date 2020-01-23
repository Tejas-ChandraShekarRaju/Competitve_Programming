#include<bits/stdc++.h>

using namespace std;

int no_of_set_bits(unsigned int n)
{
    int count = 0;
        while(n>0)
        {
            count+= (n&1);
            n = n>>1;
        }
    return count;    

}

unsigned int count_no_of_bits(int n)
{
    return (int) log2(n)+1;
}


unsigned int binary_to_decimal(unsigned int n)
{
    int base = 1;

    unsigned int dec_value = 0;

        for(int i=0;i<n;i++)
        {
            dec_value+=base;

            base = base<<1;
        }

    return dec_value;    
}

int main()
{
    int testCases;
    cin>>testCases;
        while(testCases--)
        {
            unsigned int n;

            cin>>n;

            int count = count_no_of_bits(n);

                if(no_of_set_bits(n)> count-1) 
                {
                    cout<<n<<endl;
                    continue;
                }

            

            cout<<binary_to_decimal(count-1)<<endl;


        }

    return 0;    
}