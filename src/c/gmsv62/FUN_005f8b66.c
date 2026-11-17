/* FUN_005f8b66 - 0x005f8b66 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005f8b66(void)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_64;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0xc0) == 0) {
    (**(code **)(**(int **)(extraout_ECX + 0x19c) + 0xc))();
    FUN_00450463();
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x194) + 4) + 0x1c))();
    iStack_64 = 0;
    iStack_68 = 0x6f;
    uStack_6c = 0x5f8bb5;
    FUN_0060142b();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_64 = 0x5f8bc2;
    FUN_00457cda();
    iStack_64 = 0x5f8bcc;
    FUN_00457cda();
    iStack_64 = 0x5f8bdb;
    FUN_004751b2();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045ebca();
  }
  else {
    (**(code **)(**(int **)(extraout_ECX + 0x194) + 0xc))();
    FUN_00450463();
    *(undefined4 *)(extraout_ECX + 0xaa8) = 0;
    (**(code **)(**(int **)(extraout_ECX + 0x1ac) + 0xc))();
    *(undefined4 *)(extraout_ECX + 0xab0) = 1;
    iVar4 = FUN_007d1e08();
    *(int *)(extraout_ECX + 0xacc) = iVar4 + 3000;
  }
  while( true ) {
    cVar1 = FUN_0042452b();
    if (cVar1 < '\0') break;
    FUN_004b8b70();
    iStack_64 = 0x5f8c56;
    FUN_004b6451();
  }
  iStack_64 = 0x5f8c66;
  FUN_0045cdbc();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(int *)(unaff_EBP + -0x18) = extraout_ECX + 0xab4;
  iStack_64 = 0x5f8c7c;
  FUN_00414f8b();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  uVar2 = FUN_0042452b();
  *(uint *)(extraout_ECX + 0xac8) = uVar2 & 0xff;
  uVar2 = FUN_0042452b();
  *(uint *)(extraout_ECX + 0xcc) = uVar2 & 0xff;
  if ((uVar2 & 0xff) != 0) {
    uVar2 = FUN_0042452b();
    *(uint *)(extraout_ECX + 0xadc) = uVar2 & 0xff;
    if (*(int *)(extraout_ECX + 0xc0) == 0) {
      iVar4 = *(int *)(extraout_ECX + 0x194);
    }
    else {
      iVar4 = *(int *)(extraout_ECX + 0x19c);
    }
    iStack_64 = 0x5f8cdb;
    (**(code **)(*(int *)(iVar4 + 4) + 0x24))();
    iStack_64 = 0;
    iStack_68 = 0x5f8cea;
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x1a4) + 4) + 0x24))();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iStack_64 = unaff_EBP + 8;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  iStack_68 = 0x5f8d07;
  puVar3 = (undefined4 *)FUN_00679d22();
  iStack_64 = *puVar3;
  iStack_68 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_6c = 0x5f8d1d;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  iStack_64 = 0x5f8d38;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_64 = unaff_EBP + -0x48;
  iStack_68 = 0x5f8d46;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    iStack_64 = 0x5f8d52;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_64 = 0x5f8d5c;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_64 = unaff_EBP + -0x38;
  iStack_68 = 0x5f8d6a;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    iStack_64 = 0x5f8d76;
    FUN_00878dfb();
  }
  iStack_64 = 0;
  iStack_68 = 0xffffffff;
  uStack_6c = *(undefined4 *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_70 = 0;
  uStack_74 = 0;
  iStack_78 = 0x5f8d89;
  (*DAT_0097b4c8)();
  iStack_78 = 0x5f8d96;
  FUN_0087a1b0();
  iStack_78 = 0;
  uStack_7c = 0;
  iStack_80 = unaff_EBP + -0x48;
  iStack_84 = unaff_EBP + -0x38;
  uStack_88 = 0xffffffff;
  uVar5 = FUN_00449713(&uStack_74);
  uVar5 = FUN_00456ad5(uVar5);
  *(undefined4 **)(unaff_EBP + 8) = &uStack_88;
  FUN_004033a1(uVar5);
  iVar4 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00405a1d(iVar4);
  FUN_00402660();
  FUN_00404a02(iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_80 = 0x5f8de6;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
  iStack_78 = unaff_EBP + -0x14;
  uStack_7c = 0x5f8df8;
  iStack_78 = FUN_00404b30();
  if ((iStack_78 < 0) && (iStack_78 != -0x7fffbffe)) {
    uStack_7c = 0x5f8e09;
    FUN_00878dfb();
  }
  iStack_78 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_7c = 0x5f8e16;
  iStack_78 = FUN_00402bc3();
  if (iStack_78 < 0) {
    uStack_7c = 0x5f8e21;
    FUN_00878dfb();
  }
  iStack_78 = unaff_EBP + -0x38;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_7c = 0x5f8e2e;
  iStack_78 = FUN_00402bc3();
  if (iStack_78 < 0) {
    uStack_7c = 0x5f8e39;
    FUN_00878dfb();
  }
  iStack_78 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_7c = 0x5f8e46;
  iStack_78 = FUN_00402bc3();
  if (iStack_78 < 0) {
    uStack_7c = 0x5f8e51;
    FUN_00878dfb();
  }
  iStack_78 = 0;
  uStack_7c = 0x5f8e59;
  FUN_008161f1();
  iStack_78 = 0xd7;
  iStack_80 = extraout_ECX + 0x20c;
  *(undefined4 **)(unaff_EBP + 8) = &uStack_7c;
  iStack_84 = 0x5f8e70;
  FUN_0046fcc9();
  iStack_80 = *(undefined4 *)(unaff_EBP + -0x18);
  iStack_84 = 0x5f8e78;
  FUN_007d3a22();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_78 = 0x5f8e87;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


