/* FUN_50012b0e - 0x50012b0e in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 FUN_50012b0e(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_50012d80();
  Ordinal_8(unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(extraout_ECX + 0x20) == 0) {
    FUN_50012c97(0x80004003);
  }
  iVar1 = (**(code **)(**(int **)(extraout_ECX + 0x20) + 0x38))
                    (*(int **)(extraout_ECX + 0x20),unaff_EBP + -0x1c);
  if ((iVar1 < 0) || ((*(byte *)(unaff_EBP + -0x1b) & 0x40) == 0)) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar1 = FUN_5000630c((short *)(unaff_EBP + -0x1c));
    if (iVar1 < 0) {
      FUN_50012c97(iVar1);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar1 = FUN_5000630c((short *)(unaff_EBP + -0x1c));
    if (iVar1 < 0) {
      FUN_50012c97(iVar1);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


