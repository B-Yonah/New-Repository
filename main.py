def count_lower_upper(string):

    count_upper = 0
    count_lower = 0
    for i in string:
        if i.isupper():
            count_upper = count_upper + 1
            
        elif i.islower():
            count_lower = count_lower + 1


    return {count_upper, count_lower}

string = "Sachin Singh"
count_lower_upper(string)

print(count_lower_upper(string))

    