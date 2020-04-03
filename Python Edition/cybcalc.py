import time

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
print ("Cyber-Calculator starting...")
time.sleep(1)
print ("10%...50%...70%...100%.")
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
