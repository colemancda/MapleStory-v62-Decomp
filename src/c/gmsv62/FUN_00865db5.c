/* FUN_00865db5 - 0x00865db5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00865db5(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_8;
  
  iVar1 = 0;
  local_8 = 0xc65053f2;
  if (param_3 == (undefined4 *)0x0) {
    param_3 = &local_8;
  }
  if (0 < param_2) {
    do {
      FUN_00865df0(param_3,*(undefined1 *)(iVar1 + param_1));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return *param_3;
}


