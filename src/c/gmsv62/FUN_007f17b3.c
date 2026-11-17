/* FUN_007f17b3 - 0x007f17b3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007f17b3(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x20))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x24))(iVar1);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x28))();
    }
  }
  return;
}


