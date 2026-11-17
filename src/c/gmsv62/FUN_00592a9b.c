/* FUN_00592a9b - 0x00592a9b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00592a9b(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  
  FUN_00879bb8();
  *(int *)(extraout_ECX + 0xd8) =
       *(int *)(*(int *)(extraout_ECX + 0xcc) + 0x15c) + *(int *)(unaff_EBP + 8) * 0x20;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  iStack_54 = 0x592ad8;
  FUN_00414f8b();
  iVar3 = *(int *)(extraout_ECX + 0xd8);
  iVar1 = *(int *)(iVar3 + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((iVar1 != 100) || (*(int *)(iVar3 + 0x14) != 100)) {
    iStack_54 = unaff_EBP + -0x1c;
    iStack_58 = 0x592b02;
    puVar2 = (undefined4 *)FUN_00679d22();
    *(undefined4 *)(unaff_EBP + -0x18) = *puVar2;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_54 = *(undefined4 *)(unaff_EBP + -0x18);
    iStack_58 = unaff_EBP + -0x14;
    iStack_5c = 0x592b2a;
    puVar2 = (undefined4 *)FUN_00434e21();
    iStack_54 = *puVar2;
    iStack_58 = 0x592b44;
    FUN_0045efbb();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
  }
  iStack_54 = unaff_EBP + 8;
  *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffffb0;
  iStack_58 = 0x592b6d;
  FUN_00414f8b();
  iStack_54 = 0x592b74;
  FUN_0059314b();
  iStack_54 = 0x592b7d;
  FUN_00592d42();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(extraout_ECX + 0xd0) = *(undefined4 *)(unaff_EBP + 0xc);
  iStack_54 = unaff_EBP + 0xc;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_58 = 0x592b9d;
  puVar2 = (undefined4 *)FUN_00679d86();
  iStack_54 = *puVar2;
  iStack_58 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_5c = 0x592bb5;
  FUN_0041354c();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00402676();
  iStack_54 = 0x592bd0;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iStack_54 = unaff_EBP + -0x3c;
  iStack_58 = 0x592bdf;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_54 = 0x592beb;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_54 = 0x592bf5;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  iStack_54 = unaff_EBP + -0x2c;
  iStack_58 = 0x592bff;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_54 = 0x592c0d;
    FUN_00878dfb();
  }
  iStack_54 = 0;
  iStack_58 = unaff_EBP + -0x3c;
  iStack_5c = unaff_EBP + -0x2c;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_60 = 0x592c23;
  uVar4 = FUN_00411641();
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_60;
  FUN_004033a1(uVar4);
  iVar3 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_58 = 0x592c55;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
  iStack_54 = 0x592c67;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_54 = 0x592c78;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_54 = 0x592c85;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_54 = 0x592c90;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_54 = 0x592c9d;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_54 = 0x592ca8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_54 = 0x592cb5;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_54 = 0x592cc0;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    iStack_54 = 0x592ccd;
    FUN_008161f1();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


