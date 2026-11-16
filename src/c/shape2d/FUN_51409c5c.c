/* FUN_51409c5c - 0x51409c5c in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


int __cdecl FUN_51409c5c(short *param_1,short *param_2)

{
  int iVar1;
  size_t *psVar2;
  uint uVar3;
  
  if (*param_2 == 8) {
    if (param_1 != param_2) {
      iVar1 = FUN_51405818(param_1);
      if (iVar1 < 0) {
        return iVar1;
      }
      *param_1 = 8;
      iVar1 = *(int *)(param_2 + 4);
      if (iVar1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)(iVar1 + -4) >> 1;
      }
      psVar2 = FUN_51402dbb(iVar1,uVar3);
      *(size_t **)(param_1 + 4) = psVar2;
    }
    iVar1 = 0;
  }
  else {
    if (*param_1 == 8) {
      FUN_51405818(param_1);
    }
    iVar1 = Ordinal_10(param_1,param_2);
  }
  return iVar1;
}


