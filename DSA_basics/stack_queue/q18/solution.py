
STACK = []

def push(a):
    STACK.append(a)

def pop():
    STACK.pop()

def peek():
    return STACK[-1]

print(STACK)
push(34)
push(2)
print(STACK)
pop()
print(STACK)
print(peek())
print(STACK)