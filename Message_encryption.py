alpha="a b c d e f g h i j k l m n o p q r s t u v w x y z a b c d e f g h i j k l m n o p q r s t u v w x y z"
alpha=alpha.split()
def password(shift,choice):
    message=""
    messgae_e=input("Enter your messge:\n")
    if(choice=="d"):
        shift *= -1
    for x in range(0,len(messgae_e)):
        if messgae_e[x] in alpha:
            position=alpha.index(messgae_e[x])
            message+=alpha[position+shift]
        elif " " in messgae_e[x]:
            message+=(f" ")
        else:
            message+=messgae_e[x]
    print(f"Your message is:\n {message}\n")
option=True
while (option):
    choice=input("Do you want to encrypt or decrypt your message e or d ?\n")
    shift=int(input("Enter the position you want your message to be shifted by?\n"))
    while(shift>=25):
        shift=shift%25
    choice=choice.lower()
    password(shift,choice)
    still=input("Do you still have any message y or n ? \n")
    still=still.lower()
    if(still=="n"):
        option=False
print("Program Exited!")
