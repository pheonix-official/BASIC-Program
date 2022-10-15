a=float(input("Enter the price of the food:$"))
b=int(input("How much % tip would you like to give?"))
c=((b/100)*a)+a
d=int(input("How many people are there altogether?"))
e=round(c/d,2);
print(f"Each individual have to pay:${e}")
