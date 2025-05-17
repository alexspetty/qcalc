# qCalc: Quantum Calculator

## Overview

**qCalc** is a C-based command-line tool for exploring numeric polarity and primality through a new computational lens. Built on [GMP](https://gmplib.org/) for arbitrary-precision arithmetic, qCalc offers new ways to visualize numeric polarity, symmetry, and primality as foundational principles of computation. While some may notice resonances with ancient mathematical and philosophical traditions, qCalc was developed from personal inquiry and later recognized for its alignment with these deeper themes.

---

## Abstract

qCalc explores numeric polarity within the framework of simulation theory, proposing that numbers may act as fundamental computational elements in a quantum substrate that shapes our perceived reality. In my own process of inquiry, I first wondered if numbers could be direct representations of consciousness. As my thinking evolved, I came to see consciousness instead as something emergent from a quantum mechanical informational substrate, with numbers as its underpinning (akin to bits in binary systems).

This system utilizes a polarity structure across digits 0 through 9, organizing them not by conventional arithmetic properties, but by energetic and functional roles. This leads to mirrored pairings and the emergence of a quaternary polarity model with implications for expansion, contraction, and the perception of numeric symmetry.

The project explores how these roles manifest dynamically, how they relate to foundational philosophical concepts, and how they may offer insight into the encoding principles behind information structures like DNA or harmonic fields. At this stage, qCalc is a computational framework and philosophical proposal; an invitation to explore, test, and refine these ideas.

---

## Universal Consideration Sets and Higher Context

qCalc is built on the premise that each integer n is not simply a point on the number line, but defines its own universal consideration set, U_n. Each U_n is a structured field containing all of its symmetries, cycles, and polar relationships; a universe in its own right.

This approach invites users to explore not only the internal structure of a single U_n, but also the broader space of relationships among all such universes. The real landscape is not the linear progression of numbers, but the abstract space formed by the interplay of these consideration sets as they expand, contract, and intersect.

Within this space, mathematics becomes the study of context and transformation. We can ask how properties or patterns in one U_n relate to those in another, whether there exist invariants or mappings across universes, and what new structures or symmetries might emerge when these fields are compared or composed.

---

## Core Concepts

### Quaternary Polarity System

Digits 0 through 9 are grouped into mirrored polarity pairs:

- 1 with 8  
- 2 with 7  
- 3 with 6 (positive and negative poles respectively)  
- 4 with 5  
- 0 and 9 as neutral or transitional poles

This structure maps onto concepts found in DNA base pairing, magnetic polarity, and symbolic cosmologies. It provides the foundation for qCalc's alternative model of numeric identity.

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

## Features

- Foundational Coordinates (fc): Projects integers onto a numeric spiral for positional analysis  
- Prime Detection: Implements a novel primality framework based on polarity and repeating decimal behavior  
- Field Calculations: Visualizes a number’s fractional field with optional polarity-aware color coding  
- Reciprocals and Division: High-precision recurring cycle detection using GMP  
- Field Grids: Displays numeric field data in matrix form to reveal structure and symmetry

---

## New Definition of Primality

In qCalc, primality is redefined according to the structural and energetic nature of number fields, rather than divisibility alone. Numbers are categorized into three primary types:

### 1. Structural Numbers (Primordial Numbers)

- These include 1, 2, and 5
- They are not considered prime under this model
- They form the foundational scaffolding of the conscious field
- 1 represents subject, 2 represents duality, and 5 arises automatically from the presence of 2

### 2. Polar Numbers (Closed Cycle Fields)

- These numbers exhibit polarity; they are either positive, negative, or neutral
- Polarity is established when Unity falls into Plurality
- Polar numbers have closed internal cycles and shepherd the world of form
- Examples include 3 (positive), 6 (negative), and 9 (neutral)

### 3. Form Numbers (Open Cycle Fields)

- These numbers are governed by polarity but do not impart it
- They are part of the observable world of creation and physical phenomena
- Examples include 4, 8, 10, and higher multiples that follow doubling or halving patterns

---

### Foundational Criteria for Primality

A number is considered prime in qCalc only when:

- Its entire field exhibits a closed-cycle internal structure
- Each cycle within the field sums to 9 (mod 9), signifying magnetic neutrality
- The number does not exhibit a net positive or negative polarity
- It is magnetically inert and unable to geometrically integrate with other fields

---

### Summary of Primality Conditions

1. **Structural Numbers are Excluded:**  
   1, 2, and 5 are foundational, not prime. They generate the field, but are not part of polarity-neutral structures.

2. **Polarity Check:**  
   - 3 is excluded; it is a positively polarized archetype  
   - 6 is excluded; it is negatively polarized  
   - 9 is neutral, but functions as a phase boundary, not a prime field

3. **Magnetic Neutrality:**  
   - 7 is the first true prime field  
   - Prime fields are symmetrical, magnetically neutral, and closed-cycle  
   - They often produce decimal expansions whose digits reduce to 9 or 0

---

### Implications

- Classical indivisibility is a side effect of neutrality; not the cause
- Primes are magnetically inert; they cannot form composite geometries without violating field symmetry
- Their atomic nature arises from structural isolation, not arithmetic

---

### Example Prime Fields

- **7:** First magnetically neutral field  
- **11:** Composed of symmetric sequences summing to 9  
- **13, 17, 19, 23:** All contain field components that reflect polarity symmetry and neutrality

---

This redefinition places primality within the energetic structure of number, revealing it as a state of perfect magnetic balance, not just arithmetic isolation. It aligns with the broader qCalc principle that numbers express more than quantity; they encode structural roles within a deeper field.

---

## Usage

```bash
qcalc help
````

### Commands

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

## Installation

### Linux (Ubuntu/Debian)

```bash
sudo apt-get install libgmp-dev
git clone https://github.com/yourusername/qcalc.git
cd qcalc
mkdir build && cd build
cmake ..
cmake --build .
./qcalc field 9 color
```

---

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
git clone https://github.com/yourusername/qcalc.git
cd qcalc
mkdir build && cd build
cmake -G "MinGW Makefiles" -DCMAKE_PREFIX_PATH=/ucrt64 ..
mingw32-make
./qcalc field 9 color
```

> Output binary is `qcalc.exe`

---

## Practical Applications

* Cryptography and quantum-inspired key systems
* Symbolic computation in simulation theory
* Visual analysis of numeric structure and field symmetry
* Educational and philosophical explorations of prime theory

---

## What qCalc Delivers: Reality, Experiment, and Vision

### What the Codebase Delivers

* Visualizes polarity, symmetry, and fractional field behavior
* Implements a new primality logic based on cycle neutrality
* Offers a polarity-based pairing model distinct from conventional number theory
* Provides a CLI and test framework for automated numeric experiments

### What Is Exploratory or Speculative

* Simulation theory and consciousness metaphors are unproven and serve as inspiration
* DNA and physical analogies are conceptual, not empirical
* The new prime model is unverified relative to classical number theory

### What Remains to Be Proven

See the next section for paths toward testing and formalization.

---

## From Speculation to Proof: An Invitation

qCalc was born from intuition, observation, and synthesis. Its deepest claims remain speculative but testable. Here is how this work may move toward proof:

1. Conjectures: Formalize core claims and test against known theorems
2. Experiments: Use qCalc to automate tests across large ranges
3. Comparison: Map outputs against classical number theory and modular forms
4. Collaboration: Invite mathematicians and physicists to test, refute, or expand the model

---

## Note on Originality and Historical Context

The ideas in qCalc emerged through personal exploration. Only later did they reveal parallels to older frameworks such as Pythagorean, classical, and Daoist mathematics. While these echoes are real, the system and code were developed independently. This work stands as an original synthesis and ongoing invitation to collaborative inquiry.

---

## Epilogue

In every number, a shadow yearns for form,
Infinity pauses, counting what it has lost.
Between the silence and the sum,
We find the shape that thought forgot.

A. Petty .:.

---

## Contributors

* Alexander S. Petty – Design, theory, architecture
* Dario Cangialosi – Cycle detection and GMP integration

---

## License

(C) 1997–2025 Alexander S. Petty
qCalc is distributed under an open-source license. See `LICENSE` for details.

```

---