# Homework 03

> NTUST Course Project  
> Course No: `CS3009301`  
> Course Name: Operating Systems  
> Author: Hayden Chang 張皓鈞 B11030202  
> Email: B11030202@mail.ntust.edu.tw



## Why the original `test_and_set` program does not satisfy bounded waiting? (15%)

The original `test_and_set` program does **not** satisfy **bounded waiting** because of how the `test_and_set` mechanism works, leading to a potential scenario where some processes may be indefinitely delayed from entering the critical section, even though other processes continue to access it.

### How `test_and_set` works:

The `test_and_set(&lock)` is an atomic instruction that checks the value of `lock` and sets it to `1` if it's `0`. If `lock` was already `1` (indicating another process is in the critical section), it remains `1` and the process keeps spinning, waiting for it to become `0`.

### Why it doesn't satisfy **bounded waiting**:

In a busy-wait loop with `test_and_set`, multiple processes can repeatedly check the `lock` variable in rapid succession, but no mechanism guarantees that each process will eventually enter the critical section in a fair, ordered manner.

Here are the specific reasons:

1. **No priority or order**:
   - The `test_and_set` program does not impose any order or priority among processes trying to access the critical section. A process that repeatedly checks `lock` might continually win access to the critical section if it happens to check and set `lock` at the right time, while other processes might consistently lose out.
2. **Busy-waiting with no progress guarantee**:
   - Processes that fail to acquire the lock keep busy-waiting in a loop, but there's no guarantee of when they will acquire the lock. This can lead to **starvation**, where some processes wait indefinitely because others are repeatedly entering the critical section.
3. **Race conditions**:
   - In a multi-core system, several processes may execute the `test_and_set` instruction simultaneously. If one process successfully acquires the lock, other processes continue spinning. Without any form of queue or round-robin mechanism, one or more processes may never get a chance to acquire the lock.

### Conclusion:

The absence of a mechanism to track or manage which processes are waiting (or for how long they have been waiting) results in a lack of fairness. Some processes could potentially wait indefinitely, which violates the principle of **bounded waiting**. This means the original `test_and_set` program cannot guarantee that a waiting process will enter the critical section after a bounded number of other processes have entered.



## Please write down a C code for `compare_and_swap` with mutual exclusion and bounded-waiting and explain why (30%)

```c
do {
    waiting[i] = true;
    key = 1;
    while(key == 1 && waiting[i]) {
        key = compare_and_swap(&lock, 0, 1);
    }
    waiting[i] = false;
    
    // critical section
    
    j = (i + 1) & n;
    while((j != i) && !waiting[j]) {
        j = (j + 1) % n;
    }
    if(j == i) {
        lock = 0;
    } else {
        waiting[j] = false;
    }
    
    // remainder section
    
} while(true);
```

### Mutual Exclusion

A thread can only enter the critical section if there is currently no thread in the critical section (lock = 0), or if the previous thread that exited the critical section set the `waiting` status of the next waiting thread to `false`. Therefore, it is impossible for two threads to be in the critical section at the same time, ensuring mutual exclusion.

### Progress

When a thread exits the critical section and sets the `waiting` status of the next thread to `false`, that next thread can then enter the critical section. If no threads are waiting, the `lock` is set to `0`, so any thread that wants to enter the critical section will not be blocked.

### Bounded-waiting

Only the thread that just exited the critical section participates in deciding which thread enters next, and it selects the next waiting thread in order. Therefore, any thread will wait a maximum of `n + 1` times before it can enter the critical section.



## Regarding Bakery algorithm, please answer following questions (25%)

```c
do {
  Choosing[i] = TRUE;
  Number[i] = Max(Number[0],…Number[n - 1]) + 1;
  Choosing[i] = FALSE;
  for (j = 0; j < n; j++) {
    while (Choosing[j]);
    while ((Number[j] != 0) && ((Number[j], j) < (Number[i], i)));
  }

  // critical section

  Number[i] = 0

  // remainder section

} while (TRUE);
```

- Is it possible that many processes receive the same number?
- If we remove the first while loop (i.e. `while(Choosing[j]);`), the mutual exclusion is still maintained?
- Please prove the correctness of Bakery algorithm in terms of mutual exclusion, progress, and bounded waiting.

### 1. Is it possible that many processes receive the same number?

Yes, it is possible for multiple processes to receive the same number. However, if two processes happen to receive the same number, the tie is broken by process ID (index `i`). This is achieved in the condition:

```c
(Number[j] != 0) && ((Number[j], j) < (Number[i], i))
```

In this way, if two processes have the same `Number` value, the one with the smaller index `j` gets priority and enters the critical section first. This mechanism guarantees a strict ordering and prevents concurrent access to the critical section.

### 2. If we remove the first `while` loop (`while(Choosing[j]);`), is mutual exclusion still maintained?

No, mutual exclusion might not be maintained if we remove the first `while` loop. This loop ensures that if a process `j` is in the middle of selecting its `Number[j]`, other processes must wait for it to complete this assignment. Without this `while (Choosing[j]);` loop, a process might observe an inconsistent or incomplete state of `Number[j]` (for example, observing `Number[j] = 0` when process `j` is still choosing a valid number). This could result in two processes believing they have priority, potentially leading to a race condition and violating mutual exclusion.

### 3. Proof of Correctness

To establish the correctness of the Bakery algorithm, we consider the three main requirements: **mutual exclusion**, **progress**, and **bounded waiting**.

#### Mutual Exclusion

The Bakery algorithm ensures that only one process can enter the critical section at any given time. This is guaranteed by the following sequence:

1. Each process first sets its `Choosing[i] = TRUE` and then selects `Number[i]` as one greater than the maximum `Number` of all processes.
2. Other processes wait in the first `while (Choosing[j]);` loop until a process `j` has completed its number selection.
3. In the second `while ((Number[j] != 0) && ((Number[j], j) < (Number[i], i)));` loop, each process compares its `Number[i]` and index `i` with other processes, only proceeding when it has the smallest lexicographical order.
4. After entering the critical section, `Number[i]` is reset to `0` so other processes recognize that it is no longer competing for access.

Since any process that enters the critical section must have the smallest `(Number, index)` pair, mutual exclusion is maintained.

#### Progress

The Bakery algorithm guarantees that any process that wants to enter the critical section will eventually do so. When a process exits the critical section, it resets `Number[i] = 0`, allowing other processes to enter based on the lexicographical ordering of their `(Number, index)` values. Since every process selects a unique ordering and the comparison logic prioritizes smaller indices in case of ties, a waiting process will not be indefinitely blocked if no other process is continuously trying to enter the critical section.

#### Bounded Waiting

In the Bakery algorithm, any process that wants to enter the critical section can determine its place in line based on the current `(Number, index)` values of other processes. The bounded waiting condition is satisfied because every process receives a unique `Number[i]` value that determines its turn in a finite order. Each process waits in a fair queue-like system, ensuring that no process waits indefinitely. Each process waits for at most `n` other processes to enter the critical section before it gets its turn.

In summary, the Bakery algorithm satisfies the conditions of mutual exclusion, progress, and bounded waiting, making it a reliable solution for achieving synchronization among competing processes.



## What’s the advantages of semaphore implemented using blocking than using busy waiting? (10%)

Using **blocking** for semaphore implementation has several advantages over **busy waiting**, especially in terms of efficiency and resource utilization:

1. **CPU Efficiency**: In a blocking semaphore, when a thread or process has to wait, it is put into a waiting state by the operating system. This allows the CPU to be free to execute other tasks rather than continuously checking the semaphore’s availability. This is especially beneficial in multi-threaded environments where CPU time is a critical resource.

2. **Reduced Power Consumption**: Busy waiting keeps the CPU constantly active, consuming more power. Blocking allows the CPU to enter low-power states or focus on other tasks, thus conserving power and improving battery life in portable devices.

3. **Improved System Responsiveness**: In blocking, since waiting threads are put to sleep, other processes can make progress without contention. This reduces system overhead and improves responsiveness, especially under high load, where busy waiting could otherwise cause performance degradation.

4. **Avoids Waste of Resources**: Busy waiting occupies resources by repeatedly checking the semaphore's state, which can lead to increased cache pressure and memory bus contention. Blocking prevents this, making it a more resource-friendly approach.

### Disadvantages
However, blocking is usually more complex to implement as it requires OS-level support for managing thread states, and there may be a small overhead for context switching when threads are put to sleep and reawakened.

In summary, blocking semaphores are generally more efficient and better suited for multitasking environments, while busy waiting may still be useful in real-time systems where extremely low latency is required.



## Please explain the advantages and disadvantages of semaphore and monitor in the same problem. (10%)

When solving the same synchronization problem, **semaphores** and **monitors** each have unique advantages and disadvantages based on their design and usage characteristics:

### Semaphores
**Advantages**:
1. **Flexibility**: Semaphores are a low-level synchronization mechanism, allowing a wide range of synchronization schemes (e.g., mutual exclusion, counting, signaling).
2. **Simplicity**: They can be simpler to implement in situations where only simple synchronization is needed.
3. **Broad Compatibility**: Semaphores are widely supported in many operating systems and programming environments, making them a portable choice.

**Disadvantages**:
1. **Complexity in Complex Scenarios**: For larger applications, using semaphores can lead to complex code and potential errors, like forgetting to release a semaphore, resulting in deadlocks.
2. **Error-Prone**: Semaphores rely on manual handling, where programmers must carefully manage each `wait` and `signal` operation. Mismanagement can lead to issues such as deadlocks, priority inversion, or accidental starvation.
3. **No Explicit Structure**: Unlike monitors, semaphores do not provide a structured mechanism to define critical sections, increasing the risk of incorrect usage.

### Monitors
**Advantages**:
1. **Encapsulation**: Monitors encapsulate both data and the operations on the data within a high-level abstraction, making the critical sections and synchronization logic more structured and intuitive.
2. **Automatic Synchronization**: Monitors manage entry and exit to critical sections automatically, reducing the chance of programmer errors, as explicit `wait` and `signal` operations are often hidden.
3. **Less Error-Prone**: The structured approach of monitors helps prevent common synchronization errors, improving code reliability and maintainability.

**Disadvantages**:
1. **Limited Flexibility**: Monitors provide structured synchronization, but this can be restrictive when complex synchronization patterns are required, where semaphores might be more flexible.
2. **Language Support Dependency**: Monitors require language-level support (e.g., Java’s `synchronized` keyword), which is not universally available. This restricts their portability across different programming environments.
3. **Potential Performance Overhead**: The abstraction layer provided by monitors may introduce slight overhead, especially in systems where lightweight and low-level synchronization is critical.

### Conclusion
- **Semaphores** are versatile and flexible but can lead to complex, error-prone code.
- **Monitors** are safer and more structured but less flexible for advanced synchronization needs.



## Regarding following Bounded Buffer Problem, please answer following questions (10%)

### Producer

```c
do {
  // produce an item in nextp
  wait(mutex);
  wait(empty);
  // add the item to the buffer
  signal(full);
  signal(mutex);
} while (TRUE);
```

### Comusmer

```c
do {
  wait(full);
  wait(mutex);
  // remove an item from buffer to nextc
  signal(mutex);
  signal(empty);
  // consume the item in nextc
} while (TRUE);
```

- Is there any problem in this version of Bounded Buffer Problem? How to correct the mistakes?

### Main Issue: Risk of Deadlock

In the current implementation, there is a risk of **deadlock** due to the different order of `wait` operations for the **Producer** and **Consumer**:

- **Producer**: `wait(mutex)` followed by `wait(empty)`
- **Consumer**: `wait(full)` followed by `wait(mutex)`

This inconsistency can lead to a deadlock situation. For example:

1. Suppose the buffer is full.
2. The Consumer acquires the `full` semaphore.
3. The Producer acquires the `mutex` semaphore.
4. Both are now waiting for each other to release a semaphore, leading to a deadlock.

#### Solution
The order of `wait` operations should be consistent. The correct approach is to first acquire the synchronization semaphore (`mutex`) and then the condition semaphore (`empty` or `full`). Below is the revised code:

### Revised Producer

```c
do {
  // produce an item in nextp
  wait(empty);
  wait(mutex);
  // add the item to the buffer
  signal(mutex);
  signal(full);
} while (TRUE);
```

