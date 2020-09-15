# 0x19. C - Stacks, Queues - LIFO, FIFO

------------
![](https://www.viveusa.mx/sites/default/files/field/image/177129252_0.jpg)

------------


------------

# Brief Introduction To&lsquo;Monty&rsquo;

------------

Monty 0.98 is a scripting language that is first compiled into monty byte codes (**just like python**). it relies on a unique stack, with specific instructions to manipulate it.
- **Monty byte code files:** Files containing Monty byte codes usually have the **.m** extension. Most of the industry uses this standard but it is not required by the specification of the language. 

- **Note:** There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument **:**

------------
    julien@ubuntu:~/monty$ cat -e bytecodes/000.m
    push 0$
    push 1$
    push 2$
      push 3$
                       pall    $
    push 4$
        push 5    $
          push    6        $
    pall$
    julien@ubuntu:~/monty$
    




------------
# Mandatory Tasks:

In this part we apply the basic and important stacking **methods** of them such as:

------------


- **Push:** Put a new data in the stack. The pointer is read to locate the last element, it is incorporated after it and the pointer is redirected so that it points to the new incorporated data.

------------


- **Pall:** The opcode pall prints all the values ​​on the stack, starting from the top of the stack.

------------


- **Pint:** The opcode **pint** prints the value at the top of the stack, followed by a new line.

------------


- **Pop:** The opcode pop removes the **top** element of the stack.

------------


- **Swap:** The opcode **swap** swaps the top two elements of the stack.

------------


- **Add:** The opcode **add** adds the top two elements of the stack.

------------


- **Nop:** The opcode **nop** does not do anything.

------------
# Difference Between Stack and Queue&#33;
------------

![](https://techdifferences.com/wp-content/uploads/2017/07/featured.jpg)

------------
## Key Differences Between Stack and Queue

------------

**1.**  Stack follows **LIFO** mechanism on the other hand Queue follows FIFO mechanism to add and remove elements.

------------


**2.**  In a stack, the same end is used to insert and delete the elements. On the contrary, two different ends are used in the queue to insert and delete the elements.

------------

   
**3.**  As Stack have only one open end that is the reason for using only one pointer to refer to the top of the stack. But queue uses two pointers to refer front and the rear end of the queue.

------------

    
**4.**  Stack performs two operations known as push and pop while in Queue its known as enqueue and dequeue.

------------


**5.** Stack implementation is easier whereas Queue implementation is tricky
Queue has variants like circular queue, priority queue, doubly ended queue,    etc. In contrast, stack does not have variants.

------------

# AUTHORS

------------

**Daniela Morales  | 1524@holbertonschool.com**

**Zoltan Mora| 1558@holbertonschool.com**

------------
