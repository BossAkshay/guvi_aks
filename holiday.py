holidays = ['saturday','sunday']

day = input("Enter the day to check")
if day.lower() in holidays:
    print("yes")
else:
    print("no")
