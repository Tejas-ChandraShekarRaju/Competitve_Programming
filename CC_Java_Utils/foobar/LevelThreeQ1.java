package foobar;

import java.math.BigInteger;

/*
First way i thought of going about this problem is to generate the tree and level at which we arrive at required F&M is the asnwer

But we can also start from the required F&M and keep subtracting the larger number from the smaller number until both of them become one


*/

public class LevelThreeQ1 {

    public static void main(String[] args){

        //System.out.println(solution("4","7"));
        System.out.println(solution("2","1"));
    }

    public static String solution(String x,String y){
        BigInteger m = new BigInteger(x);
        BigInteger f = new BigInteger(y);
        String prevM = x;
        String prevF = y;
        BigInteger count = new BigInteger("-1");

            if(f.compareTo(m) ==1){
                  if(f.remainder(m).compareTo(BigInteger.valueOf(1)) == 1){
                        count = f.divide(m);
                        count = count.subtract(BigInteger.ONE);
                  }
                  else{
                    count = f.divide(m);
                  }
                  
                 f = f.subtract(m).multiply((f.divide(m)));

            }else{
                if(m.remainder(f).compareTo(BigInteger.valueOf(1)) == 1){
                    count = m.divide(f);
                    count = count.subtract(BigInteger.ONE);
              }
              else{
                  count = m.divide(f);
              }
                m = m.subtract(f).multiply(m.divide(f));
            }

            while(true){
                if(m.compareTo(BigInteger.valueOf(0)) ==1 && f.compareTo(BigInteger.valueOf(0)) ==1){
                }
                else{
                    break;
                }

                prevM = m.toString();
                prevF = f.toString();
                count  = count.add(BigInteger.ONE);

                if(f.compareTo(m) ==1){
                    f = f.subtract(m);
                }
                else{
                    m = m.subtract(f);
                }

            }

            if(prevM.equals("1") && prevF.equals("1")){
                return count.toString();
            }
            else{
                return "impossible";
            }

    }
    
}
