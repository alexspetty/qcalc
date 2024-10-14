# qCalc - Quantum Calculator

## Abstract

qCalc delves into numeric polarity within the framework of simulation theory, proposing that numbers may act as fundamental computational elements in a quantum substrate that shapes our perceived reality. I initially considered numbers as direct representations of consciousness in a Pythagorean sense, however my work now suggests consciousness emerges from a quantum mechanical informational substrate with numbers as its underpinning — akin to bits in binary systems. This quaternary system utilizes digits 0 through 9, pairing 1 with 8, 2 with 7, 3 with 6, and 4 with 5.

In a symbolic echo of Daoist thought, where "the one becomes the three, which becomes the 10,000 things," the numbers 1, 2, and 5 represent primordial concepts of subject, object, and boundary. Here, 0 is viewed as the ineffable precursor to unity and differentiation, while 9 echoes this primordial precursor to unity.

qCalc posits that integers themselves are an illusion of distinct particles, and true comprehension of the quantum field arises through analyzing the number of parts within the whole — represented by the universal consideration set, U. Each integer is perceived as its own universe, consisting of U number of parts, and the project explores the underlying polar structures contained within. The focus extends to understanding how these forces and forms dynamically evolve as U expands and contracts, akin to cymatic patterns in audio oscillations, albeit fundamentally more intrinsic to reality's construction.

In nature, all things seen and unseen, the intricate processes reflect optimized methods of encoding and transmitting information, exemplified by DNA and RNA. The quaternary makeup of DNA, through Adenosine (A), Thymine (T), Cytosine (C), and Guanine (G), which pair due to polar forces, has inspired qCalc's exploration of a shift from binary to quaternary paradigms. Similarly, qCalc's numeric relationships demonstrate polarity and symmetry, where numbers take on distinct roles — positive, negative, and neutral — reminiscent of DNA's polar interplay. At this foundational stage, qCalc employs color coding to visualize such polarities, offering insights into potential computational interactions possibly underlying reality. It acts as initial steps towards quantum-level simulations, wherein numbers embody characteristics akin to quantum particles, providing a framework for understanding how numeric patterns may influence the construction of reality.

## Contributors

We would like to acknowledge the valuable contributions to the qCalc project:

- **Dario Cangialosi** - Provided the initial implementation especially for closed and open cycle detection and taught me how to utilize the GMP library.

## New Definition for Primality

qCalc introduces a novel framework for determining the primality of integers. In this system, a prime number is characterized not only by its lack of divisibility but through its neutral numeric polarity, a unique property resonating with the stabilizing constructs 0 and 9 within a broader systemic pattern. This numeric polar neutrality is posited to inherently prevent divisibility by other numbers—rules inherent to the quantum self-organizing systems they comprise—unveiling deeper structural properties shaping our particulate reality.

The criteria for primality within qCalc's framework include:

1. **Primordial Numbers**: Numbers 1, 2, and 5 are recognized as primordial and foundational. Though 1 and 2 do not meet the criteria for primality, they, along with 5, represent basic constructs at the system's lowest level. These numbers underpin the dynamic processes of contraction and expansion within the numeric framework:
   - **Expansion**: The influence of Phi (\(\phi = \frac{1 + 5^{1/2}}{2}\)) symbolizes systemic expansion, resonating with the growth and outward forces in numeric and cosmic patterns.
   - **Contraction**: Conversely, the contraction is represented by the reciprocal of Phi (\(1/\phi = \frac{1 - 5^{1/2}}{2}\)), embodying the inward forces that stabilize and counterbalance expansion, ensuring systemic balance.
2. **Radial Check**: An integer is excluded from being considered prime if its modulo 9 equals 0, 3, or 6, aligning its placement within recognized geometric symmetries and axial alignments.
3. **Even Number Rule**: Even numbers are non-prime due to inherent divisional symmetry, consistent with established mathematical properties and polar dynamics.
4. **Fractional Cycle Check**: For integers greater than 5, fractional constructs from 1/n to (n-1)/2/n must achieve sums of 9 or 0 within repeating decimal sequences. This qualitative outcome is confirmed through detailed algorithmic analysis, reflecting a stabilizing equilibrium akin to physical systems, thus rendering them non-interactive with other integers.

This framework suggests that numbers embody cosmic symmetries and mathematical structures integral to quantum mechanics principles. By considering numeric patterns as integral parts of the universe's deeper informational substrate, qCalc aspires to integrate these theoretical insights seamlessly with empirical exploration, welcoming rigorous scrutiny and engagement across scientific disciplines.

## Features

- **Foundational Coordinates (fc)**: Calculates the foundational coordinates of an integer along a numeric spiral.
- **Prime Checks**: Supports checking an integer's primality and optionally displays its foundational coordinates.
- **Division with Decimal Expansion**: Executes and prints divisions, accurately identifying repeating decimal sequences.
- **Field and Color Field Calculations**: Illustrates the divisions leading up to a given number with polarity-based color representation:
  - **Neutral (0, 9)**: Depicted in blue, representing neutral computational state.
  - **Positive Pole (3)**: Highlighted in bold red, symbolizing a source of positive force attraction.
  - **Negative Pole (6)**: Highlighted in bold black, symbolizing a source of negative force attraction.
  - **Positive Form (2, 4, 8)**: Shown in lighter red, denoting values drawn to positive force influence.
  - **Negative Form (1, 5, 7)**: Shown in dark grey, denoting values drawn to negative force influence.

## Usage

Example commands:
- `qcalc help` - Displays a help message with available commands.
- `qcalc copyright` - Prints copyright information.
- `qcalc field INTEGER` - Displays the numeric field values up to a given integer.
- `qcalc colorfield INTEGER` - Displays the numeric field with color coding to represent polarity.
- `qcalc div INTEGER INTEGER` - Performs division and identifies repeating decimals.
- `qcalc prime INTEGER [check-first|check-full]` - Checks primality based on qCalc's unique rules.
- `qcalc prime-debug INTEGER [check-first|check-full]` - Debug mode for detailed primality step logs.

## Installation

qCalc requires GMP for arbitrary precision arithmetic. To install GMP on Ubuntu:
```
sudo apt-get install libgmp-dev
```
Then, you can build qCalc using CMake:
```
mkdir build
cd build
cmake ..
cmake --build .
```

## Practical Applications

qCalc offers numerous potential applications in fields such as quantum computing, theoretical physics, mathematical modeling, and even teleology. For instance, by applying its unique primality tests, qCalc might offer novel insights into quantum cryptographic systems, enhance algorithmic efficiency in data structures, and provide new methods for pattern recognition in complex datasets.

## Future Directions

The exploration of numerical polarity and its relationship to cosmic symmetries paves the way for advancements in interdisciplinary research. Future iterations of qCalc might integrate empirical findings from experimental quantum systems, enhancing our visualization of numeric particles and the oscillatory numeric wave substrates associated with the contraction and expansion of the universal consideration set (U). This presents significant potential for collaborative exploration within academic circles and technology-driven environments.


## License

(C) 1997-2024 A. Petty .:.

qCalc is distributed under an open-source license. See LICENSE for more details.