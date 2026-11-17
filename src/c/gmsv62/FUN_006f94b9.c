/* FUN_006f94b9 - 0x006f94b9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_006f94b9(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = -1;
  if (*(int *)(param_1 + 0x668) == 0) {
    iVar4 = 0;
    piVar3 = (int *)(param_1 + 0x644);
    do {
      if ((*piVar3 != 0) && (iVar1 = FUN_004b3d90(), iVar1 != 0)) {
        iVar2 = iVar4;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 2;
    } while (iVar4 < 2);
  }
  else if (*(int *)(param_1 + 0x668) == 1) {
    iVar4 = 0;
    piVar3 = (int *)(param_1 + 0x654);
    do {
      if ((*piVar3 != 0) && (iVar1 = FUN_004b3d90(), iVar1 != 0)) {
        iVar2 = iVar4;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 2;
    } while (iVar4 < 3);
  }
  return iVar2;
}


