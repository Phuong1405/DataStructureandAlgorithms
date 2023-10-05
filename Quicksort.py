def partition(l, r, list):
  pivot = list[r] 
  ptr = l-1 #O(1)
  for i in range(l, r): #O(n)
    if list[i] <= pivot: #O(1)
      ptr = ptr + 1 #O(1)
      list[ptr], list[i] = list[i], list[ptr]

  list[ptr + 1], list[r] = list[r], list[ptr + 1]
  return ptr + 1 #O(1)
def quicksort(l,r,list):
  if len(list) ==1:
    return list
  if l < r:
    pi = partition(l,r,list)
    quicksort(pi+1,r,list)
    quicksort(1,pi-1,list)
    return list

print(quicksort(0, 2, [4, 1, 0]))
print(quicksort(0, 6, [4, 2, 8, 9, 7, 1, 3]))
