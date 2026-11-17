/* FUN_00415015 - 0x00415015 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_00415015(int *param_1,int param_2,int param_3)

{
  int iVar1;
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
    iVar1 = 0;
  }
  else {
    if ((*lpAddend < 2) && (param_2 <= lpAddend[1])) {
      *lpAddend = -1;
      goto LAB_004150b5;
    }
    iVar1 = lpAddend[2];
  }
  if (param_2 <= iVar1) {
    param_2 = iVar1;
  }
  puVar2 = (undefined4 *)FUN_0041c32e(param_2 + 0xd);
  *puVar2 = 0xffffffff;
  puVar2[1] = param_2;
  *param_1 = (int)(puVar2 + 3);
  if ((param_3 == 0) || (lpAddend == (LONG *)0x0)) {
    puVar2[2] = 0;
    *(undefined1 *)*param_1 = 0;
  }
  else {
    FUN_00879c20(puVar2 + 3,lpAddend + 3,lpAddend[2] + 1);
    puVar2[2] = lpAddend[2];
  }
  if (lpAddend != (LONG *)0x0) {
    LVar3 = InterlockedDecrement(lpAddend);
    if (LVar3 < 1) {
      FUN_0041c438(lpAddend);
    }
  }
LAB_004150b5:
  return *param_1;
}


