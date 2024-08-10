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

### operator new 
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

the `operator new` is a direct call to the memory allocation function that is responsible for allocating memory. **It does not initialize the objects; it simply allocates the raw memory**.

`Zombie *objects = static_cast<Zombie*>(memory);` : You are telling the compiler to treat this block of memory as if it is an array of MyObject. This means that objects now points to the start of this memory block, and the memory is treated as a contiguous array of MyObject.

Afterwards, you can access memory with *objects[0], objects[1]*... But you cannot access like *memory[0], memory[1]*... because it is 'pointer to void', which means that compiler doesn't know the size of objects that *memory[0]* is pointing to.

Type Safety: **static_cast** is the safest and most appropriate cast to use in this scenario. It performs a checked conversion at compile time and ensures that the types are compatible.
Alternative Casts: Other C++ casts, like reinterpret_cast, would work as well but are less safe because they allow potentially dangerous conversions without checks. static_cast ensures that the conversion between void* and MyObject* is valid and appropriate.
