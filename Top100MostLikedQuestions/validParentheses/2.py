def isValid(self, s):
    stack = []
    for c in s:
        if c in "[{(":
            stack.append(c)
        else: 
            if not stack:
                return False
            k = stack.pop()
            if c == '}' and k != '{':
                return False
            elif c == ')' and k != '(':
                return False
            elif c == ']' and k != '[':
                return False
    return not stack 


def main():
    casos_prueba = ""
    print(f"{isValid(casos_prueba)}\n")

if __name__ == "__main__":
    main()