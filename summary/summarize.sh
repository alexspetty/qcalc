#!/usr/bin/env bash

# Create summary directory if it doesn't exist
mkdir -p ./summary

# Output file
OUTPUT_FILE="./summary/summary.md"
echo "# QCalc Source Summary" > "$OUTPUT_FILE"
echo "" >> "$OUTPUT_FILE"
echo "This document summarizes the contents of all C source and header files in the project." >> "$OUTPUT_FILE"
echo "" >> "$OUTPUT_FILE"

# List of files to include
FILES=$(find ./src ./include -type f \( -name "*.c" -o -name "*.h" \) | sort)

# Append each file's contents
for FILE in $FILES; do
    echo "## File: ${FILE#./}" >> "$OUTPUT_FILE"
    echo '```c' >> "$OUTPUT_FILE"
    cat "$FILE" >> "$OUTPUT_FILE"
    echo '```' >> "$OUTPUT_FILE"
    echo "" >> "$OUTPUT_FILE"
done

echo "Summary written to $OUTPUT_FILE"
