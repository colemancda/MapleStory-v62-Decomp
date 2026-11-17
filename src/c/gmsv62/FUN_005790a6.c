/* FUN_005790a6 - 0x005790a6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005790a6(void)

{
  undefined4 *puVar1;
  int iVar2;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  int unaff_EBP;
  undefined4 *puStack_48;
  undefined4 uStack_44;
  int iStack_40;
  
  FUN_00879bb8();
  iStack_40 = unaff_EBP + -0x10;
  uStack_44 = 0x5790ce;
  puVar1 = (undefined4 *)FUN_00679d86();
  uStack_44 = *puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_40 = extraout_ECX + 0xd8;
  *(int *)(unaff_EBP + -0x14) = iStack_40;
  puStack_48 = (undefined4 *)0x5790e6;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  iStack_40 = unaff_EBP + -0x10;
  uStack_44 = 0x579101;
  puVar1 = (undefined4 *)FUN_00679d86();
  uStack_44 = *puVar1;
  iStack_40 = extraout_ECX + 0xdc;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(int *)(unaff_EBP + -0x18) = iStack_40;
  puStack_48 = (undefined4 *)0x57911c;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  iStack_40 = 0x579137;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
  iStack_40 = unaff_EBP + -0x28;
  puVar1 = &DAT_00980690;
  uStack_44 = 0x579146;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_40 = 0x579152;
    FUN_00878dfb();
    puVar1 = extraout_ECX_00;
  }
  iStack_40 = 0xffd3ccbd;
  uStack_44 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x10) = &puStack_48;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  puStack_48 = puVar1;
  FUN_00679e4e(&puStack_48,10);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0044974c();
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_40 = 0x579194;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_40 = 0x57919f;
    FUN_00878dfb();
  }
  iStack_40 = 0x5791a5;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_40 = unaff_EBP + -0x38;
  puVar1 = &DAT_00980690;
  uStack_44 = 0x5791af;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_40 = 0x5791bb;
    FUN_00878dfb();
    puVar1 = extraout_ECX_01;
  }
  iStack_40 = 0xffd3ccbd;
  uStack_44 = 9;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_48;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  puStack_48 = puVar1;
  FUN_00679e4e(&puStack_48,0xc);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0044974c();
  FUN_004503f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_40 = 0x5791fd;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_40 = 0x579208;
    FUN_00878dfb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


