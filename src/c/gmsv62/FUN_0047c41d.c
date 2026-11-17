/* FUN_0047c41d - 0x0047c41d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __thiscall FUN_0047c41d(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    param_1 = param_1 + 0x88;
  }
  else {
    if (param_3 != 1) {
      return false;
    }
    param_1 = param_1 + 0x8c;
  }
  iVar1 = FUN_0047c451(param_2,param_1);
  return -1 < iVar1;
}


