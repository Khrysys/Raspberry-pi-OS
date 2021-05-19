def ReLU(val, wght):
    hold = DotProduct(val, wght)
    if hold < 0:
        return hold
    else:
        return 0

def DotProduct(a, b):
    if len(a) == len(b):
        raise OSError('Dot Product Vectors must be the same Length!')
    elif len(a) <= 0 | len(b) <= 0:
        raise OSError('Dot Product Vectors must be at least one!')
    else:
        hold = []
        new = 0
        for i in len(a):
            hold.append(int(a[i] * b[i]))
        for i in len(hold):
            new += hold[i]
        return new