/* FUN_508022e7 - 0x508022e7 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int FUN_508022e7(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = -0x7fffbffd;
  }
  else {
    iVar1 = FUN_50803d8c();
    if (-1 < iVar1) {
      *(code **)(param_1 + 0x18) = FUN_508024ef;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      FUN_5080233b((void *)0x14,param_1 + 0x10);
      *param_2 = 0;
      (**(code **)(iRam00000000 + 4))(0);
      iVar1 = 0;
    }
  }
  return iVar1;
}


