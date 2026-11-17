/* FUN_005bc13e - 0x005bc13e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_005bc13e(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  int unaff_EBP;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_004bc4fa();
  extraout_ECX[0x1d] = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[0x1e] = 0;
  puStack_2c = (undefined4 *)0x5bc179;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  extraout_ECX[0x1f] = 0;
  puStack_2c = (undefined4 *)0x5bc18b;
  FUN_00414f8b();
  extraout_ECX[0x20] = 0;
  extraout_ECX[0x21] = 0;
  extraout_ECX[0x22] = 0;
  extraout_ECX[0x24] = 0;
  puStack_2c = (undefined4 *)(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  *extraout_ECX = &PTR_FUN_008ec9a8;
  extraout_ECX[1] = &PTR_FUN_008ec95c;
  extraout_ECX[2] = &PTR_FUN_008ec958;
  uStack_30 = 0x5bc1d0;
  puVar1 = (undefined4 *)FUN_00679d86();
  uStack_30 = *puVar1;
  puStack_2c = (undefined4 *)0x1;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_34 = (undefined4 *)0x5bc1e1;
  FUN_004bc5f0();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00402676();
  puStack_2c = (undefined4 *)(unaff_EBP + 0x10);
  uStack_30 = 0x5bc1fe;
  puVar1 = (undefined4 *)FUN_00679d86();
  uStack_30 = *puVar1;
  puStack_2c = extraout_ECX + 0x20;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_34 = (undefined4 *)0x5bc213;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00402676();
  puStack_2c = (undefined4 *)0x5bc22c;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
  puStack_2c = (undefined4 *)(unaff_EBP + -0x24);
  puVar1 = &DAT_00980690;
  uStack_30 = 0x5bc23a;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    puStack_2c = (undefined4 *)0x5bc246;
    FUN_00878dfb();
    puVar1 = extraout_ECX_00;
  }
  puStack_2c = (undefined4 *)0xffffffff;
  uStack_30 = 0xc;
  *(undefined4 ***)(unaff_EBP + 0x10) = &puStack_34;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  puStack_34 = puVar1;
  FUN_00679e4e(&puStack_34,10);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_2c = (undefined4 *)0x5bc285;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_2c = (undefined4 *)0x5bc290;
    FUN_00878dfb();
  }
  puStack_2c = (undefined4 *)(unaff_EBP + 0x10);
  uStack_30 = 0x5bc29c;
  puVar1 = (undefined4 *)FUN_00679d86();
  uStack_30 = *puVar1;
  puStack_2c = extraout_ECX + 0x21;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  puStack_34 = (undefined4 *)0x5bc2b1;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00402676();
  puStack_2c = (undefined4 *)(unaff_EBP + 0x10);
  uStack_30 = 0x5bc2d0;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  puStack_2c = (undefined4 *)0x5bc2dd;
  FUN_0044f5f6();
  puStack_2c = (undefined4 *)0xffff9900;
  uStack_30 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_34;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00679e4e(&puStack_34,10);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  puStack_2c = (undefined4 *)0x5bc31f;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_2c = (undefined4 *)0x5bc32a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_004030b1();
  }
  puStack_2c = (undefined4 *)(unaff_EBP + 0x10);
  uStack_30 = 0x5bc346;
  puVar1 = (undefined4 *)FUN_00679d86();
  uStack_30 = *puVar1;
  puStack_2c = extraout_ECX + 0x22;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  puStack_34 = (undefined4 *)0x5bc35b;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00402676();
  puStack_2c = (undefined4 *)(unaff_EBP + 0x10);
  uStack_30 = 0x5bc37a;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  puStack_2c = (undefined4 *)0x5bc387;
  FUN_0044f5f6();
  puStack_2c = (undefined4 *)0xffcccc99;
  uStack_30 = 0xc;
  *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_34;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00679e4e(&puStack_34,10);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  puStack_2c = (undefined4 *)0x5bc3c5;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_2c = (undefined4 *)0x5bc3d0;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + 0x10) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


