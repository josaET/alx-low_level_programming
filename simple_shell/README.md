# ALX Simple Shell Team Project
# Simple_shell
## Resources

###### Read or watch:
- [Unix Shell](https://en.wikipedia.org/wiki/Unix_shell) 
- [Thompson Shell](https://en.wikipedia.org/wiki/Thompson_shell)
- [ken Thompson](https://en.wikipedia.org/wiki/Ken_Thompson)

###### General

- Who designed and implemented the original Unix operating system
- Who wrote the first version of the Unix Shell
- Who inbented the B programming language (the direct predecessor to the c programming language)
- Who is Ken Thompshon
- How does a shell work
- What is a pid and a ppid
- How to manipulate the environment of the current process
- what is the difference between a function and a system call
- How to create processes
- what are the three prototypes of `main`
- How does the Shell use the `PATH` to find the programs
- How to execute another program with the `execve` system call
- How to suspend the execution of a process until one of its children terminaates 
- What is `EOF` /"end-of-file"?

## Requirements

###### General

- Allowed editors: `vi`,`vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md file`, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- Your shell should not have any memory leaks
- No more than 5 functions per file
- All your header files should be include guarded
- Use system calls only when you need to ([why?](https://www.quora.com/Why-are-system-calls-expensive-in-operating-systems))
- Write a `README` with the description of your project
- You should have an `AUTHORS` file at the root of your repository, listing all individuals having contributed content to the repository. Format, see [Docker](https://github.com/moby/moby/blob/master/AUTHORS)

## GitHub
*There should be one project repository per group. If you and your partner have a repository with the same name in both your accounts, you risk a 0% score. Add your partner as a collaborator. *

## More Info
###### Output

- Unless specified otherwise, your program must have the exact same output as `sh` `(/bin/sh)` as well as the exact same error output.
- The only difference is when you print an error, the name of the program must be equivalent to your `argv[0]` (See below)
Example of error with `sh`:
`
```
$ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$
```
`
