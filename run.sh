#!/bin/bash

FNAME=$1

./cmm "${FNAME}.cmm"
./pl0_vm/pl0i "${FNAME}.pl"
