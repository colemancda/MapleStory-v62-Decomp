/* FUN_10003f60 - 0x10003f60 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void __thiscall FUN_10003f60(void *this,undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  uVar2 = param_1[-1];
  if ((int)uVar2 < 0) {
    uVar2 = ~uVar2;
  }
  if (uVar2 < 0x21) {
    uVar2 = (uint)(0x10 < uVar2);
  }
  else {
    if (uVar2 < 0x41) {
      uVar2 = 2;
      goto LAB_10003f96;
    }
    uVar2 = (-(uint)(0x80 < uVar2) & 0xfffffffc) + 3;
  }
  if ((int)uVar2 < 0) {
    uVar4 = (*DAT_10016c7c)(0,param_1 + -1);
    (*DAT_10016c78)(uVar4);
    return;
  }
LAB_10003f96:
  iVar3 = (*(code *)PTR_FUN_10012544)();
  if (iVar3 != 0) {
    iVar3 = (*(code *)PTR_FUN_10012544)();
    while (iVar3 != 0) {
      (*DAT_10016c44)(0);
      iVar3 = (*(code *)PTR_FUN_10012544)();
    }
  }
  *param_1 = *(undefined4 *)((int)this + uVar2 * 4 + 0xc);
  *(undefined4 **)((int)this + uVar2 * 4 + 0xc) = param_1;
  piVar1 = (int *)((int)this + 8);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  return;
}


