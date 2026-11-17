/* ptr_00706451 - 0x00706451 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall ptr_00706451(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 0xc);
  iVar3 = 0;
  iVar2 = 3;
  do {
    if (*piVar1 != 0) {
      iVar3 = iVar3 + 1;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if ((iVar3 != 0) && (iVar3 != 3)) {
    return 0;
  }
  return 1;
}


