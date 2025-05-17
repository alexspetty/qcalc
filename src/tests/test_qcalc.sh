#!/usr/bin/env bash

echo "Starting qCalc test suite..."

# Optional: specify qcalc binary via command line or QCALC_BIN env var
#   QCALC_BIN=/custom/path/qcalc ./test_qcalc.sh
#   ./test_qcalc.sh /custom/path/qcalc

BIN="${QCALC_BIN:-../../build/qcalc}"
if [ $# -ge 1 ]; then
    BIN="$1"
fi
if [ ! -x "$BIN" ]; then
    echo "ERROR: qcalc binary not found at $BIN"
    exit 1
fi

# Test commands
tests=(
    "help"
    "field 7"
    "field 7 color"
    "field-grid 5"
    "field-grid 5 color"
    "div 7 3"
    "rec 4"
    "fc 13"
    "prime 19"
    "prime-debug 19"
    "prime 27 check-full"
    "prime-debug 27 check-full"
    "copyright"
)

fail_count=0

for cmd in "${tests[@]}"; do
    echo -n "Testing: $cmd ... "
    output=$($BIN $cmd 2>&1)
    status=$?
    if [ $status -ne 0 ]; then
        echo "FAIL"
        echo "$output"
        fail_count=$((fail_count + 1))
    else
        echo "OK"
    fi
done

if [ $fail_count -eq 0 ]; then
    echo "All tests passed."
else
    echo "$fail_count test(s) failed."
fi
