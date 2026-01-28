STACK_LIST = []
# push, pop, peek
def push(n):
    STACK_LIST.append(n)

def pop():
    STACK_LIST.pop()

def peek():
    return STACK_LIST[-1]

print(STACK_LIST)
push(34)
push(2)
print(STACK_LIST)
pop()
print(STACK_LIST)
print(peek())
print(STACK_LIST)




