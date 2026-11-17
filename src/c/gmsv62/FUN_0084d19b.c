/* FUN_0084d19b - 0x0084d19b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084d19b(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  int iStack_24;
  undefined4 uStack_20;
  
  FUN_00879bb8();
  uStack_20 = 0x84d1b7;
  uStack_20 = FUN_0042459a();
  iStack_24 = 0x84d1c3;
  iVar3 = FUN_007c00e8();
  uVar4 = -(uint)(iVar3 != 0) & iVar3 + 8U;
  *(uint *)(unaff_EBP + -0x18) = -(uint)(uVar4 != 0) & uVar4 - 8;
  uStack_20 = 0x84d1e2;
  FUN_0084ec32();
  iVar3 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar3 != 0) {
    uStack_20 = 0x84d1f8;
    uVar5 = FUN_0042459a();
    *(undefined4 *)(iVar3 + 0x1e3c) = uVar5;
    iVar3 = *(int *)(unaff_EBP + -0x18);
    uStack_20 = 0x84d208;
    uVar5 = FUN_0042459a();
    *(undefined4 *)(iVar3 + 0x1e40) = uVar5;
    iVar3 = *(int *)(unaff_EBP + -0x18);
    uStack_20 = 0x84d218;
    uVar5 = FUN_0042459a();
    *(undefined4 *)(iVar3 + 0x1e44) = uVar5;
    uStack_20 = 0x84d228;
    uStack_20 = FUN_0079c8f3();
    iStack_24 = 0x84d231;
    FUN_007cbeaf();
    uStack_20 = 0x84d238;
    cVar2 = FUN_0042452b();
    iVar3 = *(int *)(DAT_00978140 + 8);
    iVar1 = *(int *)(unaff_EBP + -0x18);
    if (iVar3 == iVar1) {
      iVar3 = *(int *)(iVar1 + 0x1e44);
      uVar5 = *(undefined4 *)(iVar1 + 0x1e40);
      *(undefined4 *)(extraout_ECX + 0x3308) = *(undefined4 *)(iVar1 + 0x1e3c);
      *(undefined4 *)(extraout_ECX + 0x330c) = uVar5;
      *(int *)(extraout_ECX + 0x3310) = iVar3;
    }
    if (cVar2 != '\0') {
      uStack_20 = 5;
      puStack_28 = (undefined1 *)&iStack_24;
      *(int **)(unaff_EBP + -0x10) = &iStack_24;
      uStack_2c = 0x84d289;
      iStack_24 = iVar3;
      FUN_0084eadf();
      uStack_2c = 0x84d293;
      FUN_0043f93c();
      puStack_28 = (undefined1 *)0x0;
      uStack_2c = 0;
      puVar7 = auStack_30;
      *(undefined1 **)(unaff_EBP + -0x14) = auStack_30;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_0084eadf(auStack_30);
      FUN_00486ada(puVar7);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00679d86(unaff_EBP + 8,0x69a);
      uVar8 = 0;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      uVar5 = FUN_00411641(0);
      FUN_00424e82(uVar5);
      FUN_0042b613(uVar5,uVar8);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      uStack_20 = 0x84d2ed;
      FUN_00402676();
      uStack_20 = 0x69e;
      iStack_24 = unaff_EBP + 8;
      puStack_28 = (undefined1 *)0x84d2fd;
      piVar6 = (int *)FUN_00679d86();
      iStack_24 = *piVar6;
      uStack_20 = 100;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      puStack_28 = (undefined1 *)0x84d30b;
      FUN_007d4073();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      uStack_20 = 0x84d319;
      FUN_00402676();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_20 = 0x84d325;
  FUN_0084ec4f();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


