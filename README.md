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

Must know where to allocate memory, either on Heap or on Stack.

**Stack memory allocation** is fast, simple, and automatically managed, but limited in size and scope. It is ideal for temporary, small, and short-lived data.

**Heap memory allocation** offers more flexibility and larger memory space but comes with the overhead of manual management, potential performance penalties, and a higher risk of memory-related errors. It's suitable for dynamically sized or long-lived objects.
