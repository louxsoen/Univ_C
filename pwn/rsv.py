from pwn import *

print("Adf")
r = process("./snd")

for i in range(100):
    print("Solving " + str(i))

    r.recvuntil(":")
    rawa = r.recvuntil("+")[:-1]
    a = int(rawa)

    rawb = r.recvuntil("=")[:-1]
    b = int(rawb)

    ans = a + b
    
    r.sendline(str(ans))

    r.recvuntil("Correct")

r.interactive()