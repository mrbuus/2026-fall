# Лаборатори №14-2, Даалгавар 3
# word_length(word)   - үгийн уртыг буцаана.
# is_palindrome(word) - урвуулахад ижил үг бол True. Жишээ: "level" -> True


def word_length(word):
    return len(word)


def is_palindrome(word):
    return word == word[::-1]


ug = input("Үг оруул: ")

print("Үгийн урт:", word_length(ug))
print("Палиндром эсэх:", is_palindrome(ug))
