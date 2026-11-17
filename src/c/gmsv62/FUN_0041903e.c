/* FUN_0041903e - 0x0041903e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0041903e(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  LONG LVar3;
  LONG *lpAddend;
  
  if (*param_1 == 0) {
    lpAddend = (LONG *)0x0;
  }
  else {
    lpAddend = (LONG *)(*param_1 + -0xc);
  }
  if (lpAddend == (LONG *)0x0) {
    uVar1 = 0;
  }
  else {
    if ((*lpAddend < 2) && ((int)param_2 <= lpAddend[1])) {
      *lpAddend = -1;
      goto LAB_004190d5;
    }
    uVar1 = (uint)lpAddend[2] >> 1;
  }
  if ((int)uVar1 < (int)param_2) {
    uVar1 = param_2;
  }
  puVar2 = (undefined4 *)FUN_0041c4ba(uVar1);
  *puVar2 = 0xffffffff;
  *param_1 = (int)(puVar2 + 3);
  if ((param_3 == 0) || (lpAddend == (LONG *)0x0)) {
    puVar2[2] = 0;
    *(undefined2 *)*param_1 = 0;
  }
  else {
    FUN_00879c20(puVar2 + 3,lpAddend + 3,(lpAddend[2] & 0xfffffffeU) + 2);
    puVar2[2] = lpAddend[2];
  }
  if (lpAddend != (LONG *)0x0) {
    LVar3 = InterlockedDecrement(lpAddend);
    if (LVar3 < 1) {
      FUN_004054e1(lpAddend);
    }
  }
LAB_004190d5:
  return *param_1;
}


