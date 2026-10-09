# num1

# A = []
# n = int(input("How many elements do you want to enter? "))

# for i in range(n):
#     value = int(input(f"Enter element {i+1}: "))
#     A.append(value)

# print("Full list:", A)
# print("Every second element:", A[::2])

# num2

# A = []
# n = int(input("How many elements do you want to enter? "))

# for i in range(n):
#     value = int(input(f"Enter element {i+1}: "))
#     A.append(value)

# evens = [x for x in A if x % 2 == 0]
# print(evens)

# num3

# A = list(map(int, input("Enter numbers separated by spaces: ").split()))

# count = 0
# for i in range(1, len(A) - 1):
#     if A[i] > A[i - 1] and A[i] > A[i + 1]:
#         count += 1

# print(count)

# num4

# grades = list(map(int, input("Enter grades separated by spaces: ").split()))

# filtered_grades = []
# i = 0
# while i < len(grades):
#     if grades[i] == 2 and i + 1 < len(grades) and grades[i + 1] != 2:
#         i += 1
#     else:
#         filtered_grades.append(grades[i])
#         i += 1

# average = sum(filtered_grades) / len(filtered_grades)
# final_grade = int(average)
# print(final_grade)


# num5

# A = list(map(int, input("Enter numbers separated by spaces: ").split()))

# n = len(A)
# middle_index = (n - 1) // 2

# for x in A:
#     smaller_count = 0
#     for y in A:
#         if y < x:
#             smaller_count += 1
#     if smaller_count == middle_index:
#         print(x)

# num6

# A = list(map(int, input("Enter numbers separated by spaces: ").split()))

# A[1::2] = A[1::2][::-1]

# print(A)

# num7

# A = list(map(int, input("Enter numbers separated by spaces: ").split()))

# result = max(A, key=A.count)
# print(result)

# num8

# A = list(map(int, input("Enter numbers separated by spaces: ").split()))

# i_min = A.index(min(A))
# i_max = A.index(max(A))

# A[i_min], A[i_max] = A[i_max], A[i_min]

# print(A)


# num9

# A = list(map(int, input("Enter numbers separated by spaces: ").split()))
# k = int(input("Enter k: "))

# sums = [sum(A[i:i+k]) for i in range(len(A) - k + 1)]

# print(max(sums))
