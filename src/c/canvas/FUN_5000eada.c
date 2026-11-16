/* FUN_5000eada - 0x5000eada in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 FUN_5000eada(void)

{
  int iVar1;
  undefined4 uVar2;
  ushort *extraout_ECX;
  int unaff_EBP;
  
  FUN_50012d80();
  if (*extraout_ECX == 3) {
    uVar2 = *(undefined4 *)(extraout_ECX + 4);
  }
  else {
    Ordinal_8(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_5000eb38((void *)(unaff_EBP + -0x1c),3,extraout_ECX);
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


