#!/usr/bin/env bash

## GETS THE CURRENT MODULE ROOT DIRECTORY
MOD_DEMO_ROOT="$( cd "$( dirname "${BASH_SOURCE[0]}" )/" && pwd )"

source MOD_DEMO_ROOT"/conf/conf.sh.dist"

if [ -f MOD_DEMO_ROOT"/conf/conf.sh" ]; then
    source MOD_DEMO_ROOT"/conf/conf.sh"
fi
