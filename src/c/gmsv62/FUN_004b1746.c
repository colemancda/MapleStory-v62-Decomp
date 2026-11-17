/* FUN_004b1746 - 0x004b1746 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_004b1746(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  int unaff_EBP;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  FUN_004b3795();
  extraout_ECX[0xd] = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x12] = 0;
  extraout_ECX[0x13] = 0;
  extraout_ECX[0x14] = 0;
  extraout_ECX[0x10] = &PTR_FUN_008e9f40;
  extraout_ECX[0x15] = 0;
  extraout_ECX[0x16] = 0;
  puStack_2c = (undefined4 *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *extraout_ECX = &PTR_LAB_008e9f20;
  extraout_ECX[1] = &PTR_ptr_00456316_008e9ed4;
  extraout_ECX[2] = &PTR_FUN_008e9ed0;
  uStack_30 = 0x4b17ab;
  puVar1 = (undefined4 *)FUN_00679d86();
  uStack_30 = *puVar1;
  puStack_2c = extraout_ECX + 0x15;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_34 = (undefined4 *)0x4b17bc;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00402676();
  puStack_2c = (undefined4 *)(unaff_EBP + -0x10);
  uStack_30 = 0x4b17db;
  puVar1 = (undefined4 *)FUN_00679d86();
  uStack_30 = *puVar1;
  puStack_2c = extraout_ECX + 0x16;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_34 = (undefined4 *)0x4b17ec;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00402676();
  puStack_2c = (undefined4 *)0x4b1805;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
  puStack_2c = (undefined4 *)(unaff_EBP + -0x24);
  puVar1 = &DAT_00980690;
  uStack_30 = 0x4b1813;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    puStack_2c = (undefined4 *)0x4b181f;
    FUN_00878dfb();
    puVar1 = extraout_ECX_00;
  }
  puStack_2c = (undefined4 *)0xff677b91;
  uStack_30 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x10) = &puStack_34;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_34 = puVar1;
  FUN_00679e4e(&puStack_34,10);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_2c = (undefined4 *)0x4b185e;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_2c = (undefined4 *)0x4b1869;
    FUN_00878dfb();
  }
  puStack_2c = (undefined4 *)0x4b1873;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
  puStack_2c = (undefined4 *)(unaff_EBP + -0x24);
  puVar1 = &DAT_00980690;
  uStack_30 = 0x4b1881;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    puStack_2c = (undefined4 *)0x4b188d;
    FUN_00878dfb();
    puVar1 = extraout_ECX_01;
  }
  puStack_2c = (undefined4 *)0xff000000;
  uStack_30 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x10) = &puStack_34;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_34 = puVar1;
  FUN_00679e4e(&puStack_34,10);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_2c = (undefined4 *)0x4b18cc;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_2c = (undefined4 *)0x4b18d7;
    FUN_00878dfb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


