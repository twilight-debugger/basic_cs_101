from enum import Enum
class Equal(Enum):
    NO = 0
    YES = 1

def equal(x,y):
    if (x==y):
        return 1
    else:
        return 0

x = 6
y = 6
result = equal(x,y)
print(result)