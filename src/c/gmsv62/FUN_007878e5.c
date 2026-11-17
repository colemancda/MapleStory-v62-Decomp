/* FUN_007878e5 - 0x007878e5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007878e5(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00785f67(param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_00785f67(param_1,param_3);
    if (iVar1 != 0) {
      return param_1;
    }
    iVar1 = FUN_00785f67(param_2,param_3);
    if (iVar1 != 0) {
      return param_3;
    }
  }
  else {
    iVar1 = FUN_00785f67(param_2,param_3);
    if (iVar1 == 0) {
      iVar1 = FUN_00785f67(param_1,param_3);
      if (iVar1 == 0) {
        return param_1;
      }
      return param_3;
    }
  }
  return param_2;
}


