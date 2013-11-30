'''
Author: Max R. Berrios      
Description: Bioinformatician 
Date:  Nov 30, 2013  
Purpose: 
'''

import re


'''
Function will determine if the 
given String is a even 
binary number or not.
@param string: 
@return: Boolean 
'''

def evenBinaryReader(string):
    pattern = re.compile('[^a-zA-Z2-9][0|1]*[^a-zA-Z2-9][0]')
    matcher = pattern.match(string)
    
    if matcher == None:
        return None
    
    if string == matcher.group():
        return True
    else:
        return False
    


def main():
    m = ["max0","0max","001010100","0010111"]
    n = 1
    for i in m:
        print str(n)+") "+i+" :"+str(evenBinaryReader(i))
        n = n+1
        
main()
        
    
    
    
    