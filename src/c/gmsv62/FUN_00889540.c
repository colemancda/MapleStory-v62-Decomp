/* FUN_00889540 - 0x00889540 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00889540(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 1) {
    if ((param_3 & 3) == 0) {
      iVar1 = (&DAT_00973618)[param_4];
    }
    else {
      iVar1 = *(int *)(&DAT_0097364c + param_4 * 4);
    }
    iVar2 = (int)(param_3 * 0x16d + -0x63db + iVar1 + 1 + ((int)(param_3 - 1) >> 2)) % 7;
    if (param_6 < iVar2) {
      iVar1 = iVar1 + 1 + (param_5 * 7 - iVar2) + param_6;
    }
    else {
      iVar1 = iVar1 + -6 + (param_5 * 7 - iVar2) + param_6;
    }
    if (param_5 == 5) {
      if ((param_3 & 3) == 0) {
        iVar2 = *(int *)(&DAT_0097361c + param_4 * 4);
      }
      else {
        iVar2 = *(int *)(&DAT_00973650 + param_4 * 4);
      }
      if (iVar2 < iVar1) {
        iVar1 = iVar1 + -7;
      }
    }
  }
  else {
    if ((param_3 & 3) == 0) {
      iVar1 = (&DAT_00973618)[param_4];
    }
    else {
      iVar1 = *(int *)(&DAT_0097364c + param_4 * 4);
    }
    iVar1 = iVar1 + param_7;
  }
  if (param_1 == 1) {
    DAT_00973600 = param_3;
    DAT_00973608 = ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000 + param_11;
    DAT_00973604 = iVar1;
  }
  else {
    DAT_00973618 = ((param_8 * 0x3c + param_9) * 0x3c + _DAT_00973570 + param_10) * 1000 + param_11;
    if (DAT_00973618 < 0) {
      DAT_00973618 = DAT_00973618 + 86400000;
      DAT_00973614 = iVar1 + -1;
    }
    else {
      DAT_00973614 = iVar1;
      if (86399999 < DAT_00973618) {
        DAT_00973618 = DAT_00973618 + -86400000;
        DAT_00973614 = iVar1 + 1;
      }
    }
    DAT_00973610 = param_3;
  }
  return;
}


