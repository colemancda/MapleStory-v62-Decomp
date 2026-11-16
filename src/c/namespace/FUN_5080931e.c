/* FUN_5080931e - 0x5080931e in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int FUN_5080931e(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = -0x7fffbffd;
  }
  else {
    iVar1 = FUN_508093c4();
    if (-1 < iVar1) {
      (**(code **)(iRam00000000 + 4))(0);
      FUN_50808865(0x10);
      FUN_5080937e((void *)0x10,param_1 + 0x10);
      uRam00000024 = *(undefined4 *)(param_1 + 0x24);
      *param_2 = 0;
      iVar1 = 0;
    }
  }
  return iVar1;
}


