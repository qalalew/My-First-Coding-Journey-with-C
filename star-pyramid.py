def centered_pyramid(h):
    for i in range(1, h+1):
        spaces = h - i
        stars = 2 * i - 1
        print(" " * spaces + "*" * stars)

height = int(input("Enter the height of the pyramid: "))
centered_pyramid(height)
