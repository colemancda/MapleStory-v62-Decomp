/* FUN_50c085fa - 0x50c085fa in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


size_t * __fastcall FUN_50c085fa(int *param_1)

{
  int *piVar1;
  int iVar2;
  size_t *psVar3;
  uint uVar4;
  int *local_8;
  
  piVar1 = (int *)*param_1;
  psVar3 = (size_t *)0x0;
  if (piVar1 != (int *)0x0) {
    if (piVar1[2] == 1) {
      psVar3 = (size_t *)*piVar1;
      *piVar1 = 0;
    }
    else {
      iVar2 = *piVar1;
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(iVar2 + -4) >> 1;
      }
      local_8 = param_1;
      psVar3 = FUN_50c02a35(iVar2,uVar4);
    }
    local_8 = (int *)0x0;
    FUN_50c04b87(param_1,(int *)&local_8);
    if (local_8 != (int *)0x0) {
      FUN_50c02a85(local_8);
    }
  }
  return psVar3;
}


