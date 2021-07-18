from pwn import *
r = process("basic_exploitation_000")

r.send("hello")