#!/bin/bash
ifconfig | grep "..:..:..:..:.." | sed 's/ether//g' | sed 's/[[:space:]]//g'
