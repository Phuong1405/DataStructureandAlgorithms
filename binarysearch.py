def binarySearch(list, l, r, x):
  if r >= l:
    mid = l + (r - l) // 2
    if list[mid] == x:
      return mid
    elif list[mid] > x:
      return binarySearch(list, l, mid-1, x)
    else:
      return binarySearch(list, mid + 1, r, x)
  else:
    return -1
#logn
