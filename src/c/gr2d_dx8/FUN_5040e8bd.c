/* FUN_5040e8bd - 0x5040e8bd in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int FUN_5040e8bd(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined2 *param_6)

{
  undefined2 *puVar1;
  int iVar2;
  
  puVar1 = param_6;
  if (param_6 == (undefined2 *)0x0) {
    iVar2 = -0x7fffbffd;
  }
  else {
    param_6 = (undefined2 *)0x0;
    iVar2 = (**(code **)(*param_1 + 0x100))(param_1,param_2,param_3,param_4,param_5,&param_6);
    if ((-1 < iVar2) && (param_6 != (undefined2 *)0x0)) {
      *puVar1 = 0xd;
      *(undefined2 **)(puVar1 + 4) = param_6;
    }
  }
  return iVar2;
}


