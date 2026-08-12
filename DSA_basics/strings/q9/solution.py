def count_vowel(s):
    count = 0
    for i in s:
       if i in "aeiouAEIOU":
           count += 1
    return count

s = "Hello world"
print("The number of vowels in given string are:",count_vowel(s))