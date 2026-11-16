/* ptr_51408c9a - 0x51408c9a in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 ptr_51408c9a(undefined4 param_1,int param_2)

{
  void *this;
  int *piVar1;
  undefined4 *puVar2;
  
  this = (void *)FUN_514072cf();
  piVar1 = FUN_51408c44(this,0x1e0000);
  if (piVar1 == (int *)0x0) {
    puVar2 = (undefined4 *)FUN_5140a019();
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[1] = &PTR_FUN_5140d974;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = &PTR_FUN_5140d968;
      puVar2[1] = &PTR_LAB_5140d964;
    }
    puVar2[2] = param_2;
    FUN_5140833b();
  }
  else {
    piVar1[2] = param_2;
    *(undefined4 *)((int)this + 0x54) = 0;
    piVar1 = (int *)((int)this + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)((int)this + 0x14) = 0;
    }
  }
  return 0;
}


