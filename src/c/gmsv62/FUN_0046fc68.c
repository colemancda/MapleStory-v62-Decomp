/* FUN_0046fc68 - 0x0046fc68 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0046fc68(undefined4 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_2;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + -4) >> 1;
  }
  FUN_0046fdd9(param_1,iVar1,uVar2);
  return param_1;
}


