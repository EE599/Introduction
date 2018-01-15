# The sample code is based on a simple bubble sort algorithm

N = int(input('Please provide the number of elements to sort on command line '))
num_list = [N-x for x in range(N)]

for i in range(0,N):
  for j in range(0,N-i-1):
    if num_list[j]>num_list[j+1]:
      temp = num_list[j]
      num_list[j] = num_list[j+1]
      num_list[j+1] = temp
print (num_list)
