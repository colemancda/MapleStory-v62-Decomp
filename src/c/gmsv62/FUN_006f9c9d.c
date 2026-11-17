/* FUN_006f9c9d - 0x006f9c9d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __fastcall FUN_006f9c9d(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = 0;
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 0x5ac);
  do {
    if (*(int *)(*piVar2 + 0x48) != 0) {
      uVar1 = uVar1 | 1 << ((byte)iVar3 & 0x1f);
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 2;
  } while (iVar3 < 0x13);
  return uVar1;
}


