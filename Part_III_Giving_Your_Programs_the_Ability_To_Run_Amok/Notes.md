# NOTES

- Arithmetic operators
    ![Arithmetic Operators](https://github.com/mrsahin101/C_for_Dummies/blob/master/Part_III_Giving_Your_Programs_the_Ability_To_Run_Amok/Images/Aritmethic_Operators.PNG) 

### Precedence of Operation :
1. Multiplication
2. Division
3. Addition
4. Substraction

- if statement Syntax
    if(comparison)
    {
        statement;
        [statement;..]
    }
    else
    {
        statement;
        [statement;..]
    }

#### Comparison Table 
-    ![ Comparison Table](https://github.com/mrsahin101/C_for_Dummies/blob/master/Part_III_Giving_Your_Programs_the_Ability_To_Run_Amok/Images/If_Statements_1.PNG) 
     ![ Comparison Table](https://github.com/mrsahin101/C_for_Dummies/blob/master/Part_III_Giving_Your_Programs_the_Ability_To_Run_Amok/Images/If_Statements_2.PNG)

- If and else statements
    ![ Comparison Table](https://github.com/mrsahin101/C_for_Dummies/blob/master/Part_III_Giving_Your_Programs_the_Ability_To_Run_Amok/Images/If_else.PNG)
 

 - Since getchar reads from standart IO, for sequantial use; must flush stdin first to get input properly from prompt.

 - Comparing single character variable is viable with if, but when comparing whole string; result is unpredictable. 


 #### Logical Operators in if Statements
 
 ![ Comparison Table]( https://github.com/mrsahin101/C_for_Dummies/blob/master/Part_III_Giving_Your_Programs_the_Ability_To_Run_Amok/Images/Logical_Operators.PNG)

#### For Loop Syntax
- for(starting; while_true; do_this)
    {
        statements;
    }
- Syntax for infinite for loop
    for(;;)
    {
        statements;
    }

- break keyword breaks out of the loop. This keyword only break out of the loop its in. Doesn't break out of nested loop. Just the loop its in!

#### Some syntactic sugar of C
- i++, i--, i += 5, i -= 5, i /= 2;
    ![ Comparison Table]( https://github.com/mrsahin101/C_for_Dummies/blob/master/Part_III_Giving_Your_Programs_the_Ability_To_Run_Amok/Images/Pre_Post_Increment_Decrement.PNG)