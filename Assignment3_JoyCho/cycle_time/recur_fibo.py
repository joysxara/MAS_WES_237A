#! /usr/bin/python

import time

# Program to calculate the Fibonacci sequence up to n-th term
nterms = 30

print(f"terms: {nterms}")
def recur_fibo(nterms):
   if nterms <= 1:
       return nterms
   else:
       return(recur_fibo(nterms-1) + recur_fibo(nterms-2))

tic = time.time()

# check if the number of terms is valid
if nterms <= 0:
   print("Please enter a positive integer")
else:
   recur_fibo(nterms)
        
tac = time.time()
print('time spent: {}'.format(tac-tic))
