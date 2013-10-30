/*
	Name: Ahmad Rashed
	Course: CE 3345.001
	aar130130@utdallas.edu
	- - - - - - - - - - - - - - - - - - - 
	Description: Programming Assignment 1
	Converts Infix Expression to Postfix
	Then Solves Postfix Expression
	Uses Modified Stack Implementation
*/

public class Postfix
{
	private static boolean isOperator(char c) // test whether c is an operator.
	{
		return c == '+'  ||  c == '-'  ||  c == '*'  ||  c == '/'  ||  c == '(' || c == ')';
	}

	private static boolean lowerPrecedence(char operator1, char operator2)
	{
		switch (operator1)
		{
			case '+':
			case '-':
				return !(operator2 == '+' || operator2 == '-');
				// returns true if left is +/- and right is anything but +/-
			case '*':
			case '/':
				return (operator2 == '(');
				// returns true if left is */ and right is (
			case '(':
				return true;		// returns true if left is (
			default:
				return false;
		}
	}

	private static String toPostfix(String input)
	{
		StringBuffer tempPostfix = new StringBuffer(input.length());	// useful for appending
		Stack operators = new Stack(100);

		for(int i = 0; i < input.length(); i++)		
		// scan every character in the input one-by-one
		// only works because input should always be operators and single-digit operands
		{
			char ch = input.charAt(i);
			System.out.println("character: " + ch);

			if (isOperator(ch))
			{
				while (!operators.isEmpty() && !lowerPrecedence(operators.peek().charAt(0),ch))
				// pops all operators that are higher precedence than what is in the current stack
				{
					tempPostfix.append(operators.pop());
				}
				if (ch == ')')
				// pops all operators that are between parentheses
				{
					String op = operators.pop();
					while (op.charAt(0) != '(')
					{
						tempPostfix.append(op);
						op = operators.pop();
					}
				}
				else
				// push the current operator onto the stack
				{
					operators.push(String.valueOf(ch));
					
				}
			}
			else
			// if not an operator, just print it 
			{
				tempPostfix.append(ch);
			}
			System.out.print("stack: ");
			operators.printStack();
			System.out.println("output: " + tempPostfix);
			System.out.println();
		}
		
		while(!operators.isEmpty())
		// this empties the remainder of the stack into "tempPostfix"
		{
			System.out.println("character: ");
			System.out.print("stack: ");
			operators.printStack();
			tempPostfix.append(operators.pop());
			System.out.println("output: " + tempPostfix);
		}
		// Convert from SringBuffer to String and return
		String output = new String(tempPostfix);
		return output;
	}

	private static void solveInfix(String input)
	{
		Stack numbers = new Stack(100);
		for (int i = 0; i < input.length(); i++)
		{
			char ch = input.charAt(i);
			System.out.println("character: " + ch);
			if (isOperator(ch))
			{
				double b = Double.parseDouble(numbers.pop());
				double a = Double.parseDouble(numbers.pop());
				double z = solve(a,b,ch);
				numbers.push(String.valueOf(z));
			}
			else
				numbers.push(String.valueOf(ch));
			System.out.print("stack: ");
			numbers.printStack();
			System.out.println();
		}
		System.out.print("output: " + numbers.pop());
	}

	private static double solve(double x, double y, char ch)
	{
		switch (ch)
		{
			case '+':
				return (x+y);
			case '-':
				return (x-y);
			case '*':
				return (x*y);
			case '/':
				return (x/y);
			default:
				return 1;
		}
	}

	private static boolean isProperInfix(String input)
	{
		int parenthesis = 0;

		for(int i = 0; i < input.length(); i++)
		// Checks for the balance of parentheses.
		{
			if(input.charAt(i) == '(')
				parenthesis++;
			if(input.charAt(i) == ')')
				parenthesis--;
			// instant trigger if ANY right parenthesis appears before the left
			if(parenthesis < 0)
				return false;
		}

		if(parenthesis != 0)
			return false;
		char a = input.charAt(input.length()-1);
		if(isOperator(a) && !(a == '(' || a == ')'))	// Checks if the last character is an operator
			return false;
		
		return true;	// default
	}

	public static void main(String[] args)
	{
		String postfix = "1+2-(1+4)";	//args[0];
		String infix;

		if(isProperInfix(postfix))
		{
			System.out.println("Begin Conversion\n");
			infix = toPostfix(postfix);
			System.out.println();
			System.out.println("Begin Evaluation\n");
			solveInfix(infix);
		}
		else
			System.out.println("Improper infix expression!");
		System.out.println();
	}
}