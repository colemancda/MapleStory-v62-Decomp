/* FUN_00727a74 - 0x00727a74 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00727a74(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00727e9d(0);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    if (*(int *)(iVar1 + 8) != 0) {
      iVar2 = *(int *)(*(int *)(iVar1 + 8) + -4);
    }
    iVar2 = iVar2 + -3;
  }
  FUN_004ad003(iVar2);
  return;
}


