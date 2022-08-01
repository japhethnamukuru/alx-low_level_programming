## 0x0E. C - Structcture, typedef
**structure**

`struct` is a used defined data type in C that allaows the programmaer to combine data items of different kinds.

### Declared as so...

---
```
struct User
{
	char *name;
	char *email;
	int age;
};

int main(void)
{
	struct User user;

	return (0);
}
```
---
**typedef**

`typedef` is a keyword used to give a type a new name. Think of the new name as an alias to the type it is given to.
i.e After the below type definition the identifier `byte` can be used as an abbreviatio for the type `unsigned char`"

---
```
typedef unsigned char byte;

int main(void)
{
	byte c;
	
	c = 200;
	return (0);
}
```
---
`typedef` can also be used with structures to define new data types and used to define structure varaibles diretly as below
```
typedef struct User
{
	char *name;
	char *email;
	int age;
} user;

int main(void)
{
	struct User user;
	user user2;
	
	return (0);
}
