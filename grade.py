# Code written by Vaibhav AKA Surreal

marks = int(input())

if( 75 <= marks <= 100):
	grade = "A"
elif( 65 <= marks < 75):
	grade = "B"
elif( 55 <= marks < 65):
	grade = "C"
elif( 35 <= marks < 55):
	grade = "S"
elif( 0 <= marks < 35):
	grade ="F"

print(grade)
