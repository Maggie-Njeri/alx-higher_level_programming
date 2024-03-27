#!/bin/bash
# used to send a request to url and get its body
curl -s "${1}" | wc -c
