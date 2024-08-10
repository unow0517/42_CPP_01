# 42_CPP_01

## New Things To Learn

```c++
Zombie* newZombie(std::string name) {
    Zombie* zombie = new Zombie;
    zombie->setName(name);
    return zombie;
}
```
Diffrent to CPP 00, we learn how to dynacllaly allocate the Object. `Zombie* zombie = new Zombie;` is allocating memory for the object dynamilcally on Heap.
And Arrow Operator should be used instead of dot operator in `zombie->setName(name);`, since `zombie` is pointer to object.
