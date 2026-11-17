/* ptr_005ae850 - 0x005ae850 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_005ae850(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  VARIANTARG *unaff_retaddr;
  uint uStack_c;
  uint uStack_8;
  uint uStack_4;
  
  do {
    uStack_4 = 0x5ae856;
    VariantInit(unaff_retaddr);
    uStack_4 = unaff_EBP + -0x74;
    uStack_8 = 0x5ae864;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      uStack_4 = 0x5ae870;
      FUN_00878dfb();
    }
    uStack_4 = unaff_EBP + -0x38;
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    uStack_8 = 0x5ae887;
    FUN_004115d9();
    uStack_8 = 0x5ae88e;
    iVar3 = FUN_0040e48b();
    uStack_8 = iVar3 + -0x10;
    uStack_c = 0x5ae89a;
    iVar3 = FUN_00411641();
    *(uint **)(unaff_EBP + -0x40) = &uStack_c;
    FUN_004033a1(iVar3 + unaff_EBX * 2);
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    FUN_0044974c();
    uVar4 = FUN_005afeaa();
    *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    uStack_4 = 0x5ae8cf;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      uStack_4 = 0x5ae8da;
      FUN_00878dfb();
    }
    uStack_8 = unaff_EBP + -0x34;
    uStack_c = 0x5ae8ed;
    uStack_4 = unaff_EBX;
    FUN_0046fd34();
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    uStack_4 = 0x5ae8fa;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    FUN_00402676();
    unaff_EBX = unaff_EBX + *(int *)(unaff_EBP + -0x38) + *(int *)(unaff_EBP + -0x24);
    uStack_4 = 0x5ae91b;
    FUN_00402e8e();
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    uStack_4 = 0x5ae933;
    FUN_004d6cfb();
    uStack_4 = 0x5ae93e;
    FUN_00402f41();
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
    }
    FUN_00419015();
    while( true ) {
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(uint *)(*(int *)(unaff_EBP + -0x10) + -4) >> 1;
      }
      if (unaff_EBX < (int)uVar2) break;
      uStack_4 = *(int *)(unaff_EBP + -0x28) + 0xda;
      uStack_8 = 0x5ae972;
      (*DAT_0097b4b0)();
      uStack_4 = unaff_EBP + -0x3c;
      uStack_8 = 0x5ae982;
      puVar5 = (undefined4 *)FUN_00679d22();
      uVar4 = *puVar5;
      uStack_4 = (uint)*(ushort *)(unaff_EBP + -0x5c);
      uStack_8 = (uint)*(ushort *)(unaff_EBP + -100);
      uStack_c = (uint)*(ushort *)(unaff_EBP + -0x5e);
      iVar3 = *(int *)(unaff_EDI + 0xb4);
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      FUN_00434e21(*(int *)(unaff_EBP + 8) + 0x10 + iVar3,uVar4,*(undefined2 *)(unaff_EBP + -0x62));
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      FUN_00414ebb();
      if (*(int *)(unaff_EDI + 0x90) == 0) {
        uStack_4 = 0x5ae9dd;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EDI + 0x90);
      iVar3 = *(int *)(*(int *)(unaff_EBP + 8) + *(int *)(unaff_EDI + 0xb4) + 0x14);
      if (iVar3 == 0) {
        *(undefined4 *)(unaff_EBP + -0x28) = 0;
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(iVar3 + -4);
      }
      if (*(int *)(unaff_EDI + 0x94) == 0) {
        uStack_4 = 0x5aea16;
        FUN_00878dfb();
      }
      iVar3 = *(int *)(unaff_EDI + 0x98);
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EDI + 0x94);
      if (iVar3 == 0) {
        uStack_4 = 0x5aea34;
        FUN_00878dfb();
      }
      iVar6 = FUN_0040e53d();
      iVar3 = *(int *)(unaff_EBP + -0x28);
      iVar7 = FUN_0040e53d();
      iVar8 = FUN_0040e53d();
      iVar3 = iVar8 + *(int *)(unaff_EBP + -0x14) + 7 + iVar6 * iVar3 + iVar7;
      iVar6 = *(int *)(*(int *)(unaff_EBP + -0x44) + 0x18);
      *(int *)(unaff_EBP + -0x14) = iVar3;
      if (iVar6 == 1) {
        if (*(int *)(unaff_EDI + 0x94) == 0) {
          uStack_4 = 0x5aea7d;
          FUN_00878dfb();
        }
        iVar6 = FUN_0040e53d();
        *(int *)(unaff_EBP + -0x14) = iVar6 * 3 + iVar3;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      FUN_00402676();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 0x1c;
      piVar1 = (int *)(unaff_EBP + -0x2c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        uStack_4 = 0x5aeac2;
        iVar3 = FUN_004029b9();
        *(int *)(unaff_EBP + 8) = iVar3;
        *(undefined4 *)(unaff_EBP + -4) = 0x21;
        if (iVar3 != 0) {
          FUN_004abf25();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        uStack_4 = 0x5aeae8;
        FUN_0048b9e9();
        uStack_4 = 0x8a;
        uStack_8 = 0x42;
        uStack_c = 0x111;
        (**(code **)(**(int **)(unaff_EDI + 0x78) + 0x20))();
        *(undefined4 *)(*(int *)(unaff_EDI + 0x78) + 0x34) = 0x104;
        iVar3 = *(int *)(unaff_EBP + -0x14) / 10 + -0xc;
        if (iVar3 < 1) {
          iVar3 = 0;
        }
        FUN_004ad003(iVar3);
        *(undefined4 *)(unaff_EBP + -0x48) = 0;
        *(undefined4 *)(unaff_EBP + -0x54) = 1;
        *(undefined4 *)(unaff_EBP + -0x50) = 0;
        *(undefined4 *)(unaff_EBP + -0x4c) = 0;
        *(undefined4 *)(unaff_EBP + -4) = 0x22;
        uVar4 = FUN_00679d86(unaff_EBP + 8,0x9f7);
        *(undefined1 *)(unaff_EBP + -4) = 0x23;
        FUN_00419192(uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 0x22;
        FUN_00402676();
        iVar3 = FUN_004029b9(0x578);
        *(int *)(unaff_EBP + 8) = iVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        if (iVar3 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_0044f3fa();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x22;
        FUN_00450382(uVar4);
        (**(code **)(**(int **)(unaff_EDI + 0x80) + 0x20))();
        uVar4 = FUN_00679d86(unaff_EBP + -0x40,0x4ed);
        *(undefined1 *)(unaff_EBP + -4) = 0x25;
        FUN_00419192(uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 0x22;
        FUN_00402676();
        iVar3 = FUN_004029b9(0x578);
        *(int *)(unaff_EBP + 8) = iVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        if (iVar3 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_0044f3fa();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x22;
        FUN_00450382(uVar4);
        (**(code **)(**(int **)(unaff_EDI + 0x88) + 0x20))();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00402676();
        ExceptionList = *(void **)(unaff_EBP + -0xc);
        return;
      }
      puVar5 = *(undefined4 **)(unaff_EBP + -0x30);
      iVar3 = *(int *)((-(uint)(puVar5 != (undefined4 *)0x0) & (uint)(puVar5 + -4)) + 4);
      puVar9 = (undefined4 *)(*(int *)(unaff_EBP + 8) + *(int *)(unaff_EDI + 0xb4));
      uVar4 = *(undefined4 *)(unaff_EBP + -0x14);
      *puVar9 = 0;
      *(undefined4 **)(unaff_EBP + -0x28) = puVar5;
      puVar9[1] = uVar4;
      uVar4 = *puVar5;
      *(uint *)(unaff_EBP + -0x30) = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
      *(undefined4 **)(unaff_EBP + -0x44) = puVar9;
      puVar9[2] = uVar4;
      uStack_4 = 0x5ae7db;
      FUN_00432cfc();
      *(undefined4 **)(unaff_EBP + -0x24) = puVar9 + 3;
      FUN_00408b49();
      FUN_00402fa6();
      iVar3 = *(int *)(unaff_EBP + -0x1c);
      **(int **)(unaff_EBP + -0x24) = iVar3;
      if (iVar3 != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      }
      iVar3 = *(int *)(unaff_EBP + -0x28);
      puVar9[6] = *(undefined4 *)(iVar3 + 0xe2);
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      uStack_4 = iVar3 + 0x11;
      uStack_8 = 0x5ae824;
      FUN_00470891();
      unaff_EBX = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0x1a;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    }
    unaff_retaddr = (VARIANTARG *)(unaff_EBP + -0x74);
  } while( true );
}


