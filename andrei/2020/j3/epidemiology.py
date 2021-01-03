#!/bin/python3
import time
p = int(input())
n = int(input())
r = int(input())
day = 0
x = [n]
while sum(x) <= p:
    day+=1
    x.append((x[day - 1] * r))
print(day)
