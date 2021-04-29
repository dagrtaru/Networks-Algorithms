def xor(a, b):
    result = []
    for i in range(1, len(b)):
        if a[i] == b[i]:
            result.append('0')
        else:
            result.append('1')
    return ''.join(result)

def mod2div(dividend, divisor):

    pick = len(divisor)
    tmp = dividend[0 : pick]
    while pick < len(dividend):
        if tmp[0] == '1':
            tmp = xor(divisor, tmp) + dividend[pick]
        else:
            tmp = xor('0' * pick, tmp) + dividend[pick]
        pick += 1
    if tmp[0] == '1':
        tmp = xor(divisor, tmp)
    else:
        tmp = xor('0' * pick, tmp)
    remainder = tmp
    return remainder

data_word = int(input("Enter the dataword: "))
divisor = '1011'
dividend = str(data_word) + '000'
print("Initial codeword is:", dividend)
remainder = mod2div(dividend, divisor)
code_word = str(data_word) + str(remainder)
print("The final codeword is:", code_word)

    
