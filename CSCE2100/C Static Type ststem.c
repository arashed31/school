/*
 * 	C Static Type System
 */
typedef int type1[10]; // type1 defined as array of 10 ints
typedef type1 *type2; // type2 is a pointer to type1
typedef struct {
	int field1;
	type2 field2;
}type3;					// field1 holds an int and field2 holds a type2 which is a pointer to type1 which is an array of 10 ints

typedef type3 type4[5]; // array of 5 type3 structs named type4

