from prettytable import PrettyTable
table=PrettyTable()
c=int(input("Enter the number of columns:\n"))
data=[]
choice=""
more=True
print("If you want to stop adding item press n")
for i in range(1,c+1):
  item=input("Enter the Heading:\n")
  while more:
    choice=input("Enter the item's name:\n").lower()
    if(choice=="n"):
      break
    data.append(choice)
  table.add_column(item,data)
  data=[]
  more=True
print(table)
