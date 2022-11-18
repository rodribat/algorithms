


import re

d = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}

def roman2dec(number):

    if re.search('^(IL|IC|ID|IM|VC|VD|VM|XD|XM|LM)+$', number):
        return(-1)

    last = d[number[len(number)-1]]
    accum = last

    if len(number) == 1:
        return(last)

    for i in reversed(range(len(number)-1)):
        current = d[number[i]]
        last = d[number[i+1]]

        if current >= last:
            accum += current
        else:
            accum -= current
    
    return(accum)

print('II', ' - ', roman2dec('II'))
print('IV', ' - ', roman2dec('IV'))
print('IX', ' - ', roman2dec('IX'))
print('IM', ' - ', roman2dec('IM'))
print('CDI', ' - ', roman2dec('CDI'))
print('ID', ' - ', roman2dec('ID'))
