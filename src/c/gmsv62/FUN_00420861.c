/* FUN_00420861 - 0x00420861 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00420861(int param_1,int param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_2 != 0) {
    iVar1 = 4;
    do {
      FUN_00879c20(param_1,param_2,4);
      param_1 = param_1 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return;
  }
  FUN_00879c20(param_1,&DAT_008e89ac,0x10);
  return;
}


