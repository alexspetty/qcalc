# qCalc: Quantum Calculator

## Overview

**qCalc** explores numeric polarity and primality within the framework of simulation theory. It proposes that numbers may act as fundamental computational elements in a quantum substrate that shapes our perceived reality. Originally grounded in a Pythagorean view of numbers as direct representations of consciousness, the project now suggests that consciousness emerges from a deeper informational layer with numbers functioning like qubits or symbolic instructions in a quantum engine.

This C-based command-line tool uses [GMP](https://gmplib.org/) for arbitrary-precision arithmetic and offers new ways to visualize numeric polarity, symmetry, and primality as foundational principles of computation.

---

## Abstract

qCalc delves into numeric polarity within the framework of simulation theory, proposing that numbers may act as fundamental computational elements in a quantum substrate that shapes our perceived reality. I initially considered numbers as direct representations of consciousness in a Pythagorean sense, however my work now suggests consciousness emerges from a quantum mechanical informational substrate with numbers as its underpinning, akin to bits in binary systems. This quaternary system utilizes digits 0 through 9, pairing 1 with 8, 2 with 7, 3 with 6, and 4 with 5.

In a symbolic echo of Daoist thought, where "the one becomes the three, which becomes the 10,000 things," the numbers 1, 2, and 5 represent primordial concepts of subject, object, and boundary. These numbers underpin the dynamic processes of contraction and expansion within the numeric framework:
   - **Expansion**: The influence of Phi (\(\phi = \frac{1 + 5^{1/2}}{2}\)) symbolizes systemic expansion, resonating with the growth and outward forces in numeric and cosmic patterns.
   - **Contraction**: Conversely, the contraction is represented by the reciprocal of Phi (\(1/\phi = \frac{1 - 5^{1/2}}{2}\)), embodying the inward forces that stabilize and counterbalance expansion, ensuring systemic balance. 
0 is viewed as the ineffable precursor to unity and differentiation, while 9 and its entire radial family echoes the energy that came before infinity descended to manifestation; which is to say before "the simulation" was activated.

qCalc posits that integers themselves are an illusion of distinct particles, and true comprehension of the quantum field arises through analyzing the number of parts within the whole, represented by the universal consideration set, U. Each integer is perceived as its own universe, consisting of U number of parts, and the project explores the underlying polar structures contained within. The focus extends to understanding how these forces and forms dynamically evolve as U expands and contracts, akin to cymatic patterns in audio oscillations, albeit fundamentally more intrinsic to reality's construction.

In nature, all things seen and unseen, the intricate processes reflect optimized methods of encoding and transmitting information, exemplified by DNA and RNA. The quaternary makeup of DNA, through Adenosine (A), Thymine (T), Cytosine (C), and Guanine (G), which pair due to polar forces, has inspired qCalc's exploration of a shift from binary to quaternary paradigms. Similarly, qCalc's numeric relationships demonstrate polarity and symmetry, where numbers take on distinct roles, positive, negative, and neutral, reminiscent of DNA's polar interplay. At this foundational stage, qCalc employs color coding to visualize such polarities, offering insights into potential computational interactions possibly underlying reality. It acts as initial steps towards quantum-level simulations, wherein numbers embody characteristics akin to quantum particles, providing a framework for understanding how numeric patterns may influence the construction of reality.

---

## Core Concepts

### Quaternary Polarity System

The system uses digits 0 through 9, pairing them into polar complements:

- **1 ↔ 8**  
- **2 ↔ 7**  
- **3 ↔ 6**  
- **4 ↔ 5**  
- **0 & 9** act as neutral poles

This echoes natural systems like **DNA pairing**, **polarity in magnetism**, and **taoist dualities**, mapping mathematical behavior onto energetic forces.

### Expansion & Contraction

- **Expansion** is modeled by the golden ratio:  
  \(\phi = \frac{1 + \sqrt{5}}{2}\)
  
- **Contraction** by its reciprocal:  
  \(\frac{1}{\phi} = \frac{1 - \sqrt{5}}{2}\)

These forces manifest in the structure and behaviors of numeric sequences, repeating decimals, and primes.

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

| Command                            | Description                                               |
| ---------------------------------- | --------------------------------------------------------- |
| qcalc field N [color]            | Show field values up to N, optionally with color coding |
| qcalc field-grid N [color]       | Display the 2D fractional grid up to N                  |
| qcalc div N D                    | Show decimal representation of N/D with repeating cycle |
| qcalc rec N                      | Show reciprocal of N                                    |
| qcalc fc N                       | Show foundational coordinates for N                     |
| qcalc prime N [check-full]       | Check primality of N                                    |
| qcalc prime-debug N [check-full] | Verbose primality analysis for N                        |
| qcalc copyright                  | Show version and license                                  |

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

## Contributors

- **Alexander S. Petty**, Design, theory, architecture  
- **Dario Cangialosi**, Cycle detection and GMP integration (implemented the entire first version of the software)

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

## Note on Originality and Historical Context

The ideas underlying qCalc arose independently, as a result of my own personal explorations and the exigencies of my life and thought. Only after developing the framework (particularly the notions of numeric polarity and cycle-based primality) did I become aware of resonances with ancient mathematical and philosophical traditions, such as those of Pythagoras and certain classical and Daoist concepts.

The formulation and implementation presented here, as far as I am aware, are original in their algorithmic approach and synthesis. I offer this work as a starting point for discussion and further inquiry, recognizing that new paths in mathematics sometimes echo foundational ideas long forgotten.

---

## License

(C) 1997–2025 Alexander S. Petty
qCalc is distributed under an open-source license. See LICENSE for details.