/* FUN_0067dc62 - 0x0067dc62 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


byte __thiscall FUN_0067dc62(int param_1,int param_2,undefined4 param_3,byte param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      param_4 = param_2 < 0;
    }
  }
  else if (iVar1 == 1) {
    if (param_2 != 0) {
      return param_2 < 0 | 2;
    }
  }
  else {
    if ((iVar1 < 3) || (4 < iVar1)) {
      return 0;
    }
    if (param_2 != 0) {
      return param_2 < 0 | 0xc;
    }
  }
  return param_4 & 1 | 4;
}


