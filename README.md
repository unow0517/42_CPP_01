# 42_CPP_01

## New Things To Learn

```c++
Zombie* newZombie(std::string name) {
    Zombie* zombie = new Zombie;
    zombie->setName(name);
    return zombie;
}
```
Diffrent to CPP 00, we learn how to dynacllaly allocate the Object. `Zombie* zombie = new Zombie;` is allocating memory for the object dynamilcally on **Heap**.

Arrow Operator(**->**) should be used instead of dot operator in `zombie->setName(name);`, since `zombie` is pointer to object.

```c++
    Zombie *ptrZ;

    ptrZ = newZombie("Boss Zombie");
    delete ptrZ;

```
with `delete` the pointer should be deallocated. 

Must know where to allocate memory, either on Heap or on Stack. But I don't know yet, further practical experience is needed.

**Stack memory allocation** is fast, simple, and automatically managed, but limited in size and scope. It is ideal for temporary, small, and short-lived data.

**Heap memory allocation** offers more flexibility and larger memory space but comes with the overhead of manual management, potential performance penalties, and a higher risk of memory-related errors. It's suitable for dynamically sized or long-lived objects.

### operator new && static_cast
```C++
Zombie*	zombieHorde( int N, std::string name )
{
	void *memory = operator new[](sizeof(Zombie) * N);
	Zombie *objects = static_cast<Zombie*>(memory);
	for (int i = 0; i < N; i++)
		new (&objects[i]) Zombie();
	return objects;
}
```

the `operator new` is a direct call to the memory allocation function that is responsible for allocating memory. **It does not initialize the objects; it simply allocates the raw memory**. It is often used when you want to separate memory allocation from object construction, which can be useful for optimizing memory management in certain situations.

`Zombie *objects = static_cast<Zombie*>(memory);` : You are telling the compiler to treat this block of memory as if it is an array of MyObject. This means that objects now points to the start of this memory block, and the memory is treated as a contiguous array of MyObject.

Afterwards, you can access memory with *objects[0], objects[1]*... But you cannot access like *memory[0], memory[1]*... because it is 'pointer to void', which means that compiler doesn't know the size of objects that *memory[0]* is pointing to.

Type Safety: **static_cast** is the safest and most appropriate cast to use in this scenario. It performs a checked conversion at compile time and ensures that the types are compatible.
Alternative Casts: Other C++ casts, like reinterpret_cast, would work as well but are less safe because they allow potentially dangerous conversions without checks. static_cast ensures that the conversion between void* and MyObject* is valid and appropriate.

**But in this case the destructor for each object should be manually called as well as memory should be deallocated.**

### new Objects[N]
```C++
Zombie*	zombieHorde( int N, std::string name )
{
	Zombie *zombies = new Zombies[N];
	for (int i = 0; i < N; i++)
		objects[i].setName(name);
	return zombies;
}
```

```C++
int main()
{
	Zombie *zombies = zombieHorde(N, "oneOfZombies");
	delete[] zombies;
}
```
We have to use this to allocate multiple objects in a single allocation. And destruction is also more simple.

`new[], delete[]` are for allocating/deallocating multiple Objects, compared to `new, delete` for single Object.

### Pointer VS Reference

```c++

int main() 
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str; //pointer
	std::string &stringREF = str; //reference
}

```
**Pointer** : holds address of the string, can be null-initialized, reassigned to another memory addres, `*` to dereference and `->` to access members. For array manipulation, dynamic memory management.

**Reference** : **alias to existing object**. cannot be null-initialized, initialized to refer an existing variable or object, cannot be reassigned, dot operator (`.`) can be used without dereferencing.

***In ex02, in my opinion, the sentence 'The value pointed by stringREF' is wrong, 'The value refered by stringREF' is right, since reference does not point to, rather does refer.***

```c++
void setWeapon(Weapon &wp);
```
The function takes a reference to a Weapon object. The Weapon Object is not copied, a reference to the original object is used. The function can modify the original object. More efficient, especially with large objects.

```c++
void setWeapon(Weapon wp);
```
This function takes a Weapon as a value. The Weapon object is copied when passed to the function. Use when you don't want to affect original Object. 

### New Syntax

`>>` : **Extraction operator**, sed with input streams like std::cin, std::ifstream, etc. It is used to extract data from an input stream and store it in a variable. By default, this operator skips whitespace characters (such as spaces, tabs, and newlines).
That's why we use 

`infile >> std::noskipws >> c;`

### Map 
`std::map` is a standard library container that implements an associative container, which is a data structure that **stores elements as key-value pairs**.

### `this`
`this` is a special **pointer** that refers to the current instance of the class.

```c++
class Example {
public:
    void show() { std::cout << "show() called" << std::endl; }
    void callMemberFunction(void (Example::*func)()) {
        (this->*func)();  // Calls the member function using this pointer
    }
};

int main() {
    Example obj;
    obj.callMemberFunction(&Example::show);  // Calls show() method
    return 0;
}
```

### Switch

```c++
switch (harl_translate(argv))
{
	case 0:
		h.complain("DEBUG");
	case 1:
		h.complain("INFO");
	case 2:
		h.complain("WARNING");
	case 3:
		h.complain("ERROR");
		break ;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
```
similar to if/else statement, but without `break` the case falls through the case below.


