#coin exchange in python
# minimum no of ways to generate amount from given coins


coins=[1,2,5]
amount=11
# dynamic programming
#  creates a two dimensional array
arr=[amount+1]*(amount+1)
# assign zero for first index of array
arr[0]=0
#as first index is filled with zero 
# start loop from 1 to amount
for am in range(1,amount+1):
#take each coin 
    for co in coins:
# compare whether the difference[amount and coin]  is not negative
        if am-co>=0:
#assign min value at each index by comparing present value and 1(count of present value + value associated with arr[am-co]
            arr[am]=min(arr[am],1+arr[am-co])
#prints the minimum number of ways to get amount 
#11=5+5+2
#-1 if amount cant be made
print(arr[amount] if arr[amount]!=amount+1 else -1)

        