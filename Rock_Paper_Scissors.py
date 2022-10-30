import random
import os

rock = '''
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
'''

paper = '''
    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)
'''

scissors = '''
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
'''

game_images = [rock, paper, scissors]

os.system('cls')
user_choice=int(input("Enter 0 for rock, 1 for paper and 2 for scissors : "))
print()
print("User Choice : ",end="")
print(game_images[user_choice])
computer_choice=random.randint(0,2)
print("Computer Choice : ",end="")
print(game_images[computer_choice])
print()
if(user_choice==0):
    if(computer_choice==1) :
        print("You Lose")
    elif(computer_choice==user_choice) :
        print("Tie")
    else :
        print("Hurray ,You Won!!")
elif(user_choice==1):
    if(computer_choice==2) :
        print("You Lose")
    elif(computer_choice==user_choice) :
        print("Tie")
    else :
        print("Hurray ,You Won!!")
elif(user_choice==2):
    if(computer_choice==0) :
        print("You Lose")
    elif(computer_choice==user_choice) :
        print("Tie")
    else :
        print("Hurray ,You Won!!")
else :
    print("Wrong Choice")
