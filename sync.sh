#!/usr/bin/env bash
sshpass -p 'simonk' \
rsync -avz "${PWD}"/ nimble@192.168.2.240:~/backport-mt76/

sshpass -p 'simonk' \
ssh nimble@192.168.2.240 'cd backport-mt76 && ./build.sh'