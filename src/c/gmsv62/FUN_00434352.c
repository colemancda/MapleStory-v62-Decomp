/* FUN_00434352 - 0x00434352 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


float10 FUN_00434352(void)

{
  undefined8 uVar1;
  short sVar2;
  int iVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  VariantInit((VARIANTARG *)(unaff_EBP + -0x1c));
  sVar2 = **(short **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((sVar2 != 0) && (sVar2 != 10)) {
    iVar3 = FUN_00402bed(unaff_EBP + -0x1c,*(short **)(unaff_EBP + 8),0,5);
    if (-1 < iVar3) {
      uVar1 = *(undefined8 *)(unaff_EBP + -0x14);
      goto LAB_0043439b;
    }
  }
  uVar1 = *(undefined8 *)(unaff_EBP + 0xc);
LAB_0043439b:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined8 *)(unaff_EBP + 0xc) = uVar1;
  iVar3 = FUN_00402bc3(unaff_EBP + -0x1c);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return (float10)*(double *)(unaff_EBP + 0xc);
}


