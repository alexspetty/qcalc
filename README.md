# qCalc: Quantum Calculator

## Overview

**qCalc** is a command-line tool for exploring repeating decimals, number fields, and a novel theory of primality based on digit symmetry and cycle behavior. Written in C and powered by [GMP](https://gmplib.org/) for arbitrary-precision arithmetic, qCalc combines computational rigor with an invitation to rethink number as a structural, even symbolic, medium.

Whether you're a developer exploring numeric patterns, a mathematician curious about alternative definitions of primality, or a philosopher of math seeking deeper numeric symmetry, qCalc provides both a practical toolkit and an exploratory lens.

---

## Installation

### Linux (Ubuntu/Debian)

```bash
sudo apt-get install libgmp-dev
git clone https://github.com/alexspetty/qcalc.git
cd qcalc
mkdir build && cd build
cmake ..
cmake --build .
./qcalc field 9 color
```

### Windows (MSYS2 / MinGW64 / UCRT64)

1. Install [MSYS2](https://www.msys2.org/)
2. Open MSYS2 UCRT64 shell
3. Install dependencies:

```bash
pacman -Syu
pacman -S --needed \
  mingw-w64-ucrt-x86_64-toolchain \
  mingw-w64-ucrt-x86_64-cmake \
  mingw-w64-ucrt-x86_64-gmp
```

4. Build the project:

```bash
git clone https://github.com/alexspetty/qcalc.git
cd qcalc
mkdir build && cd build
cmake -G "MinGW Makefiles" -DCMAKE_PREFIX_PATH=/ucrt64 ..
mingw32-make
./qcalc field 9 color
```

---

## Quick Start

### Check a Prime

```bash
qcalc prime 7
```

### Explore a Decimal Field

```bash
qcalc rec 19
```

### Visualize a Fraction Field with Color

```bash
qcalc field 9 color
```

---

## CLI Commands

| Command                      | Description                                       |
| ---------------------------- | ------------------------------------------------- |
| `qcalc field N [color]`      | Show field values up to N, optionally color-coded |
| `qcalc field-grid N [color]` | Display 2D field grid                             |
| `qcalc div N D`              | Show decimal expansion of N divided by D          |
| `qcalc rec N`                | Show reciprocal of N                              |
| `qcalc fc N`                 | Show foundational coordinates                     |
| `qcalc prime N [check-full]` | Check primality of N                              |
| `qcalc prime-debug N`        | Verbose primality analysis                        |
| `qcalc copyright`            | Show license and version                          |

---

## What Makes qCalc Different?

In qCalc, **prime numbers are redefined** not only by indivisibility, but by how they behave structurally in their decimal expansions.

A number is considered prime when:

* Its reciprocal forms a **closed repeating cycle**
* The digits of this cycle **sum to 9 or 0 modulo 9**
* It shows no net numeric polarity in the digit pairing structure

This model emphasizes **magnetic neutrality and symmetry**, rather than traditional factorization alone.

---

### The Polarity Map of the Base-9 Cycle

![Polarity Map](http://www.alexpetty.com/wp-content/uploads/2018/12/numeric-polarity-2.png)

This diagram illustrates the energetic symmetry of digits 1 through 9 as they appear in the first full cycle of base-10. While the system uses base 10, the structure that emerges is governed by modulus 9 behavior; the digital sum cycles, polarity mirrors, and repeating decimal closures that define the energetic field of qCalc.

- Positive Polarity: 4, 3, 2  
- Negative Polarity: 7, 6, 5  
- Neutral Polarity: 8, 9, 1  
- 0 sits not at the center, but between 4 and 5; the inflection point where rotational flow reverses

---

### Cyclic Polarity Reversal at Zero

![Four's Table](http://www.alexpetty.com/wp-content/uploads/2018/12/fours-table-chart-.png)  
*Figure: 4's multiplication table in circular mod-9 space*

![Five's Table](http://www.alexpetty.com/wp-content/uploads/2018/12/fives-table-chart-1.png)  
*Figure: 5's multiplication table in circular mod-9 space*

These star path diagrams show how multiplication tables cycle across mod-9 space. The turning point at 0, precisely between 4 and 5, marks the boundary of polarity reversal. It is not the center, but the hinge.

![Multiplication Grid](http://www.alexpetty.com/wp-content/uploads/2018/12/foundational-tables-of-multiplication.png)  
*Figure: Full multiplication table mod 9*

Here, the m9 column confirms that repeating cycle closures at 0 and 9 are consistent phase boundaries.

---

### Expansion and Contraction

- Expansion is modeled by the golden ratio:  
  \(\phi = \frac{1 + \sqrt{5}}{2}\)

- Contraction is modeled by its reciprocal:  
  \(\frac{1}{\phi} = \frac{1 - \sqrt{5}}{2}\)

These forces are reflected in how digit polarity flows across fields, affecting cycle lengths, symmetry, and resonance.

---

## Who It's For

* **Developers** exploring numerical patterns or high-precision decimal behavior
* **Mathematicians** curious about alternative frameworks for primality
* **Educators** teaching repeating decimals, modular arithmetic, or symbolic systems
* **Thinkers** who see numbers as structural or symbolic actors, not just quantities

---

## Features

* **Repeating Decimal Detection** using GMP-backed cycle discovery
* **Color-coded Field Visualizations** to explore numeric symmetry
* **Alternative Prime Detection** based on closed cycle logic and polarity
* **Foundational Coordinates** to map numbers into spiral space

---

## From Tool to Theory

Beyond its utility as a numeric analyzer, qCalc is also a **conceptual proposal**: that number encodes structural and possibly symbolic properties beyond quantity.

It introduces ideas like:

* **Digit Polarity:** Mirrored digit pairs (1↔8, 2↔7, etc.) expressing energetic flow
* **Magnetic Neutrality:** Numbers with symmetrical, balanced decimal cycles
* **Universal Fields:** Each integer `n` defines its own field `Uₙ`, containing its full symmetry structure

If you're here to explore these ideas further, continue reading in [`THEORY.md`](./THEORY.md) (or below).

---

## FAQ

**Is this just numerology or pseudoscience?**
No. The code is rigorous and based on GMP. The metaphors — polarity, symmetry, neutrality — are speculative, but grounded in observable numeric behavior.

**Why redefine "prime"?**
To explore whether structural properties of decimal expansions can reveal new insights into numeric identity. It's a supplemental model, not a replacement.

**What is the real utility of qCalc?**

* Detecting and visualizing repeating decimals
* Teaching numeric cycles and modular structure
* Offering a symbolic language for number theory

**Does qCalc try to "prove" anything?**
Not in the classical sense. It's an experimental lens and framework — a way to see structure others may have missed.

---

## Sample Session

```bash
qcalc prime 7
```

**Output:**

```
Prime Status: TRUE
Cycle: [1, 2, 4, 5, 7, 8]
Cycle Sum (mod 9): 9
Polarity: Neutral
Structure: Closed Cycle
```

```bash
qcalc rec 19
```

**Output:**

```
0.|052631578947368421| 9
```

---

## Epilogue

> In every number, a shadow yearns for form,
> Infinity pauses, counting what it has lost.
> Between the silence and the sum,
> We find the shape that thought forgot.
> — *A. Petty .:.*

---

## Contributors

* **Alexander S. Petty** – Theory, design, implementation
* **Dario Cangialosi** – Cycle detection and GMP integration

---

## License

(C) 1997–2025 Alexander S. Petty
qCalc is distributed under an open-source license. See `LICENSE` for details.
