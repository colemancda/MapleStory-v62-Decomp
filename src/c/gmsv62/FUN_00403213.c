/* FUN_00403213 - 0x00403213 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00403213(void)

{
  int iVar1;
  undefined4 uVar2;
  short *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*extraout_ECX == 3) {
    uVar2 = *(undefined4 *)(extraout_ECX + 4);
  }
  else {
    VariantInit((VARIANTARG *)(unaff_EBP + -0x1c));
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00403271(3,extraout_ECX);
    uVar2 = *(undefined4 *)(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar1 = FUN_00402bc3(unaff_EBP + -0x1c);
    if (iVar1 < 0) {
      FUN_00878dfb(iVar1);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


