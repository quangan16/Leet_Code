using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.IO;


class Program
{
    static int Main(string[] args)
    {
        string? s;
        s = Console.ReadLine();
        System.Console.WriteLine(Solution.RomanToInt(s));
        return 0;
    }
    
}
public class Solution
{

    static Dictionary<char, int> romanDigits = new Dictionary<char, int>(){
        ['I']  = 1,
        ['V']  = 5,
        ['X']  = 10,
        ['L']  = 50,
        ['C']  = 100,
        ['D']  = 500,
        ['M']  = 1000,


    };
	
	public static int RomanToInt(string s)
	{
        int result = 0;
        
        for(int i = 0; i< s. Length-1; i++){
            if(romanDigits[s[i]]<romanDigits[s[i+1]]){
                result -= romanDigits[s[i]] ;
            }
            else{
                result += romanDigits[s[i]];
            }
            
           
        }
        return result + romanDigits[s[s.Length-1]];
    }

}

public enum Roman
	{
		I = 1,
		V = 5,
		X = 10,
		L = 50,
		C = 100,
		D = 500,
		M = 1000
	}