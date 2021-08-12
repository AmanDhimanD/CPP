int Solution::numSetBits(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
     int c = 0;
    /*while(A)  //Simple O(log n) approach
    {
        if (A & 1)
            ++c;
        A >>= 1;
    }*/
    while(A!=0) //Brian Kernighan’s Algorithm: iterates only over set bits
    {
        A &= A-1;
        ++c;
    }
    return c;
}
