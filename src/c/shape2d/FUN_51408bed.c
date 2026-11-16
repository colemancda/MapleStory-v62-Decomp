/* FUN_51408bed - 0x51408bed in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 FUN_51408bed(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  void *this;
  int *piVar2;
  
  if (param_2 == (int *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    this = (void *)FUN_514072cf();
    piVar2 = FUN_51408c44(this,0x1e0000);
    if (piVar2 == (int *)0x0) {
      *param_2 = 0;
    }
    else {
      *param_2 = piVar2[2];
      *(undefined4 *)((int)this + 0x54) = 0;
      piVar2 = (int *)((int)this + 0x18);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        *(undefined4 *)((int)this + 0x14) = 0;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}


