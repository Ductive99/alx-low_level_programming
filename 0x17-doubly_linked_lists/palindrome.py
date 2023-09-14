#!/usr/bin/python3
def palindrome_checker(n):
	s = str(n)
	return  s == s[::-1]

p = [0, 0, 0]
for a in range(100, 1000):
	for b in range(a, 1000):
		n = a * b
		if palindrome_checker(n) and n > p[2]:
			p = [a, b, n]

print("the largest palindrome made from the product of two 3-digit numbers is:")
print("{} = {} × {}" .format(p[2], p[0], p[1]))
