current = input("Enter current time (HH:MM): ")
h, m = map(int, current.split(":"))
current_min = h * 60 + m

n = int(input("How many passengers? "))

late = []
soon = []
later = []

for i in range(n):
    line = input(f"Enter passenger {i+1} (Name HH:MM): ")
    name, time_str = line.split()
    th, tm = map(int, time_str.split(":"))
    t = th * 60 + tm

    if t < current_min:
        late.append((t, name))
    elif t <= current_min + 30:
        soon.append((t, name))
    else:
        later.append((t, name))

late.sort()
soon.sort()
later.sort()

for t, name in late:
    print(f"{name} (late)")
for t, name in soon:
    print(f"{name} (within 30 min)")
for t, name in later:
    print(name)
