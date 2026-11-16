/* ptr_50406d0f - 0x50406d0f in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 ptr_50406d0f(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0x80004003;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x34);
    if (iVar1 == 0x15) {
      *param_2 = 2;
    }
    else if (iVar1 == 0x17) {
      *param_2 = 0x201;
    }
    else if (iVar1 == 0x1a) {
      *param_2 = 1;
    }
    else {
      if (iVar1 != 0x33545844) {
        FUN_504050cb(u_Invalid_format_5043549c,0);
        return 0x80004005;
      }
      *param_2 = 0x402;
    }
    uVar2 = 0;
  }
  return uVar2;
}


