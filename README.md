# ParityDemonstration
A tiny C++ program that shows how a single parity bit can detect a one-bit error in a byte — and where that method breaks down.

**What it does:**

Starts with an 8-bit value (one byte).
Computes a 9th bit, the parity bit, by XOR-ing all 8 bits together.
Flips a bit to simulate memory corruption.
Recomputes the parity and reports whether the change was detected.
Demonstrates the blind spot: flip two bits and the error slips through.

**The idea:**

A parity bit is chosen so the total number of 1s is always even. When the data is read back, you recompute it: if the new parity no longer matches the stored one, a bit must have flipped. The catch is that two flips cancel out — the count stays even — so an even number of errors goes unnoticed. Catching that case is what full error-correcting code (ECC) is for.

**Build & run:**

Needs any C++ compiler (g++ or clang++):
