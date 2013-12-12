'''
Created on Dec 10, 2013

@author: ricardo
'''

from PIL import Image


im = Image.open("dna.jpeg")

try:
    im.save("outpic.jpeg","JPEG")
except:
    print "cannot print the pic"

print im.format,im.size,im.mode

im = Image.open("dna.jpeg").convert("RGB")
im.show()

