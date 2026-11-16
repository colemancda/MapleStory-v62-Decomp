/* FUN_50c097b3 - 0x50c097b3 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __thiscall FUN_50c097b3(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x20) == 0) {
    FUN_50c101c4(0x80004003);
  }
  piVar1 = *(int **)((int)this + 0x20);
  iVar2 = (**(code **)(*piVar1 + 0x34))(piVar1,param_1);
  if (iVar2 < 0) {
    FUN_50c101d2(iVar2,piVar1,&DAT_50c174c8);
  }
  return;
}


