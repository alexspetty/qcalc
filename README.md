# qCalc: Quantum Calculator

## Overview

**qCalc** is a C-based command-line tool for exploring numeric polarity and primality through a new computational lens. Built on [GMP](https://gmplib.org/) for arbitrary-precision arithmetic, qCalc offers fresh ways to visualize numeric polarity, symmetry, and primality as foundational principles of computation. While some may notice resonances with ancient mathematical and philosophical traditions, qCalc was developed from personal inquiry and later recognized for its alignment with these deeper themes.

---

## Abstract

qCalc delves into numeric polarity within the framework of simulation theory, proposing that numbers may act as fundamental computational elements in a quantum substrate that shapes our perceived reality. In my own process of inquiry, I first wondered if numbers could be direct representations of consciousness. As my thinking evolved, I came to see consciousness instead as something emergent from a quantum mechanical informational substrate, with numbers as its underpinning (akin to bits in binary systems). This quaternary system utilizes digits 0 through 9, pairing 1 with 8, 2 with 7, 3 with 6, and 4 with 5.

In a symbolic echo of Daoist thought (where "the one becomes the three, which becomes the 10,000 things"), the numbers 1, 2, and 5 represent primordial concepts of subject, object, and boundary. These numbers underpin the dynamic processes of contraction and expansion within the numeric framework:

- **Expansion:** The influence of Phi (\(\phi = \frac{1 + 5^{1/2}}{2}\)) symbolizes systemic expansion, resonating with the growth and outward forces in numeric and cosmic patterns.
- **Contraction:** Conversely, contraction is represented by the reciprocal of Phi (\(1/\phi = \frac{1 - 5^{1/2}}{2}\)), embodying the inward forces that stabilize and counterbalance expansion, ensuring systemic balance.

Zero is viewed as the ineffable precursor to unity and differentiation, while 9 and its entire radial family echo the energy that came before infinity descended to manifestation (which is to say before "the simulation" was activated).

qCalc posits that integers themselves are an illusion of distinct particles, and that true comprehension of the quantum field arises through analyzing the number of parts within the whole, represented by the universal consideration set, U. Each integer is perceived as its own universe, consisting of U number of parts, and the project explores the underlying polar structures contained within. The focus extends to understanding how these forces and forms dynamically evolve as U expands and contracts, akin to cymatic patterns in audio oscillations, albeit fundamentally more intrinsic to reality's construction.

In nature, all things seen and unseen reflect optimized methods of encoding and transmitting information, exemplified by DNA and RNA. The quaternary makeup of DNA (through Adenosine (A), Thymine (T), Cytosine (C), and Guanine (G), which pair due to polar forces) has inspired qCalc's exploration of a shift from binary to quaternary paradigms. Similarly, qCalc's numeric relationships demonstrate polarity and symmetry, where numbers take on distinct roles (positive, negative, and neutral), reminiscent of DNA's polar interplay.

At this foundational stage, qCalc employs color coding to visualize such polarities, offering insights into potential computational interactions possibly underlying reality. It acts as an initial step toward quantum-level simulations, wherein numbers embody characteristics akin to quantum particles, providing a framework for understanding how numeric patterns may influence the construction of reality.

---

## Universal Consideration Sets and Higher Context

qCalc is built on the premise that each integer n is not simply a point on the number line, but defines its own universal consideration set, U_n. Each U_n is a structured field, containing all of its symmetries, cycles, and polar relationships; a universe in its own right.

This approach invites users to explore not only the internal structure of a single U_n, but also the broader space of relationships among all such universes. The real landscape is not the linear progression of numbers, but the abstract space formed by the interplay of these consideration sets as they expand, contract, and intersect.

Within this space, mathematics becomes the study of context and transformation. We can ask how properties or patterns in one U_n relate to those in another, whether there exist invariants or mappings across universes, and what new structures or symmetries might emerge when these fields are compared or composed.

By providing both computational tools and a framework for exploring this higher context, qCalc aims to open a path toward a new kind of number theory, one where the focus is not just on individual values, but on the broader architecture of mathematical universes and the relationships that connect them.

---

## Core Concepts

### Quaternary Polarity System

The system uses digits 0 through 9, pairing them into polar complements:

- **1 ↔ 8**  
- **2 ↔ 7**  
- **3 ↔ 6**  act as positive and negative poles respectiely
- **4 ↔ 5**  
- **0 and 9** act as neutral poles

This echoes natural systems like DNA pairing, polarity in magnetism, and Taoist dualities, mapping mathematical behavior onto energetic forces.

### The Polarity Map of the Base-9 Cycle

![Polarity Map](http://www.alexpetty.com/wp-content/uploads/2018/12/numeric-polarity-2.png)

This diagram illustrates the foundational polarity structure embedded within the base-10 number system, as revealed through the first full cycle of 9. In qCalc, this cycle is not just a counting loop—it represents a complete energetic system, one that divides the digits 0 through 9 into three distinct polar domains:

- **Positive Polarity**: 4, 3, 2  
- **Negative Polarity**: 7, 6, 5  
- **Neutral Polarity**: 8, 9, 1  
  (with 0 at the center as the ineffable precursor)

The digits are arranged in mirrored symmetry across a circular field. Each number has a polarity complement (1 with 8, 2 with 7, 3 with 6, 4 with 5), and the diagram shows directional flow within these families—reflecting the contractive and expansive behaviors modeled throughout qCalc.

Unlike traditional number classifications (such as odd versus even), the polarity model reinterprets digits based on their functional role within a universal field. This is more than aesthetic: polarity informs how repeating decimals behave, how field structures emerge, and how numeric “energy” is distributed and balanced.

This model underpins qCalc’s core logic. In particular, it explains why closed repeating cycles that reduce to 9 or 0 carry special significance in the system’s definition of primality, and why integers are treated not as isolated points, but as structured universes that arise through the expansion and contraction of this core polarity cycle.

> "The first cycle of 9 is not the beginning of number—it is the first closure of form."  
> — A. Petty

### Expansion and Contraction

- **Expansion** is modeled by the golden ratio:  
  \(\phi = \frac{1 + \sqrt{5}}{2}\)

- **Contraction** by its reciprocal:  
  \(\frac{1}{\phi} = \frac{1 - \sqrt{5}}{2}\)

These forces manifest in the structure and behavior of numeric sequences, repeating decimals, and prime patterns.

---

## Features

- **Foundational Coordinates (fc)**: Projects integers onto a numeric spiral for positional analysis.
- **Prime Detection**: Uses a novel primality framework based on polarity and repeating decimal behavior.
- **Field Calculations**: Visualizes a number’s fractional field with optional polarity-aware color coding.
- **Reciprocals & Division**: High-precision recurring cycle detection using GMP.
- **Field Grids**: Displays numeric field data in a matrix form for insight into symmetry and energy distribution.

---

## New Definition of Primality

qCalc defines primes based on energetic neutrality and closed-cycle behavior:

1. **Primordial Numbers**: 1, 2, and 5 are base units; only 5 is considered prime by this system.
2. **Radial Check**: Excludes numbers where n % 9 == 0, 3, or 6.
3. **Even Rule**: Excludes all even numbers due to symmetrical divisibility.
4. **Closed Cycle Test**: Valid primes have repeating cycles from 1/n to ((n-1)/2)/n whose digit sums reduce to 9 or 0.

---

## Usage

bash
qcalc help


### Commands

| Command                          | Description                                              |
| -------------------------------- | ---------------------------------------------------------|
| qcalc field N [color]            | Show field values up to N, optionally with color coding  |
| qcalc field-grid N [color]       | Display the 2D fractional grid up to N                   |
| qcalc div N D                    | Show decimal representation of N/D with repeating cycle  |
| qcalc rec N                      | Show reciprocal of N                                     |
| qcalc fc N                       | Show foundational coordinates for N                      |
| qcalc prime N [check-full]       | Check primality of N                                     |
| qcalc prime-debug N [check-full] | Verbose primality analysis for N                         |
| qcalc copyright                  | Show version and license                                 |

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
2. Launch **MSYS2 UCRT64** shell
3. Install build dependencies:

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

## Future Directions

* GPU acceleration via CUDA (experimental)
* MSVC-compatible builds via Boost Multiprecision
* Visual UI for grid rendering
* Collaborative prime visualization server

---
## What qCalc Delivers: Reality, Experiment, and Vision

qCalc is both a practical computational tool and a platform for mathematical and philosophical exploration. Here is what the codebase actually does:

### What the Codebase Delivers

* Polarity and Field Visualization:
  qCalc computes, color-codes, and visualizes the polarity of digits, repeating decimals, and numeric fields. Users can immediately see patterns and symmetries in integer fields and decimal expansions.

* Alternative Primality Framework:
  qCalc implements a novel definition of primality based on closed cycle behavior and digital root neutrality (digits summing to 0 or 9), which is distinct from classical divisibility-based tests.

* Quaternary and Pairing System:
  Numeric polarity pairings (1 with 8, 2 with 7, 3 with 6, 4 with 5) are encoded in the logic and color schemes, allowing exploration of these relationships in a computational context.

* Arbitrary Precision and Batch Experimentation:
  Built on GMP, qCalc can compute with very large numbers and run automated tests and field visualizations at scale.

* Exploratory Command-Line Interface and Test Suite:
  The included scripts and command-line interface allow users to run, test, and expand on all core features.

### What Is Exploratory or Speculative

* Simulation Theory, Quantum Substrate, and Consciousness:
  While qCalc is inspired by questions about simulation theory and the quantum nature of reality, it does not simulate physical quantum systems or consciousness. These concepts serve as motivating metaphors for new mathematical patterns and definitions.

* Physical and Biological Analogies:
  The analogies to DNA, polarity in physics, and quantum informational structures are suggestive and offer new ways of thinking, but remain unproven. The code does not directly analyze DNA or physical systems.

### What Remains to Be Proven

For more on how these ideas might be formalized, tested, or proven, see the next section, "From Speculation to Proof."

---

## From Speculation to Proof: An Invitation

qCalc was born from intuition, observation, and synthesis, but its deepest claims remain, for now, speculative. I believe that moving from conceptual exploration to mathematical proof is both possible and necessary. Here are a few ways I see this work becoming provable (or at least testable):

1. Explicit Conjectures: Each core assertion (for example, the redefinition of primality based on polarity neutrality) can be formalized as a mathematical conjecture. Such conjectures can then be tested against known results and computationally explored for counterexamples.

2. Computational Experiments: The codebase itself is designed for large-scale, automated testing. By generating and analyzing data (for example, checking qCalc's definition of primality across broad numeric ranges), patterns or anomalies can be identified and studied.

3. Comparison with Established Theory: By mapping the outputs and behaviors of qCalc to classical number theory, modular arithmetic, or even physical models, new relationships or boundaries may be uncovered.

4. Peer Collaboration: I encourage mathematicians, physicists, and theorists to propose proofs, refutations, or refinements of any aspect of this framework. Even identifying a single counterexample to a conjecture would be a valuable contribution.

This section will be updated as new results, experiments, or theoretical advances emerge. qCalc is an experiment in both mathematics and scientific process, and I invite you to help move it from principled speculation toward proof.

---

## Note on Originality and Historical Context

The ideas underlying qCalc arose independently, as a result of my own personal explorations and the exigencies of my life and thought. Only after developing the framework (particularly the notions of numeric polarity and cycle-based primality) did I become aware of resonances with ancient mathematical and philosophical traditions, such as those of Pythagoras and certain classical and Daoist concepts.

The formulation and implementation presented here, as far as I am aware, are original in their algorithmic approach and synthesis. I offer this work as a starting point for discussion and further inquiry, recognizing that new paths in mathematics sometimes echo foundational ideas long forgotten.

---

In every number, a shadow yearns for form,  
Infinity pauses, counting what it’s lost.  
Between the silence and the sum,  
We find the shape that thought forgot.

A. Petty .:.

---

## Contributors

- **Alexander S. Petty**, Design, theory, architecture  
- **Dario Cangialosi**, Cycle detection and GMP integration (implemented the entire first version of the software)

---

## License

(C) 1997–2025 Alexander S. Petty
qCalc is distributed under an open-source license. See LICENSE for details.