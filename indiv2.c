n = int(input("How many records? "))

data = {}

for i in range(n):
    line = input()
    guest, dish, count = line.split()
    count = int(count)

    if guest not in data:
        data[guest] = {}

    if dish not in data[guest]:
        data[guest][dish] = 0

    data[guest][dish] += count

for guest in sorted(data):
    print(f"{guest}:")
    for dish in sorted(data[guest]):
        print(f"{dish} {data[guest][dish]}")
