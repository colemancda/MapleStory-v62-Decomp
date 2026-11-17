/* FUN_00457fca - 0x00457fca in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00457fca(void)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  int iVar5;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  
  FUN_00879bb8();
  iVar2 = *(int *)(extraout_ECX + 0x40);
  *(int *)(unaff_EBP + -0x20) = extraout_ECX;
  if (iVar2 == 0) {
    puStack_40 = (undefined1 *)0x99;
    puStack_44 = (undefined1 *)0x457ff0;
    FUN_00464f0d();
  }
  else if ((((*(int *)(extraout_ECX + 0x18) == 0) && (0 < *(int *)(unaff_EBP + 8))) &&
           (*(int *)(unaff_EBP + 8) < 6)) && (*(int *)(unaff_EBP + 8) != 5)) {
    puStack_40 = (undefined1 *)(unaff_EBP + -0x2c);
    puStack_44 = (undefined1 *)0x458027;
    iVar2 = FUN_00455c59();
    *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(iVar2 + 4);
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      puStack_40 = (undefined1 *)0x0;
      puStack_44 = (undefined1 *)0x45803b;
      FUN_0045e7c2();
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
    }
    puStack_40 = *(undefined1 **)(extraout_ECX + 0x24);
    puStack_44 = (undefined1 *)(extraout_ECX + 0x1c);
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    iStack_48 = 0x45804d;
    iVar2 = FUN_00413367();
    if (3999 < iVar2) {
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 1;
    }
    puStack_40 = *(undefined1 **)(extraout_ECX + 0x30);
    puStack_44 = (undefined1 *)(extraout_ECX + 0x28);
    iStack_48 = 0x458068;
    iVar2 = FUN_00413367();
    if (3999 < iVar2) {
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 2;
    }
    puStack_40 = *(undefined1 **)(extraout_ECX + 0x3c);
    puStack_44 = (undefined1 *)(extraout_ECX + 0x34);
    iStack_48 = 0x45807e;
    iVar2 = FUN_00413367();
    iStack_50 = (int)puStack_40;
    if (3999 < iVar2) {
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 4;
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_40 = (undefined1 *)0x0;
      puStack_44 = (undefined1 *)0x0;
      iStack_48 = 0;
      iStack_4c = 0;
      *(int **)(unaff_EBP + 8) = &iStack_50;
      FUN_00679d22(&iStack_50,0x224);
      FUN_007db3ad();
    }
    else {
      if ((DAT_00978494 & 1) == 0) {
        DAT_00978494 = DAT_00978494 | 1;
        puStack_40 = (undefined1 *)0xffffffff;
        puStack_44 = &DAT_00978474;
        _DAT_0097847c = 0;
        iStack_48 = 0x4580e0;
        FUN_00414edd();
        puStack_40 = (undefined1 *)0xf;
        puStack_44 = &DAT_00978480;
        iStack_48 = 0x4580ee;
        FUN_00679d22();
        puStack_40 = (undefined1 *)0x10;
        puStack_44 = &DAT_00978484;
        iStack_48 = 0x4580fc;
        FUN_00679d22();
        puStack_40 = (undefined1 *)0x11;
        puStack_44 = &DAT_00978488;
        iStack_48 = 0x45810a;
        FUN_00679d22();
        puStack_40 = (undefined1 *)0x12;
        puStack_44 = &DAT_0097848c;
        iStack_48 = 0x458118;
        FUN_00679d22();
        puStack_40 = (undefined1 *)0x13;
        puStack_44 = &DAT_00978490;
        iStack_48 = 0x458126;
        FUN_00679d22();
        puStack_40 = &LAB_004582ff;
        puStack_44 = (undefined1 *)0x458130;
        FUN_008796d0();
      }
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      puStack_40 = (undefined1 *)0x1f6;
      puStack_44 = (undefined1 *)(unaff_EBP + -0x18);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iStack_48 = 0x458147;
      puVar3 = (undefined4 *)FUN_00679d22();
      iStack_4c = *puVar3;
      puStack_40 = *(undefined1 **)(&DAT_0097847c + *(int *)(unaff_EBP + 8) * 4);
      puStack_44 = (undefined1 *)0xfa0;
      iStack_48 = *(int *)(&DAT_0097847c + *(int *)(unaff_EBP + 8) * 4);
      iStack_50 = unaff_EBP + -0x14;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      puStack_40 = (undefined1 *)0x458179;
      FUN_00414ebb();
      puStack_40 = (undefined1 *)(unaff_EBP + -0x10);
      puStack_44 = (undefined1 *)0x3;
      iStack_4c = unaff_EBP + -0x14;
      *(int **)(unaff_EBP + -0x24) = &iStack_48;
      iStack_50 = 0x45818e;
      iStack_48 = extraout_ECX_00;
      FUN_00450368();
      iStack_4c = 0x458193;
      iVar2 = FUN_0045828d();
      if (iVar2 == 1) {
        iVar2 = *(int *)(unaff_EBP + -0x1c);
        iVar5 = *(int *)(iVar2 + 0x3e3 + *(int *)(unaff_EBP + 8) * 4);
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(iVar5 + -4);
        }
        puStack_40 = *(undefined1 **)(iVar2 + 0x3d);
        puStack_44 = (undefined1 *)(iVar2 + 0x39);
        iStack_48 = 0x4581c5;
        sVar1 = FUN_0045f084();
        iStack_48 = (int)sVar1;
        iStack_4c = *(undefined4 *)(unaff_EBP + 8);
        iStack_50 = 0x4581d1;
        iVar2 = FUN_00458df2();
        puStack_40 = (undefined1 *)0x0;
        puStack_44 = (undefined1 *)0x0;
        if (iVar5 + iVar2 * -4 + 3 < 0x31) {
          iStack_48 = 0xc6;
          iStack_4c = 0x45820f;
          FUN_0060142b();
          puStack_40 = (undefined1 *)0x6;
          *(undefined1 *)(unaff_EBP + -4) = 2;
          puStack_44 = (undefined1 *)0x45821d;
          uVar4 = FUN_00457cda();
          puStack_40 = (undefined1 *)
                       CONCAT31((int3)((uint)uVar4 >> 8),*(int *)(unaff_EBP + -0x10) == 2);
          puStack_44 = (undefined1 *)0x45822d;
          FUN_00457cda();
          puStack_40 = *(undefined1 **)(unaff_EBP + -0x10);
          puStack_44 = (undefined1 *)0x458238;
          FUN_00457d37();
          puStack_40 = (undefined1 *)0x0;
          puStack_44 = (undefined1 *)0x458241;
          FUN_00457cda();
          puStack_40 = *(undefined1 **)(unaff_EBP + 8);
          puStack_44 = (undefined1 *)0x45824c;
          FUN_00457cda();
          puStack_40 = (undefined1 *)(unaff_EBP + -0x3c);
          puStack_44 = (undefined1 *)0x45825b;
          FUN_004751b2();
          *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0x18) = 1;
          *(undefined1 *)(unaff_EBP + -4) = 0;
          puStack_40 = (undefined1 *)0x458270;
          FUN_0045ebca();
        }
        else {
          iStack_48 = 0;
          iStack_4c = 0;
          *(int **)(unaff_EBP + 8) = &iStack_50;
          iStack_50 = extraout_ECX_01;
          FUN_00679d22(&iStack_50,0x1f9);
          FUN_007db3ad();
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      puStack_40 = (undefined1 *)0x45827c;
      FUN_00414ebb();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


