/* FUN_007f1573 - 0x007f1573 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_007f1573(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x30))(0x1e);
    return uVar2;
  }
  return 0;
}


