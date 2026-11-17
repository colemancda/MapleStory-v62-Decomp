/* FUN_00735913 - 0x00735913 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00735913(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    iVar1 = *param_1;
    uVar2 = 1;
  }
  else {
    if (param_2 != 2) goto LAB_00735935;
    iVar1 = *param_1;
    uVar2 = 2;
  }
  (**(code **)(iVar1 + 0x34))(uVar2);
LAB_00735935:
  if (param_2 == 2000) {
    if (param_1[0x2b] == 0) {
      param_1[0x2b] = 0x800;
    }
    else {
      param_1[0x2c] = 0x800;
    }
  }
  else if (param_2 == 0x7d1) {
    if (param_1[0x2b] == 0) {
      param_1[0x2b] = 0x2000;
    }
    else {
      param_1[0x2c] = 0x2000;
    }
  }
  else if (param_2 == 0x7d2) {
    if (param_1[0x2b] == 0) {
      param_1[0x2b] = 0x40;
    }
    else {
      param_1[0x2c] = 0x40;
    }
  }
  else if (param_2 == 0x7d3) {
    if (param_1[0x2b] == 0) {
      param_1[0x2b] = 0x80;
    }
    else {
      param_1[0x2c] = 0x80;
    }
  }
  else if (param_2 == 0x7d4) {
    if (param_1[0x2b] == 0) {
      param_1[0x2b] = 0x100;
    }
    else {
      param_1[0x2c] = 0x100;
    }
  }
  else {
    if (param_2 != 0x7d5) {
      return;
    }
    if (param_1[0x2b] == 0) {
      param_1[0x2b] = 0x200;
    }
    else {
      param_1[0x2c] = 0x200;
    }
  }
  (**(code **)(*param_1 + 0x34))(1);
  return;
}


