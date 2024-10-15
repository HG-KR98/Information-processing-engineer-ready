# set
my_set = {1, 2, 3, 4, 5}

# add() 메서드
my_set.add(6)
print(my_set)

# remove() 메서드
my_set.remove(3)
print(my_set)

# discard() 메서드
my_set.discard(2)
my_set.discard(10)

# 요소가 없어도 오류 발생하지 않음
print(my_set)

# union() 메서드
another_set = {5,6,7,8}
union_set = my_set.union(another_set)
print(union_set) # {1,4,5,6,7,8}

# intersection() 메서드
intersection_set = my_set.intersection(another_set)
print(intersection_set)

# difference() 메서드
difference_set = my_set.difference(another_set)
print(difference_set)

# clear() 메서드
my_set.clear()
print(my_set)

# tuple
my_tuple = (1,2,3,4,5)

# tuple 선언 (원소 하나일 때)
single_element_tuple = (1,) # 쉼표가 필요함

# tuple 출력
print(my_tuple)
print(single_element_tuple)

# 특정 원소 접근
print(my_tuple[0])

# 여러 개의 원소를 가지는 튜플
multi_element_tuple = (1, 2, 3)

print(multi_element_tuple)

# tuple 선언
my_tuple = (1,2,3,4,5,3)

# count() 메서드
count_of_3 = my_tuple.count(3)
print(count_of_3)

# index() 메서드
index_of_4 = my_tuple.index(4)
print(index_of_4)