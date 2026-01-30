def grade(marks):
    # A -> 90 and above , B -> 80 above , C -> 70 above , D -> 60 above 

    if marks >= 90:
        return "Grade A"
    elif marks >= 80:
        return "Grade B"
    elif marks >= 70:
        return "Grade C"
    elif marks >= 60:
        return "Grade D"
    else:
        return "Fail"

x = int(input("Enter the marks: "))
print(grade(x))
