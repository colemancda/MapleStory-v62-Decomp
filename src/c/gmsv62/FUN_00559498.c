/* FUN_00559498 - 0x00559498 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00559498(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x20));
  puVar1 = *(undefined4 **)(unaff_EBP + 0xc);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  iVar3 = (**(code **)(*extraout_ECX + 0xc))(extraout_ECX,uVar2,unaff_EBP + -0x20);
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,extraout_ECX,&DAT_009656a0);
  }
  FUN_0040491b(unaff_EBP + -0x20,0);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004030b1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}


