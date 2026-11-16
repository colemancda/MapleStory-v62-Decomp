/* FUN_508064d5 - 0x508064d5 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int FUN_508064d5(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = -0x7fffbffd;
  }
  else {
    iVar1 = FUN_50803d8c();
    if (-1 < iVar1) {
      FUN_5080233b((void *)0x14,param_1 + 0x10);
      *param_2 = 0;
      (**(code **)(iRam00000000 + 4))(0);
      iVar1 = 0;
    }
  }
  return iVar1;
}


