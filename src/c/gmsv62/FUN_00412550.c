/* FUN_00412550 - 0x00412550 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00412550(void)

{
  short sVar1;
  int iVar2;
  int unaff_EBP;
  undefined4 uVar3;
  
  FUN_00879bb8();
  VariantInit((VARIANTARG *)(unaff_EBP + -0x1c));
  sVar1 = **(short **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((sVar1 != 0) && (sVar1 != 10)) {
    iVar2 = FUN_00402bed(unaff_EBP + -0x1c,*(short **)(unaff_EBP + 8),0,3);
    uVar3 = *(undefined4 *)(unaff_EBP + -0x14);
    if (-1 < iVar2) goto LAB_00412598;
  }
  uVar3 = *(undefined4 *)(unaff_EBP + 0xc);
LAB_00412598:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x1c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


