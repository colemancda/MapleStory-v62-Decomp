/* FUN_00559bc7 - 0x00559bc7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


float10 FUN_00559bc7(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  VariantInit((VARIANTARG *)(unaff_EBP + -0x1c));
  sVar1 = **(short **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((sVar1 != 0) && (sVar1 != 10)) {
    iVar2 = FUN_00402bed(unaff_EBP + -0x1c,*(short **)(unaff_EBP + 8),0,4);
    uVar3 = *(undefined4 *)(unaff_EBP + -0x14);
    if (-1 < iVar2) goto LAB_00559c0e;
  }
  uVar3 = *(undefined4 *)(unaff_EBP + 0xc);
LAB_00559c0e:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + 8) = uVar3;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x1c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return (float10)*(float *)(unaff_EBP + 8);
}


