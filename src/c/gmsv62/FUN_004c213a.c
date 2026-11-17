/* FUN_004c213a - 0x004c213a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004c213a(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0045e2eb();
  iVar2 = FUN_005540b6(uVar1);
  if ((iVar2 == 0) && (*(int *)(param_1 + 0x18) == 0 && *(int *)(param_1 + 0x1c) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


