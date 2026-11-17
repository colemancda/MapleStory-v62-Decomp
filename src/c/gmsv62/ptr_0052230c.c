/* ptr_0052230c - 0x0052230c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_0052230c(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  switch(param_2) {
  case 1000:
    if (param_1[0x39] % 1000 == 0) {
      param_1[0x39] = param_1[0x3e];
    }
    else {
      param_1[0x39] = param_1[0x39] + -1;
    }
    break;
  case 0x3e9:
    iVar2 = param_1[0x39];
    piVar1 = param_1 + 0x39;
    if (iVar2 == param_1[0x3e]) {
      *piVar1 = 1000;
      break;
    }
    goto LAB_0052241f;
  case 0x3ea:
    piVar1 = param_1 + 0x3a;
    goto LAB_005223fd;
  case 0x3eb:
    piVar1 = param_1 + 0x3a;
    goto LAB_00522414;
  case 0x3ec:
    iVar2 = param_1[0x3b];
    if (iVar2 % 1000 == 0) {
      param_1[0x3b] = param_1[iVar2 / 1000 + 0x3d];
    }
    else {
      param_1[0x3b] = iVar2 + -1;
    }
    break;
  case 0x3ed:
    iVar2 = param_1[0x3b];
    if (iVar2 == param_1[iVar2 / 1000 + 0x3d]) {
      param_1[0x3b] = (iVar2 / 1000) * 1000;
    }
    else {
      param_1[0x3b] = iVar2 + 1;
    }
    break;
  case 0x3ee:
    piVar1 = param_1 + 0x3c;
LAB_005223fd:
    if (*piVar1 == 1) {
      *piVar1 = 0x10;
    }
    else {
      iVar2 = *piVar1 + -1;
LAB_00522420:
      *piVar1 = iVar2;
    }
    break;
  case 0x3ef:
    piVar1 = param_1 + 0x3c;
LAB_00522414:
    iVar2 = *piVar1;
    if (iVar2 == 0x10) {
      *piVar1 = 1;
      break;
    }
LAB_0052241f:
    iVar2 = iVar2 + 1;
    goto LAB_00522420;
  }
  if (param_2 == 1) {
    (**(code **)(*param_1 + 0x34))(1);
  }
  else if (param_2 == 2) {
    (**(code **)(*param_1 + 0x34))(2);
  }
  else {
    FUN_005221cb();
  }
  return;
}


