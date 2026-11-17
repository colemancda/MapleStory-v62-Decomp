/* FUN_0087bf8d - 0x0087bf8d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0087bf8d(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00884333();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_008841c3(param_1,param_2,param_3,iVar1);
  FUN_00883be6(iVar1);
  return uVar2;
}


