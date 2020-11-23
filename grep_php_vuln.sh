#!/bin/bash
echo "############################################"
echo "Grepping for some known PHP vulnerabilities:"
echo "############################################"
vulns=( 
    "\$_GET" 
    "\$_POST" 
    "system"
    "eval"
    "regex"
    "extract"
    "assert"
    "include"
    "shell_exec"
    "unserialize"
    "exec"
    "create_function")

for vuln in "${vulns[@]}"
do
   grep -i -r "$vuln" --color=always -n --include \*.php
   grep -i -r "$vuln" --color=always -n --include \*.inc
done