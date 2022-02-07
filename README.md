# Ceasar cipher

CS50 Assignment Week 2

That's a program that encrypts messages using Caesar’s cipher, per the below.

```
$ ./caesar 13
plaintext:  HELLO
ciphertext: URYYB
```

Here’s how the program might work if the user provides a key of 13 and a plaintext of hello, world:

```
$ ./caesar 13
plaintext:  hello, world
ciphertext: uryyb, jbeyq
```
Notice that neither the comma nor the space were “shifted” by the cipher. Only rotate alphabetical characters!
