n = int(input())
for i in range(n):
  st = []
  line = input()
  correct = True
  for l in line:
    if l == '(':
      st.append(1)
    elif l == ')':
      if len(st) != 0:
        st.pop()
      else:
        correct = False
        break
  if len(st) != 0:
    correct = False
  if correct:
    print("YES")
  else:
    print("NO")