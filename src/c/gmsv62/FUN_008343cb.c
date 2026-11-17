/* FUN_008343cb - 0x008343cb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008343cb(int *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  
  for (uVar3 = 0; (iVar2 = *param_1, iVar2 != 0 && (uVar3 < *(uint *)(iVar2 + -4)));
      uVar3 = uVar3 + 1) {
    uVar1 = *(undefined2 *)(iVar2 + uVar3 * 2);
    iVar2 = FUN_0062d5ca(uVar1);
    if (iVar2 != 0) {
      FUN_0083440a(uVar1,param_2);
    }
  }
  return;
}


