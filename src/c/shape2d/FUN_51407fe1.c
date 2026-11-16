/* FUN_51407fe1 - 0x51407fe1 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


int FUN_51407fe1(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  FUN_5140ad20();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar1 = FUN_514081f0();
  if (-1 < iVar1) {
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    iVar1 = FUN_514081f0();
    if (-1 < iVar1) {
      puVar2 = (undefined4 *)FUN_51409f26();
      *(undefined4 **)(unaff_EBP + 8) = puVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (puVar2 == (undefined4 *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_5140806d(puVar2);
      }
      *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(unaff_EBP + 0x10);
      *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(unaff_EBP + 0x14);
      *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(unaff_EBP + 0x18);
      *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
      *(uint *)(iVar1 + 0x20) = *(uint *)(unaff_EBP + -0x10) & 0x10000000;
      goto LAB_51408061;
    }
  }
  iVar1 = 0;
LAB_51408061:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


