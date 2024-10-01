I'm soooo lazy 🤪

To link your libftprintf.a (which is a static library containing your ft_printf implementation) with your main program, you can follow these steps using gcc:
Steps:

    Compile your main file: You need to compile your main.c file but not link it yet. This creates an object file for main.c that will later be linked with the libftprintf.a library.

    bash

gcc -c main.c -o main.o

Link with libftprintf.a: Now, you need to link the object file (main.o) with your static library (libftprintf.a). Make sure to include the path where libftprintf.a is located.

bash

    gcc main.o -L. -lftprintf -o my_program

    Explanation:
        -L.: This tells the linker to look for libraries in the current directory (.). If libftprintf.a is in another directory, you can specify the path (e.g., -L/path/to/library).
        -lftprintf: This links the libftprintf.a library. The -l flag automatically adds the lib prefix and .a suffix (so it looks for libftprintf.a).
        -o my_program: This specifies the name of the output file, which will be your executable (you can name it anything you want, e.g., my_program).

Example:

If your main.c and libftprintf.a are in the same directory, you would run:

bash

gcc main.c -L. -lftprintf -o my_program

If libftprintf.a is in a directory called libft, you would run:

bash

gcc main.c -L./libft -lftprintf -o my_program

Running the program:

Once the program is successfully compiled and linked, you can run it:

bash

./my_program

This should correctly link and run your ft_printf implementation along with your main tests!

valgrind --leak-check=full ./my_program

