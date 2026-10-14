# mypack.string_ops - тэмдэгт мөртэй ажиллах функцууд


def to_upper(text):
    return text.upper()


def reverse(text):
    return text[::-1]


def count_vowels(text):
    count = 0
    for ch in text.lower():
        if ch in "aeiouаэиоуөүеёыяю":
            count += 1
    return count
