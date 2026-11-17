/* FUN_006f5b9d - 0x006f5b9d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __fastcall FUN_006f5b9d(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 3;
  piVar1 = (int *)(param_1 + 0xc);
  do {
    if (*piVar1 != 0) {
      return (uint)piVar1 & 0xffffff00;
    }
    iVar2 = iVar2 + -1;
    piVar1 = piVar1 + -1;
  } while (-1 < iVar2);
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}


