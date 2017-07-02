number_list = range(-10, 10)
list(filter(lambda x: x<0,number_list))

less_than_zero = list(filter(lambda x: x < 0, number_list))
print(less_than_zero)

