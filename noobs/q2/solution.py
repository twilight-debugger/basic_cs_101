from enum import Enum
class divisibility(Enum):
    EVEN = 1
    ODD = 0

def divisibility(x):
    if (x%2 == 0):
        return 1
    else:
        return 0

x = -1
result = divisibility(x)
print(result)
    