def maxValue(list):
  ans = 0 #O(1) #determine the counter
  for i in range(len(list)): #O(n)
    for ii in range(len(list)): #O(n)
      if list[i] > list[ans]: #O(1)
        ans = i #O(1)
  return ans #O(1)
print(maxValue([4, 1, 0]))
print(maxValue([1, 4, 2]))
#Linearithmic Time Complexity??????
#n**2