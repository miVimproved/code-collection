# I do not claim to be good at makefiles...
# However, I can make them functional.

# Also, for this example, I have it not echo
# the commands to the console, so you just see
# the program say "Hello, World".

make:

# Compiles the code
# -Wall, -Wextra, and the rest are warning flags.
# They tell the compiler to tell me if I made any mistakes
# in my code. They are super useful and I highly recommend
# using all of them.
	@gcc -Wall -Wextra -pedantic-errors -Wstrict-prototypes -Werror main.c

# Runs the code
	@./a.out

# Removes the execution files
	@rm a.out
