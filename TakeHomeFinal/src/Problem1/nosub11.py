
'''
Author: Max R. Berrios      
Description: Bioinformatician 
Date:  Nov 30, 2013  
Purpose: Final Takehome
'''
import re

'''
Function works telling if the string is made 
of binary and if it doesnt contain a substring 11

@param string: string to evaluate and determine if it is 
                in fact a string made just of "0" and "1"
                and if it contains substring 11
                
@return true if made of "0" and "1" and doesnt contain 
            substring "11" otherwise it return false
'''

def nosub11(string):
    pattern = re.compile("((0+1)|10+1)+")
    match = pattern.match(string)
    
    if match == None or match.group() != string:
        return False
    else:
        return True
    
    
    
def main():
    m = ["10010101","0010101", "100000111101010111","0111111111","110011000","max0011","00max1"]
    n = 0
    print "Does next binary numbers contain substring 11?\n"
    for i in m:
        print str(n)+")"+i+" :"+str(nosub11(i))
        n = n+1
        
main()