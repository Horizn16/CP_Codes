def can_divide_watermelon(i):
    if i%2==0 and i>2 :
        return ("YES")
    else:
        return ("NO")

w = int(input().strip())

print(can_divide_watermelon(w))