#!/bin/bash
# REV08: Wed Sep 13 07:23:42 WIB 2017
# REV01: Mon Jun 26 21:48:52 WIB 2017
# START: Mon Feb 13 20:22:22 WIB 2017

# This script is sorting script files

# Copyright (C) 2017 http://RahmatM.Samik-Ibrahim.vLSM.org/
# This program is free script/software. This program is distributed in the hope 
# that it will be useful, but WITHOUT ANY WARRANTY; without even the implied 
# warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

touch "0000000-DUMMY"
FILES=`ls`
NFILES=`ls | wc -l`
FORMAT="%${#NFILES}.${#NFILES}d"
HEAD="a"
TMPHEAD="ZTMP"
START="-1"
DEL="xx"

SEQ=$$
for FF in $FILES; do
   ((SEQ++))
   TMPNAME=`echo $FF | cut -d"-" -f2-`
   TMPNAME=`printf "${TMPHEAD}${FORMAT}-$TMPNAME" $SEQ`
   [[ $FF != $TMPNAME ]] && /bin/mv $FF $TMPNAME 
done
SEQ=$START
for FF in `ls ${TMPHEAD}*`; do
   [[ $((SEQ++)) -eq $START ]] && { 
      /bin/rm -f $FF
      continue
   }
   NEWNAME=`echo $FF | cut -d"-" -f2-`
   NEWNAME=`printf "${HEAD}${FORMAT}-${NEWNAME}" $SEQ`
   [[ $FF != $NEWNAME ]] && /bin/mv $FF $NEWNAME 
   chmod 755 $NEWNAME
done
chmod 644 ${HEAD}*

exit 0

