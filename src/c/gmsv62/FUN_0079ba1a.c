/* FUN_0079ba1a - 0x0079ba1a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0079ba1a(int param_1,int param_2)

{
  int iVar1;
  int iStack_18;
  
  switch(param_2) {
  case 0:
    param_2 = 0;
    goto LAB_0079ba35;
  case 1:
    iStack_18 = 1;
    param_2 = iStack_18;
LAB_0079ba35:
    iStack_18 = 2;
    iVar1 = param_2;
    break;
  case 2:
    iStack_18 = 2;
    param_2 = iStack_18;
    iVar1 = iStack_18;
    break;
  case 3:
    param_2 = 2;
    iStack_18 = 4;
    iVar1 = param_2;
    break;
  case 4:
    param_2 = 0x1f;
    iStack_18 = 0x33;
    iVar1 = param_2;
    break;
  case 5:
    param_2 = 7;
    iStack_18 = 0x13;
    iVar1 = param_2;
    break;
  case 6:
    param_2 = 0x13;
    iStack_18 = 0x1f;
    iVar1 = param_2;
    break;
  case 7:
    param_2 = 4;
    iStack_18 = 5;
    iVar1 = param_2;
    break;
  case 8:
    param_2 = 0x33;
    iStack_18 = 0x34;
    iVar1 = param_2;
    break;
  case 9:
    param_2 = 0x34;
    iStack_18 = 0x35;
    iVar1 = param_2;
    break;
  case 10:
    param_2 = 0x35;
    iStack_18 = 0x3b;
    iVar1 = param_2;
    break;
  case 0xb:
    param_2 = 5;
    iStack_18 = 7;
    iVar1 = param_2;
    break;
  case 0xc:
    param_2 = 0x3b;
    iStack_18 = 0x3c;
    iVar1 = param_2;
    break;
  default:
    iStack_18 = param_2;
    iVar1 = param_2;
    break;
  case 0xe:
    param_2 = 0x3c;
    iStack_18 = 0x3d;
    iVar1 = param_2;
    break;
  case 0xf:
    iStack_18 = 0x3d;
    param_2 = iStack_18;
    iVar1 = iStack_18;
    break;
  case 0x10:
    param_2 = 0x3e;
    iStack_18 = 0x3f;
    iVar1 = param_2;
  }
  for (; param_2 < iStack_18; param_2 = param_2 + 1) {
    FUN_0079bb28();
    if (param_2 == 1) {
      *(undefined4 *)(param_1 + 0x1824) = 0;
    }
  }
  return param_1 + 0x1804 + iVar1 * 0x18;
}


