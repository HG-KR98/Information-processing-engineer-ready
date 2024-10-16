string = "Hello, World!"
sliced_variable = string[0:5]
print(sliced_variable)

substring = string[-6:-1]
print(substring)

substring2 = string[::2]
print(substring2)

quote = "그가 말하길, '파이썬은 정말 놀라워!'"
print(quote)

quote = '그녀가 대답하길, "정말 그래!"'
print(quote)

fruits_and_veggies = ["apple", "banana", "carrot"]
print(f"첫 번째 문자열: {fruits_and_veggies[0]}")
print(f"두 번째 문자열: {fruits_and_veggies[1]}")
print(f"세 번째 문자열: {fruits_and_veggies[2]}")

formatted_string = "안녕하세요, 제 이름은 %s입니다. 내년에는 %d살이 됩니다. I have a %s, a %s, and a %s."%(name, next_year_age(age), fruits_and_veggies[0], fruits_and_veggies[1], fruits_and_veggies[2])
print(formatted_string)

formatted_string2 = "안녕하세요, 제 이름은 {}입니다. 내년에는 {}살이 됩니다. I have a {}, a {}, and a {}.".format(name, next_year_age(age), fruits_and_veggies[0], fruits_and_veggies[1], fruits_and_veggies[2])
print(formatted_string2)

formatted_string3 = f"안녕하세요, 제 이름은 {name}입니다. 내년에는 {next_year_age(age)}살이 됩니다. I have a {fruits_and_veggies[0]}, a {fruits_and_veggies[1]}, and a {fruits_and_veggies[2]}."
print(formatted_string3)