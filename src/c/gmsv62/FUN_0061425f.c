/* FUN_0061425f - 0x0061425f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0061425f(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0xe0);
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar1 & 1;
  }
  iVar2 = (int)uVar1 >> 1;
  if (iVar2 < 0xc) {
    if (iVar2 == 0xb) {
      iVar2 = 2;
      goto LAB_006142be;
    }
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        iVar2 = 1;
        goto LAB_006142be;
      }
      if (iVar2 == 3) {
        iVar2 = 3;
        goto LAB_006142be;
      }
      if (iVar2 == 6) {
        iVar2 = 4;
        goto LAB_006142be;
      }
    }
  }
  else {
    if (iVar2 == 0xc) {
      iVar2 = 5;
      goto LAB_006142be;
    }
    if (iVar2 == 0xd) {
      iVar2 = 6;
      goto LAB_006142be;
    }
    if (iVar2 == 0xe) {
      iVar2 = 7;
      goto LAB_006142be;
    }
    if (iVar2 == 0xf) {
      iVar2 = 8;
      goto LAB_006142be;
    }
  }
  iVar2 = 0;
LAB_006142be:
  if (-1 < *(int *)(param_1 + 0xe8)) {
    iVar2 = *(int *)(param_1 + 0xe8);
  }
  return iVar2;
}


