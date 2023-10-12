#!/usr/bin/python3
def is_palindrome(num):
    # Convert the number to a string and check if it reads the same forwards and backwards
    num_str = str(num)
    return num_str == num_str[::-1]

def largest_palindrome_product():
    largest_palindrome = 0

    for num1 in range(999, 99, -1):
        for num2 in range(num1, 99, -1):
            product = num1 * num2
            if product > largest_palindrome and is_palindrome(product):
                largest_palindrome = product

    return largest_palindrome

result = largest_palindrome_product()
print(result)

