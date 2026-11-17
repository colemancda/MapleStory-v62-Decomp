/* FUN_0040675b - 0x0040675b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0040675b(void)

{
  short *psVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  psVar1 = *(short **)(unaff_EBP + 8);
  *extraout_ECX = 0;
  if (*psVar1 == 8) {
    FUN_004067cf(*(undefined4 *)(psVar1 + 4));
  }
  else {
    VariantInit((VARIANTARG *)(unaff_EBP + -0x1c));
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00403271(8,psVar1);
    FUN_004067cf(*(undefined4 *)(unaff_EBP + -0x14));
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x1c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


