/* FUN_008453c5 - 0x008453c5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008453c5(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int extraout_ECX;
  undefined *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  int unaff_EBP;
  undefined1 **ppuVar7;
  undefined1 *puStack_40;
  undefined *puStack_3c;
  int *piStack_38;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  piStack_38 = (int *)0x8453e6;
  piStack_38 = (int *)FUN_0042459a();
  puStack_3c = (undefined *)0x8453f2;
  iVar2 = FUN_007c00e8();
  uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
  *(uint *)(unaff_EBP + -0x30) = -(uint)(uVar3 != 0) & uVar3 - 8;
  piStack_38 = (int *)0x845411;
  FUN_0084ec32();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    piStack_38 = (int *)0x845424;
    uVar3 = FUN_0042452b();
    *(uint *)(unaff_EBP + -0x18) = uVar3 & 0xff;
    piStack_38 = (int *)0x845431;
    FUN_0042459a();
    piStack_38 = (int *)0x845438;
    FUN_0042459a();
    piStack_38 = (int *)0x84543f;
    bVar1 = FUN_0042452b();
    *(uint *)(unaff_EBP + -0x24) = (uint)bVar1;
    piStack_38 = (int *)0x84544b;
    uVar3 = FUN_0042452b();
    uVar3 = uVar3 & 0xff;
    *(uint *)(unaff_EBP + -0x28) = uVar3;
    if (bVar1 != 0) {
      puStack_40 = (undefined1 *)&puStack_3c;
      *(undefined ***)(unaff_EBP + -0x20) = &puStack_3c;
      ppuVar7 = &puStack_40;
      puStack_3c = extraout_ECX_00;
      piStack_38 = (int *)uVar3;
      FUN_0084eadf();
      FUN_0043f93c();
      *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_40;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      puStack_40 = extraout_ECX_01;
      FUN_0084eadf(&puStack_40);
      FUN_00486ada(ppuVar7);
      iVar2 = unaff_EBP + -0x1c;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_0084eadf(iVar2);
      FUN_0043f93c(iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00424e27();
      uVar4 = FUN_0043210d();
      FUN_00424e82(uVar4);
      FUN_0042d49d(uVar4);
      piStack_38 = *(int **)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (piStack_38 != (int *)0x0) {
        puStack_3c = (undefined *)0x8454d3;
        (**(code **)(*piStack_38 + 8))();
      }
    }
    piStack_38 = (int *)0x8454db;
    iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
    if (iVar2 != 0) {
      *(undefined4 *)(extraout_ECX + 0x208c) = 0;
      piStack_38 = (int *)0x8454f0;
      uVar4 = FUN_007d1e08();
      *(undefined4 *)(extraout_ECX + 0x2090) = uVar4;
      if (uVar3 == 0) {
        piStack_38 = (int *)0x4e3;
        puStack_3c = (undefined *)(unaff_EBP + -0x1c);
        puStack_40 = (undefined1 *)0x845531;
        puVar5 = (undefined4 *)FUN_00679d86();
        *(undefined4 *)(unaff_EBP + -0x10) = 2;
        *(undefined4 *)(unaff_EBP + -4) = 6;
      }
      else {
        piStack_38 = (int *)0x4e2;
        puStack_3c = (undefined *)(unaff_EBP + -0x20);
        puStack_40 = (undefined1 *)0x84550f;
        puVar5 = (undefined4 *)FUN_00679d86();
        *(undefined4 *)(unaff_EBP + -0x10) = 1;
        *(undefined1 *)(unaff_EBP + -4) = 5;
      }
      puStack_3c = (undefined *)*puVar5;
      piStack_38 = (int *)0x64;
      puStack_40 = (undefined1 *)0x845549;
      FUN_007d4073();
      *(undefined4 *)(unaff_EBP + -4) = 5;
      if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
        piStack_38 = (int *)0x845564;
        FUN_00402676();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
        piStack_38 = (int *)0x845579;
        FUN_00402676();
      }
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      *(undefined4 *)(unaff_EBP + 8) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        piStack_38 = (int *)0xebc;
        puStack_3c = (undefined *)(unaff_EBP + -0x20);
        puStack_40 = (undefined1 *)0x8455b6;
        puVar5 = (undefined4 *)FUN_00679d22();
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 8;
        *(undefined4 *)(unaff_EBP + -4) = 10;
      }
      else {
        piStack_38 = (int *)0xebb;
        puStack_3c = (undefined *)(unaff_EBP + -0x1c);
        puStack_40 = (undefined1 *)0x84559c;
        puVar5 = (undefined4 *)FUN_00679d22();
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 4;
        *(undefined1 *)(unaff_EBP + -4) = 9;
      }
      piStack_38 = (int *)*puVar5;
      puStack_40 = (undefined1 *)(unaff_EBP + -0x14);
      puStack_3c = &DAT_00964da0;
      FUN_00434e21();
      *(undefined4 *)(unaff_EBP + -4) = 9;
      if ((*(byte *)(unaff_EBP + -0x10) & 8) != 0) {
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffff7;
        piStack_38 = (int *)0x8455ec;
        FUN_00414ebb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 8;
      if ((*(byte *)(unaff_EBP + -0x10) & 4) != 0) {
        piStack_38 = (int *)0x8455fd;
        FUN_00414ebb();
      }
      if (*(int *)(unaff_EBP + -0x24) == 0) {
        piStack_38 = (int *)0xebd;
        puStack_3c = (undefined *)(unaff_EBP + -0x24);
        puStack_40 = (undefined1 *)0x845612;
        piVar6 = (int *)FUN_00679d22();
        piStack_38 = *(int **)(unaff_EBP + -0x14);
        puStack_3c = (undefined *)*piVar6;
        puStack_40 = (undefined1 *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 8;
      }
      else if (*(int *)(unaff_EBP + -0x28) == 0) {
        piStack_38 = (int *)0xebe;
        puStack_3c = (undefined *)(unaff_EBP + -0x28);
        puStack_40 = (undefined1 *)0x845648;
        piVar6 = (int *)FUN_00679d22();
        piStack_38 = *(int **)(unaff_EBP + -0x14);
        puStack_3c = (undefined *)*piVar6;
        puStack_40 = (undefined1 *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 8;
      }
      else if (*(int *)(unaff_EBP + -0x18) == 0) {
        piStack_38 = (int *)0xec0;
        puStack_3c = (undefined *)(unaff_EBP + -0x28);
        puStack_40 = (undefined1 *)0x8456a4;
        puVar5 = (undefined4 *)FUN_00679d22();
        piStack_38 = (int *)*puVar5;
        puStack_3c = (undefined *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        puStack_40 = (undefined1 *)0x8456b3;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 8;
      }
      else {
        piStack_38 = (int *)0xebf;
        puStack_3c = (undefined *)(unaff_EBP + -0x28);
        puStack_40 = (undefined1 *)0x84567b;
        puVar5 = (undefined4 *)FUN_00679d22();
        piStack_38 = (int *)*puVar5;
        puStack_3c = (undefined *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        puStack_40 = (undefined1 *)0x84568a;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 8;
      }
      piStack_38 = (int *)0x8456c0;
      FUN_00414ebb();
      puStack_3c = (undefined *)(unaff_EBP + 8);
      piStack_38 = (int *)0xc;
      puStack_40 = (undefined1 *)0x8456cb;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_38 = (int *)0x8456d9;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      piStack_38 = (int *)0x8456e5;
      FUN_00414ebb();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_38 = (int *)0x8456f1;
  FUN_0084ec4f();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


