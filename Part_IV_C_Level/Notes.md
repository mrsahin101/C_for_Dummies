# NOTES

- Functions basically remove redundancy from programs.

## Functions
- Syntax for functions : 
    type name(arguments..)
    {
        statement(s);
    }

- When naming function; their name must start with letter, not a number.  Cant use space between the name. either use underline or write it all together.

- Function names must be descriptive.

- Some compilers may forbid you use function names starting with underline.

- Avoid naming function same as C **keywords**

- main() is reserved for first function(entry point.)

- When dividing 2 integer number, if we want accurate result; must cast one of number to float or double. otherwise computer does integer division.

- Return syntax : return(something); -> this returns value from function. Type of variable depends on function type.

- In C language main has to be defined as int type. Returnig **0** means that given task was completed succesfully. Any other than **0** value means some sort of error condition was happened!. Before ANSI standart main function was commonly decleared as void.
