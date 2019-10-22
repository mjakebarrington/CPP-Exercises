# Introduction

Welcome to my C++ tutorials. I will assume that the reader has limited knowledge of computers and/or programming.

A **program** (or "application") is a set of instructions we provide a computer to perform a task. The process of writing these programs is called **programming**. The files we use to write these programs are called the **source code**.

The physical parts that make up a computer are called the **hardware**. When we think of computers we typically think of laptops
and desktops or mobile phones, but computers can be found everywhere. A modern car may have dozens of onboard computers. There may be a
computer in your modern thermostat. The Mars Rover contains computers (which happen to be programmed using C++). The process of
loading the program (instructions) into computer memory is called **executing** the program.

Unfortunately a CPU (central processing unit) does not understand C++ or other high level programming languages. Rather, it understands
only one language: **machine code** (also called machine language or instruction sets). Each machine code instruction is a sequence of
1s and 0s known as **bits**, which is short for binary digits:

```
10110000 01100001
```

Because programming using only 1s and 0s was incredibly tedious and error prone (imagine trying to track down one wrong 1 or 0 in a large program),
higher level languages were invented.

### Assembly Language
Recognizing the need for a more human-readable language, assembly language was created. **Assembly language** is a low-level programming language
which means the instructions we provide by writing assembly are very close (little abstraction) from machine code:

```
MOV EAX, [EBX]	  ; Move the 4 bytes in memory at the address contained in EBX into EAX
MOV [ESI+EAX], CL ; Move the contents of CL into the byte at address ESI+EAX
MOV DS, DX        ; Move the contents of DX into segment register DS
```
Assembly source code is assembled into machine code using a program called an *assembler*.

Assembly code is often quite performant (fast) as it is a semi-direct representation of machine code, but it does have some drawbacks:
Firstly, assembly language requires several instructions to perform basic tasks. Writing a complex program in assembly is remarkably time consuming. Secondly,
assembly language is usually not *portable*, meaning you would have to rewrite most of the source code for a CPU with a different
instruction set.

## High Level Languages
In order to address some of the issues with assembly language, **high level programming languages** were created. High-level programming languages
are either compiled or interpreted. *Some* examples of high level programming languages are C, C++, Python, Java, and JavaScript. C and C++
are sometimes referred to as **mid level programming languages** as they are compiled directly to machine code as opposed to say Python
which runs on an interpreter. Even Java is compiled but is compiled into Java Virtual Machine bytecode.

## Why C++
I won't go too much into the history of C++, but it is certainly interesting, and I would reccomending reading http://www.cplusplus.com/info/history/.
Here's what you should know:

C++ was created by [Bjarne Stroustrup](http://www.stroustrup.com) at Bell Labs in 1979. C++ added additional functionality to the C programming language.
Most notably C++ introduced object-oriented programming. Most (I cant think of one that can't) C++ compilers can actually compile C as well.

Common arguments against C++:
With all the possible programming languages you could learn, why should I learn C++?
Isn't C++ outdated?
I heard C++ is hard!
I want to do xyz, I've heard zyx language is better if I want to do xyz.

One of the major selling points for both C and C++ is they are [incredibly performant](https://benchmarksgame-team.pages.debian.net/benchmarksgame/index.html). They both compile directly to machine code
as opposed to running on an interpreter or compiling into VM bytecode. This allows for direct control over hardware (notably memory) which
CAN make for more performant programs. Keep in mind though: having more freedom and and flexibility can be dangerous if not careful.

C++ is not outdated! It is still in the top-5 most used programming languages as measured by the tiobe index, and is an evolving language.
Revisions to the C++ specification were released in 2003, 2011, 2014, 2017 and we can look forward to the C++20 spec coming out soon. The ISO
committee intends to release a new specification every 3 years.

Common Industries for C++ Development:
Embedded Systems, Robotics, Space, etc. (Institutions such as SpaceX, Blue Origin, Tesla, NASA, Boeing, Raytheon all employ C++ engineers)
Game Development (Most game engines are written in C++. Companies include Epoch, Electronic Arts, Bethesda, Riot, Nintendo)
Back-End Web Development (Facebook, Google, Amazon, Netflix)
Financial Services/Trading (Hudson River Trading, Citadel, Goldman Sachs, etc.)

These are just some of many industries and companies employing C++ developers.

C++ isn't hard, per se, but there is much to learn. With this, I think it's a great language to learn, as knowing C++ will actually help
you to understand the "inner workings" of many other languages with more abstraction. Many interpreters and VMs for other languages are actually written in C or C++.
