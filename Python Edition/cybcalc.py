import time

def loading():
	animation = ['|', '/', '-', '\\']
	for i in range (6):
		print ("CYBERCALCULATOR STARTING: ", i * 20, "%", animation[i % 4], end='')
		print ('\r', end='')
		time.sleep(1)
	print (" ")

print (" ")
print ("<SYSYEM REBOOTING>")
time.sleep(2)
print ("[###             ]")
time.sleep(1)
print ("[#######         ]")
time.sleep(1)
print ("[################]")
time.sleep(1)
print ("<REBOOTING SUCCESSFUL>")
time.sleep(1)
print (" ")
print ("Johnny: Wake the fuck up samurai. We've got a city to burn.")
print (" ")
time.sleep(4)

loading()

time.sleep(1)
print (" ")
print (" ####   ####  ##      ####  ##  ## ##      ####  ######  ####  #####")
print ("##  ## ##  ## ##     ##  ## ##  ## ##     ##  ##   ##   ##  ## ##  ##")
print ("##     ###### ##     ##     ##  ## ##     ######   ##   ##  ## #####")
print ("##  ## ##  ## ##     ##  ## ##  ## ##     ##  ##   ##   ##  ## ##  ##")
print (" ####  ##  ## ######  ####   ####  ###### ##  ##   ##    ####  ##  ##")
print (" ")

act = input ("Select act: ")
a = float(input ("Enter first number: "))
b = float(input ("Enter second number: "))
if act == "+":
	c = a + b
elif act == "-":
	c = a - b
elif act == "*":
	c = a * b
elif act == "/":
	c = a / b
elif act == "%":
	c = a % b
elif act == "**":
	c = a ** b
elif act == "//":
	c = a // b
print (" ")

print ("Result: " + str(c))


# Created by h4cktivist
# In support of CYBERPUNK 2077
