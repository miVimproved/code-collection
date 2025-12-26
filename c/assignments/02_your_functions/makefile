# I do not claim to be good at makefiles...
# However, I can make them functional.

make:

# Compiles the code
# -Wall, -Wextra, and the rest are warning flags.
# They tell the compiler to tell me if I made any mistakes
# in my code. They are super useful and I highly recommend
# using all of them.
	gcc -Wall -Wextra -pedantic-errors -Wstrict-prototypes -Werror main.c maths.c

# Runs the code
	./a.out > prgout.txt

# Removes the execution files
	rm a.out

	@echo If you see any errors past this line, you messed up.
# Tests to see if there's any difference in the output.
	diff prgout.txt solution/output.txt -Z
