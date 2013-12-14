Problem 5 implementation:

This Solution came with two parts :

Part 1 [ Implementation ]:
  
  1. openmp_implementations.h and openmp_implementations.c :
    this implementation contains the 3 functions needed to 
    run and test the scheduling on the parallelization object
    
     a. Static(timesdelay,nowait) => uses the static schedule
     b. Dynamic(timesdelay,nowait) => uses dynamic schedule
     c. Guided(timesdelay,nowait) => uses guided schedule
     
     for this fucntions the timedelay is the times the delay dummy func
     was going to iterate on the thread when started. The nowait value 
     goes from 0-1 and is to select if the Thread will wait or nowait 
     meaninig the function will be or not active in the scheduling 
     
     delay() => is a function repeating an iterator for over 50000 times 
     
  2. main.c :
    This code is just a main control to the execution with a certain range taken to 
    make the graphs and discussion result for the problem solution.
    
Part 2 [ Discussion ] :

  1. problem5_discussion.docx :
      Contains the discussion of the implementation results as the comparison 
      of them and opinions for usage
  2. graphs_Implementations.pdf:
      Reference, It contains the graphs for the discussion of the implementation
      they are distributed as follow :
        
        Figure A : { Dynamic Schedule }
          1. nowait time exec per thread on delay point
          2. no-nowait time exec per thread on delay point
          3. nowait Times thread was activated per delay point
          4. no-nowait Times the Thread was activated per delay point
          
        Figure B : { Static Schedule }
          1. nowait time exec per thread on delay point
          2. no-nowait time exec per thread on delay point
          3. nowait Times thread was activated per delay point
          4. no-nowait Times the Thread was activated per delay point
        
        Figure C: { Guided Schedule }
          1. nowait time exec per thread on delay point
          2. no-nowait time exec per thread on delay point
          3. nowait Times thread was activated per delay point
          4. no-nowait Times the Thread was activated per delay point
