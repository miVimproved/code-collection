# I do not claim to be good at makefiles...
# However, I can make them functional.

make:

# Hi, this is here because I *am* letting the commands get printed
# to the console. It may be the first one that people see that does that,
# so I'm saying it does.
	@echo "Lines such as \`gcc -Wall...\`, \`./a.out\`, and \`rm a.out\` are commands that the makefile is running, by the way."
	@echo "Get used to that, as I'm not going to hide the Makefile commands in anything other than hello_world and printf_0."

# Compiles the code
# -Wall, -Wextra, and the rest are warning flags.
# They tell the compiler to tell me if I made any mistakes
# in my code. They are super useful and I highly recommend
# using all of them.
	gcc -Wall -Wextra -pedantic-errors -Wstrict-prototypes -Werror main.c pointer_functions.c

# Runs the code
	./a.out

# Removes the execution files
	rm a.out
