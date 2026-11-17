/* FUN_006a2cb9 - 0x006a2cb9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006a2cb9(void)

{
  DWORD DVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0xa4) = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffb8;
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(extraout_ECX + 0xa8) = *(undefined4 *)(unaff_EBP + 0x14);
  DVar1 = timeGetTime();
  iVar3 = *(int *)(unaff_EBP + 0x18);
  *(DWORD *)(extraout_ECX + 0xac) = DVar1 + iVar3;
  *(undefined4 *)(unaff_EBP + 0x10) = 0;
  *(int *)(extraout_ECX + 0xb4) = iVar3 / 1000;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) == 0) {
    iStack_50 = unaff_EBP + 0x14;
    iStack_54 = 0x6a2d47;
    puVar2 = (undefined4 *)FUN_00679d22();
    *(undefined4 *)(unaff_EBP + -0x14) = 2;
    *(undefined4 *)(unaff_EBP + -4) = 2;
  }
  else {
    iStack_50 = unaff_EBP + 0x18;
    iStack_54 = 0x6a2d27;
    puVar2 = (undefined4 *)FUN_00679d22();
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  iStack_50 = *puVar2;
  iStack_54 = unaff_EBP + 0x10;
  iStack_58 = 0x6a2d5f;
  FUN_00434e21();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if ((*(byte *)(unaff_EBP + -0x14) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffd;
    FUN_00414ebb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(byte *)(unaff_EBP + -0x14) & 1) != 0) {
    FUN_00414ebb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_50 = 0x6a2d9c;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_50 = unaff_EBP + -0x38;
  iStack_54 = 0x6a2dab;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_50 = 0x6a2db7;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_50 = 0x6a2dc1;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
  iStack_50 = unaff_EBP + -0x28;
  iStack_54 = 0x6a2dcb;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_50 = 0x6a2dd7;
    FUN_00878dfb();
  }
  iStack_50 = 0;
  iStack_54 = unaff_EBP + -0x38;
  iStack_58 = unaff_EBP + -0x28;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_5c = 0x6a2def;
  uVar4 = FUN_00449713();
  *(undefined4 **)(unaff_EBP + 0x18) = &uStack_5c;
  FUN_00448a17(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00405a1d();
  FUN_00402660();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00404a02(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_54 = 0x6a2e25;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0x14) = uVar4;
  iStack_50 = 0x6a2e37;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_50 = 0x6a2e48;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_50 = 0x6a2e55;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_50 = 0x6a2e60;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_50 = 0x6a2e6d;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_50 = 0x6a2e78;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_50 = 0x6a2e85;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_50 = 0x6a2e90;
    FUN_00878dfb();
    FUN_006a2e9b();
    return;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_50 = 0x6a2ea8;
  FUN_008161f1();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


