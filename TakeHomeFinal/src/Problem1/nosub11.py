
'''
Author: Max R. Berrios      
Description: Bioinformatician 
Date:  Nov 30, 2013  
Purpose: 
'''
import re



def nosub11(string):
    pattern = re.compile("((0+1)|10+1)+")
    match = pattern.match(string)
    
    if match == None:
        return None
    elif match.group() == string:
        return True
    else:
        return False
    
    
    
def main():
    m = ["10010101","0010101", "100000111101010111","0111111111","110011000","max0011","00max1"]
    n = 0
    print "Does next binary numbers contain substring 11?\n"
    for i in m:
        print str(n)+")"+i+" :"+str(nosub11(i))
        n = n+1
        
main()