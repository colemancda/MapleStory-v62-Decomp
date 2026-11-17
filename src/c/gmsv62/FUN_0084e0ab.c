/* FUN_0084e0ab - 0x0084e0ab in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084e0ab(void)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  DWORD DVar6;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_200;
  int iStack_1fc;
  int iStack_1f8;
  int iStack_1f4;
  undefined1 auStack_1f0 [4];
  undefined4 uStack_1ec;
  uint uStack_1e8;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x31fc) != 0) {
    uStack_1e8 = 0x84e0cf;
    FUN_00815de9();
    uStack_1e8 = 0x84e0da;
    FUN_0083df6f();
  }
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  uStack_1e8 = 0x84e0e4;
  uVar3 = FUN_0042459a();
  uStack_1e8 = unaff_EBP + -0x1c;
  uStack_1ec = 0x84e0f1;
  FUN_0045cdbc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_1e8 = unaff_EBP + -0x18;
  uStack_1ec = 0x84e100;
  FUN_0045cdbc();
  uStack_1e8 = unaff_EBP + -0x20;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_1ec = 0x84e10f;
  FUN_0045cdbc();
  uStack_1e8 = unaff_EBP + -0x24;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_1ec = 0x84e11e;
  FUN_0045cdbc();
  uStack_1e8 = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_1ec = 0x84e12d;
  FUN_0045cdbc();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_1e8 = 0x84e138;
  uVar4 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  uStack_1e8 = 0x84e142;
  uVar2 = FUN_0042452b();
  *(undefined1 *)(unaff_EBP + 0xb) = uVar2;
  uStack_1e8 = 0x84e150;
  FUN_0044590d();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_1ec = 0x84e160;
  uStack_1e8 = uVar1;
  FUN_004b876a();
  uStack_1e8 = 600;
  uStack_1ec = 0x84e16f;
  iVar5 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x28) = iVar5;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar5 == 0) {
    uStack_1e8 = 0;
  }
  else {
    uStack_1e8 = (uint)*(byte *)(unaff_EBP + 0xb);
    uStack_1ec = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_1f4 = unaff_EBP + -0x14;
    *(undefined1 **)(unaff_EBP + 8) = auStack_1f0;
    iStack_1f8 = 0x84e191;
    FUN_00450368();
    iStack_1f8 = unaff_EBP + -0x24;
    *(int **)(unaff_EBP + -0x10) = &iStack_1f4;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_1fc = 0x84e1a4;
    FUN_00450368();
    iStack_1fc = unaff_EBP + -0x20;
    *(int **)(unaff_EBP + -0x34) = &iStack_1f8;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_200 = 0x84e1b7;
    FUN_00450368();
    iStack_200 = unaff_EBP + -0x18;
    *(int **)(unaff_EBP + -0x2c) = &iStack_1fc;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_00450368();
    *(int **)(unaff_EBP + -0x30) = &iStack_200;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_00450368(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    uStack_1e8 = FUN_00447fb6(uVar3,unaff_EBP + -0x1e4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_1ec = 0x84e205;
  FUN_0084e94c();
  uStack_1e8 = 0x84e210;
  FUN_00448f25();
  uStack_1e8 = 0x84e216;
  DVar6 = timeGetTime();
  *(DWORD *)(extraout_ECX + 0xc) = DVar6;
  iVar5 = *(int *)(unaff_EBP + -0x14);
  *(undefined4 *)(extraout_ECX + 8) = 1;
  *(undefined ***)(unaff_EBP + -0x1e4) = &PTR_LAB_008e84a0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar5 != 0) {
    uStack_1e8 = iVar5 + -0xc;
    uStack_1ec = 0x84e23e;
    FUN_00434e38();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_1e8 = 0x84e24b;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_1e8 = 0x84e257;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  uStack_1e8 = 0x84e263;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_1e8 = 0x84e26f;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


