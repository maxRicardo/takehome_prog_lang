'''
Created on Dec 10, 2013

@author: ricardo
'''




import Image




#im = Image.open("test.jpeg")

def main():
    im  = Image.open("resized.jpg")
    
    print im.format, im.size, im.mode
    img = art_pic(im)
    img.show()
    img.save("art_result.jpg")


def art_pic(pict):
    w = getWidth(pict)
    h = getHeight(pict)
    
    newPict = makeEmptyPicture(w*2,h*2)
    copyInto(pict,newPict,1,1)
    copyInto(clearRed(pict),newPict,w+1,1)
    copyInto(clearGreen(pict),newPict,1,h+1)
    copyInto(clearBlue(pict),newPict,w+1,h+1)
    return newPict
    
    

def getWidth(img):
    return img.size[1]

def getHeight(img):
    return img.size[0]

def makeEmptyPicture(width,height):
    blank_image = Image.new("RGB",(height,width))
    return blank_image

def copyInto(img,blank_image,width,height):
    blank_image.paste(img,(height,width))
    
    
    
def clearBlue(img):
    
    source = img.split()
    
    blue_mask = source[2].point(lambda i: i > 130 and 255)
    green_mask = source[1].point(lambda i:i < 50 and 80)
    red_mask = source[0].point(lambda i: i < 50 and 80)

    imgB = Image.composite(source[2], img, blue_mask)
    imgG = Image.composite(source[1], imgB, green_mask)
    imgR = Image.composite(source[0], imgG, red_mask)



   
    return imgR


def clearGreen(img):
    
    source = img.split()
    
    green_mask = source[1].point(lambda i: i > 130 and 255)
    blue_mask = source[2].point(lambda i:i < 50 and 80)
    red_mask = source[0].point(lambda i: i < 50 and 80)

    imgG = Image.composite(source[1], img, green_mask)
    imgB = Image.composite(source[2], imgG, blue_mask)
    imgR = Image.composite(source[0], imgB, red_mask)



   
    return imgR





def clearRed(img):
    
    source = img.split()
    
    red_mask = source[0].point(lambda i: i > 130 and 255)
    blue_mask = source[2].point(lambda i:i < 50 and 80)
    green_mask = source[1].point(lambda i: i < 50 and 80)

    imgR = Image.composite(source[0], img, red_mask)
    imgB = Image.composite(source[2], imgR, blue_mask)
    imgG = Image.composite(source[1], imgB, green_mask)



   
    return imgG


main()