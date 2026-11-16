/* FUN_1000bb00 - 0x1000bb00 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void __thiscall FUN_1000bb00(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (*(code *)PTR_FUN_10012544)();
  if (iVar2 != 0) {
    iVar2 = (*(code *)PTR_FUN_10012544)();
    while (iVar2 != 0) {
      (*DAT_10016c44)(0);
      iVar2 = (*(code *)PTR_FUN_10012544)();
    }
  }
  *param_1 = *(undefined4 *)((int)this + 0x14);
  *(undefined4 **)((int)this + 0x14) = param_1;
  piVar1 = (int *)((int)this + 0x10);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return;
}


