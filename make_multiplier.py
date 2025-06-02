def make_multiplier(x):
    def multiply(y):
        return y * x
    return multiply

multiplier_five = make_multiplier(5)
print(multiplier_five(3))
print(multiplier_five("Hi "))
