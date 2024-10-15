lst = [1,2,3]

lst.append(4)
print(lst)

lst.extend([5,6])
print(lst)

lst.insert(2, 7)
print(lst)

lst.remove(7)

print(lst.pop())
print(lst)

lst.clear()
print(lst)

lst = [1,2,3,2]
print(lst.index(2))
print(lst.count(2))

lst.sort()
print(lst)

lst.reverse()
print(lst)

lst_copy = lst.copy()
print(lst_copy)

