/* FUN_514083cf - 0x514083cf in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 FUN_514083cf(int param_1,int param_2,int param_3,short param_4)

{
  int iVar1;
  
  if ((param_4 == 0) || (param_4 == 10)) {
    if (*(void **)(param_1 + 0x24) == (void *)0x0) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_2;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_3;
    }
    else {
      FUN_51408450(*(void **)(param_1 + 0x24),param_2,param_3);
    }
  }
  else {
    FUN_514072cf();
    iVar1 = FUN_51407fe1();
    if (iVar1 == 0) {
      return 0x80070057;
    }
    FUN_5140833b();
  }
  return 0;
}


