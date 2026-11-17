/* FUN_00554ef3 - 0x00554ef3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00554ef3(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = *(int *)(unaff_EBP + 0xc);
  iVar1 = iVar2 / 1000000;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar1 == 1) {
    iVar2 = FUN_0054e7b3(iVar2);
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)FUN_004029b9(0xc9);
      *(undefined4 **)(unaff_EBP + -0x14) = puVar3;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        FUN_004ba99b();
        *puVar3 = &PTR_FUN_008e9fcc;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0045e3a0(*(undefined4 *)(unaff_EBP + 0xc));
      FUN_0045f03e(iVar2 + 0x90,*(undefined4 *)(iVar2 + 0x94));
      uVar4 = FUN_004b8c01();
      *(undefined4 *)((int)puVar3 + 0x2a) = uVar4;
      uVar4 = FUN_004b8c01();
      puVar3[0xc] = uVar4;
      FUN_0045f084(iVar2 + 0xa0,*(undefined4 *)(iVar2 + 0xa4));
      uVar4 = FUN_004b8c34();
      puVar3[0xe] = uVar4;
      FUN_0045f084(iVar2 + 0xa8,*(undefined4 *)(iVar2 + 0xac));
      uVar4 = FUN_004b8c34();
      puVar3[0x10] = uVar4;
      FUN_0045f084(iVar2 + 0xb0,*(undefined4 *)(iVar2 + 0xb4));
      uVar4 = FUN_004b8c34();
      puVar3[0x12] = uVar4;
      FUN_0045f084(iVar2 + 0xb8,*(undefined4 *)(iVar2 + 0xbc));
      uVar4 = FUN_004b8c34();
      puVar3[0x14] = uVar4;
      FUN_0045f084(iVar2 + 0xc0,*(undefined4 *)(iVar2 + 0xc4));
      uVar4 = FUN_004b8c34();
      puVar3[0x16] = uVar4;
      FUN_0045f084(iVar2 + 200,*(undefined4 *)(iVar2 + 0xcc));
      uVar4 = FUN_004b8c34();
      puVar3[0x18] = uVar4;
      FUN_0045f084(iVar2 + 0xd0,*(undefined4 *)(iVar2 + 0xd4));
      uVar4 = FUN_004b8c34();
      puVar3[0x1a] = uVar4;
      FUN_0045f084(iVar2 + 0xd8,*(undefined4 *)(iVar2 + 0xdc));
      uVar4 = FUN_004b8c34();
      puVar3[0x1c] = uVar4;
      FUN_0045f084(iVar2 + 0xe0,*(undefined4 *)(iVar2 + 0xe4));
      uVar4 = FUN_004b8c34();
      puVar3[0x1e] = uVar4;
      FUN_0045f084(iVar2 + 0xe8,*(undefined4 *)(iVar2 + 0xec));
      uVar4 = FUN_004b8c34();
      puVar3[0x20] = uVar4;
      FUN_0045f084(iVar2 + 0xf0,*(undefined4 *)(iVar2 + 0xf4));
      uVar4 = FUN_004b8c34();
      puVar3[0x22] = uVar4;
      FUN_0045f084(iVar2 + 0xf8,*(undefined4 *)(iVar2 + 0xfc));
      uVar4 = FUN_004b8c34();
      puVar3[0x24] = uVar4;
      FUN_0045f084(iVar2 + 0x100,*(undefined4 *)(iVar2 + 0x104));
      uVar4 = FUN_004b8c34();
      puVar3[0x26] = uVar4;
      FUN_0045f084(iVar2 + 0x108,*(undefined4 *)(iVar2 + 0x10c));
      uVar4 = FUN_004b8c34();
      puVar3[0x28] = uVar4;
      FUN_0045f084(iVar2 + 0x110,*(undefined4 *)(iVar2 + 0x114));
      uVar4 = FUN_004b8c34();
      puVar3[0x2a] = uVar4;
      *(undefined1 *)(puVar3 + 0x2f) = 0;
      uVar4 = FUN_004b8c34();
      iVar2 = *(int *)(unaff_EBP + 8);
      puVar3[0x2d] = 0;
      puVar3[0x2c] = uVar4;
      puVar3[0x2e] = 0;
      *(undefined4 **)(iVar2 + 4) = puVar3;
      if (puVar3 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar3 + 1);
      }
      goto LAB_005553fe;
    }
  }
  else if (1 < iVar1) {
    if (iVar1 < 5) {
      FUN_00552e70(unaff_EBP + -0x14,iVar2);
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        puVar3 = (undefined4 *)FUN_004029b9(0x4d);
        *(undefined4 **)(unaff_EBP + -0x10) = puVar3;
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          FUN_004ba99b();
          *puVar3 = &PTR_FUN_008ea014;
        }
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_0045e3a0(*(undefined4 *)(unaff_EBP + 0xc));
        uVar4 = FUN_004b8d93();
        puVar3[0xb] = uVar4;
        *(undefined1 *)(puVar3 + 0x10) = 0;
        uVar4 = FUN_004b8c34();
        iVar2 = *(int *)(unaff_EBP + 8);
        puVar3[0xe] = 0;
        puVar3[0xd] = uVar4;
        puVar3[0xf] = 0;
        *(undefined4 **)(iVar2 + 4) = puVar3;
        if (puVar3 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar3 + 1);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        piVar5 = *(int **)(unaff_EBP + -0x14);
LAB_00554fe2:
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 8))(piVar5);
        }
        goto LAB_005553fe;
      }
    }
    else if (iVar1 == 5) {
      FUN_004497f5(unaff_EBP + -0x10,iVar2);
      *(undefined4 *)(unaff_EBP + -4) = 3;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        iVar2 = FUN_0048b5b3(*(undefined4 *)(unaff_EBP + 0xc));
        if (iVar2 == 8) {
          puVar3 = (undefined4 *)FUN_004029b9(0x61);
          *(undefined4 **)(unaff_EBP + -0x14) = puVar3;
          *(undefined1 *)(unaff_EBP + -4) = 4;
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            FUN_004ba99b();
            *puVar3 = &PTR_FUN_008ea05c;
          }
          *(undefined1 *)(unaff_EBP + -4) = 3;
          FUN_0045e3a0(*(undefined4 *)(unaff_EBP + 0xc));
          puVar6 = (undefined4 *)FUN_0045a1d8(unaff_EBP + -0x18,*(undefined4 *)(unaff_EBP + 0xc));
          uVar4 = *puVar6;
          *(undefined1 *)(unaff_EBP + -4) = 5;
          (*DAT_0097b4b8)(puVar3 + 10,uVar4);
          *(undefined1 *)(unaff_EBP + -4) = 3;
          FUN_00414ebb();
          uVar4 = FUN_004b8c01();
          *(undefined4 *)((int)puVar3 + 0x37) = uVar4;
          uVar4 = FUN_004b8c34();
          *(undefined4 *)((int)puVar3 + 0x3f) = uVar4;
          uVar4 = FUN_004b8c01();
          *(undefined4 *)((int)puVar3 + 0x59) = 0;
          *(undefined4 *)((int)puVar3 + 0x45) = uVar4;
          *(undefined4 *)((int)puVar3 + 0x5d) = 0;
          uVar4 = FUN_004b8c34();
          *(undefined4 *)((int)puVar3 + 0x4d) = uVar4;
        }
        else {
          puVar3 = (undefined4 *)FUN_004029b9(0x4d);
          *(undefined4 **)(unaff_EBP + -0x14) = puVar3;
          *(undefined1 *)(unaff_EBP + -4) = 6;
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            FUN_004ba99b();
            *puVar3 = &PTR_FUN_008ea014;
          }
          *(undefined1 *)(unaff_EBP + -4) = 3;
          FUN_0045e3a0(*(undefined4 *)(unaff_EBP + 0xc));
          uVar4 = FUN_004b8d93();
          puVar3[0xb] = uVar4;
          *(undefined1 *)(puVar3 + 0x10) = 0;
          uVar4 = FUN_004b8c34();
          puVar3[0xe] = 0;
          puVar3[0xd] = uVar4;
          puVar3[0xf] = 0;
        }
        iVar2 = *(int *)(unaff_EBP + 8);
        *(undefined4 **)(iVar2 + 4) = puVar3;
        if (puVar3 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar3 + 1);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        piVar5 = *(int **)(unaff_EBP + -0x10);
        goto LAB_00554fe2;
      }
    }
  }
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(iVar2 + 4) = 0;
LAB_005553fe:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}


