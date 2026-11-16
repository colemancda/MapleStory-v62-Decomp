/* FUN_514036df - 0x514036df in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 FUN_514036df(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5140ad20();
  Ordinal_8(unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(extraout_ECX + 0x20) == 0) {
    FUN_5140ac47(0x80004003);
  }
  iVar1 = (**(code **)(**(int **)(extraout_ECX + 0x20) + 0x38))
                    (*(int **)(extraout_ECX + 0x20),unaff_EBP + -0x1c);
  if ((iVar1 < 0) || ((*(byte *)(unaff_EBP + -0x1b) & 0x40) == 0)) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar1 = FUN_51405818((short *)(unaff_EBP + -0x1c));
    if (iVar1 < 0) {
      FUN_5140ac47(iVar1);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar1 = FUN_51405818((short *)(unaff_EBP + -0x1c));
    if (iVar1 < 0) {
      FUN_5140ac47(iVar1);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


