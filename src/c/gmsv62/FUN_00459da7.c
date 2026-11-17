/* FUN_00459da7 - 0x00459da7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00459da7(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 1;
  piVar2 = &DAT_00964200;
  do {
    iVar1 = FUN_0044dddc(param_1);
    if (*piVar2 == iVar1) {
      return iVar3;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + 1;
  } while ((int)piVar2 < 0x964241);
  return 0;
}


