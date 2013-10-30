/*
	Name: Ahmad Rashed
	Course: CE 3345.001
	aar130130@utdallas.edu
	- - - - - - - - - - - - - - - - - - - 
	Description: Programming Assignment 1
	Stack Implementation with Array of Strings
	Modified for use with this assignment.
	Original: http://www.algolist.net/Data_structures/Stack/Array-based_implementation
*/

public class Stack {
	private int top;
	private String[] storage;

	Stack(int capacity) {
		if (capacity <= 0)
			throw new IllegalArgumentException("Stack's capacity must be positive");
		storage = new String[capacity];
		top = 0;
	}

	void push(String value) {
		if (top == storage.length)
			throw new StackException("Stack's underlying storage is overflow");
		storage[top] = value;
                top++;
	}

	String peek() {
		if (top == 0)
			throw new StackException("Stack is empty");
		return storage[top-1];
	}

	String pop() {
		if (top == 0)
			throw new StackException("Stack is empty");
		return storage[--top];
	}

	boolean isEmpty() {
		return (top == 0);
	}
	
	void printStack() {
		for (int i = 0; i < top; i++)
		{
			System.out.print(storage[i]);
			if (i < top-1)
				System.out.print(",");
		}
		System.out.println();
	}

	public class StackException extends RuntimeException {
		public StackException(String message) {
			super(message);
		}
	}
}