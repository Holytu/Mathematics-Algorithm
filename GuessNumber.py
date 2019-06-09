import random

print("Try until success!\n")
r = random.randint(1, 10)

while True :
	c = input("Input a Number ")
	if c == r :
		print("Number is %d" %c)
		break
	elif c < r :
		print("Number is bigger than %d" %c)
		
	else :
		print("Number is smaller than %d" %c)

