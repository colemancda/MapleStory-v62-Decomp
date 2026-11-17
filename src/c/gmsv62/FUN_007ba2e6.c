/* FUN_007ba2e6 - 0x007ba2e6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_007ba2e6(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_007b04b6();
  if (iVar1 == 0) {
    if ((*(uint *)(param_1 + 0x52c) & 0xfffffffe) != 10) {
      uVar2 = FUN_007ab174(param_2,param_3,0,0);
      return uVar2;
    }
    FUN_007a71f1(0,0,0,0,0,0,0);
  }
  return 0;
}


