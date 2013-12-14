Problem 4 implementation:
============================

1. Picasso_Imaging.py :
  This is the code that contains the solution to the problem 4.
  This implementation was done using the Image module from the PIL
  (Python Image Library). The implementaion takes the  color red, green 
  blue from the image and makes some sort of mosaic with the image taking the selected
  color on each block of a 4 block compound image. 
  
  The clear color process:
    This process is just a masking of the real image,
    in the implementation i took split the image in RGB 
    regions and mask them with white if the selected region is over 120 
    this over the original image present a result as if the collor has been taken 
    and the block looks empty on that precise spot
