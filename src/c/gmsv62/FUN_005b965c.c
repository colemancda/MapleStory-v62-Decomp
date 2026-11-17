/* FUN_005b965c - 0x005b965c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005b965c(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar6;
  bool bVar7;
  int iStack_114;
  int iStack_110;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  iStack_110 = *(undefined4 *)(extraout_ECX + 0x744);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_114 = 0x5b9692;
  FUN_004356c4();
  iVar2 = *(int *)(extraout_ECX + 0x744);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iVar4 = extraout_ECX;
  if (0 < iVar2) {
    do {
      iStack_110 = unaff_EBP + -0x2c;
      iStack_114 = 0x5b96bd;
      puVar1 = (undefined4 *)FUN_00679d22();
      iStack_110 = *puVar1;
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x14) * 4;
      iStack_114 = unaff_EBP + -0x24;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x2c) != 0) {
        iStack_110 = 0x5b96f6;
        FUN_00434e38();
      }
      iStack_110 = 0x5b9703;
      FUN_00403191();
      iStack_110 = 0;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_114 = 0x5b9712;
      FUN_004031b7();
      bVar7 = DAT_0097c1ac == 0;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (bVar7) {
        iStack_110 = 0x5b9728;
        FUN_00878dfb();
      }
      iStack_110 = unaff_EBP + -0x48;
      iStack_114 = 4;
      puVar1 = (undefined4 *)FUN_0042a39f(unaff_EBP + -0x34,0,0,0,0);
      iStack_110 = 0x5b975e;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                 (*(int *)(iVar4 + 0x204) + *(int *)(unaff_EBP + -0x10)),(IBinding *)*puVar1);
      FUN_00412600();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_110 = 0x5b9773;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_110 = 0x5b977e;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_110 = 0x5b978e;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_110 = 0x5b9799;
        FUN_00878dfb();
      }
      iStack_110 = 0x5b97a4;
      puVar1 = (undefined4 *)FUN_004489f5();
      iStack_110 = *puVar1;
      iStack_114 = 0x5b97b1;
      FUN_0040ee87();
      piVar6 = (int *)(*(int *)(iVar4 + 0x204) + *(int *)(unaff_EBP + -0x10));
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (*piVar6 == 0) {
        iStack_110 = 0x5b97c9;
        FUN_00878dfb();
      }
      piVar6 = (int *)*piVar6;
      iVar2 = *piVar6;
      iStack_114 = *(int *)(unaff_EBP + -0x74);
      iStack_110 = *(undefined4 *)(unaff_EBP + -0x70);
      *(int **)(unaff_EBP + -0x10) = piVar6;
      iVar2 = (**(code **)(iVar2 + 100))(piVar6,*(undefined4 *)(unaff_EBP + -0x78));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x78);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00412600();
      iVar2 = *(int *)(unaff_EBP + -0x18);
      puVar1 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x30);
      FUN_0040ee87(*puVar1,1);
      piVar6 = (int *)(*(int *)(iVar2 + 0x204) + *(int *)(unaff_EBP + -0x14) * 4);
      iVar2 = *piVar6;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (iVar2 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar6 = (int *)*piVar6;
      iVar2 = *piVar6;
      *(int **)(unaff_EBP + -0x10) = piVar6;
      iVar2 = (**(code **)(iVar2 + 0xfc))
                        (piVar6,*(undefined4 *)(unaff_EBP + -0xe8),
                         *(undefined4 *)(unaff_EBP + -0xe4),*(undefined4 *)(unaff_EBP + -0xe0),
                         *(undefined4 *)(unaff_EBP + -0xdc));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963df8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iVar2 = FUN_00402bc3(unaff_EBP + -0xe8);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00412600();
      iVar2 = *(int *)(unaff_EBP + -0x18);
      iVar3 = *(int *)(unaff_EBP + -0x14) * 4;
      piVar6 = (int *)(*(int *)(iVar2 + 0x204) + iVar3);
      iVar4 = *piVar6;
      *(int *)(unaff_EBP + -0x10) = iVar3;
      if (iVar4 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar6 = (int *)*piVar6;
      iVar4 = (**(code **)(*piVar6 + 0xe0))(piVar6,0xffffffff);
      if (iVar4 < 0) {
        FUN_00878e09(iVar4,piVar6,&DAT_00963df8);
      }
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      FUN_00403191(&DAT_00980690);
      piVar6 = (int *)(*(int *)(iVar2 + 0x204) + *(int *)(unaff_EBP + -0x10));
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (*piVar6 == 0) {
        FUN_00878dfb(0x80004003);
      }
      iVar2 = *(int *)(unaff_EBP + -0x18);
      iVar4 = *(int *)(iVar2 + 0x7dc);
      *(int *)(unaff_EBP + -0x10) = *piVar6;
      iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0x90))
                        (*(undefined4 *)(unaff_EBP + -0x10),
                         (*(int *)(unaff_EBP + -0x14) % iVar4) * 0x38 + *(int *)(iVar2 + 0x7e0),
                         (*(int *)(unaff_EBP + -0x14) / iVar4) * 0x43 + *(int *)(iVar2 + 0x7e4),
                         *(undefined4 *)(unaff_EBP + -0x98),*(undefined4 *)(unaff_EBP + -0x94),
                         *(undefined4 *)(unaff_EBP + -0x90),*(undefined4 *)(unaff_EBP + -0x8c),
                         *(undefined4 *)(unaff_EBP + -0xd8),*(undefined4 *)(unaff_EBP + -0xd4),
                         *(undefined4 *)(unaff_EBP + -0xd0),*(undefined4 *)(unaff_EBP + -0xcc));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x98);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar2 = FUN_00402bc3(unaff_EBP + -0xd8);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      FUN_004031b7(300,3);
      uVar5 = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x71c);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      (*DAT_0097b4c8)(0,0,uVar5,0xffffffff,0,0);
      FUN_0087a1b0();
      iStack_110 = 0;
      iStack_114 = -1;
      uVar5 = FUN_00449713(&stack0xfffffef8);
      uVar5 = FUN_00456ad5(uVar5);
      *(int **)(unaff_EBP + -0x10) = &iStack_114;
      FUN_004033a1(uVar5);
      iVar2 = unaff_EBP + -0x108;
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      FUN_0040263d(iVar2);
      FUN_004048a4(iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      iStack_114 = 0x5b9a91;
      iVar2 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      *(int *)(unaff_EBP + -0x38) = iVar2;
      if (iVar2 != 0) {
        iStack_110 = 0x5b9aa8;
        iVar2 = FUN_0041a581();
        if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
          iStack_110 = 0x5b9ab9;
          FUN_00878dfb();
        }
      }
      uVar5 = *(undefined4 *)(unaff_EBP + -0x20);
      iVar2 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x204) +
                      *(int *)(unaff_EBP + -0x14) * 4);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      if (iVar2 == 0) {
        iStack_110 = 0x5b9ae5;
        FUN_00878dfb();
      }
      iStack_110 = unaff_EBP + -0xa8;
      iStack_114 = unaff_EBP + -0x88;
      FUN_004250ac(unaff_EBP + -0xf8,uVar5,unaff_EBP + -0x58,unaff_EBP + -0x68);
      iStack_110 = 0x5b9b1f;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_110 = 0x5b9b2a;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
        iStack_110 = 0x5b9b3b;
        (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iStack_110 = 0x5b9b4b;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_110 = 0x5b9b56;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iStack_110 = 0x5b9b63;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_110 = 0x5b9b6e;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iStack_110 = 0x5b9b7b;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_110 = 0x5b9b86;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iStack_110 = 0x5b9b96;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_110 = 0x5b9ba1;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_110 = 0x5b9bb1;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_110 = 0x5b9bbc;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_110 = 0x5b9bcc;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_110 = 0x5b9bd7;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
      iVar4 = *(int *)(unaff_EBP + -0x18);
    } while (*(int *)(unaff_EBP + -0x14) < *(int *)(iVar4 + 0x744));
  }
  uVar5 = FUN_007d1e08();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(iVar4 + 0x750) = uVar5;
  *(undefined4 *)(iVar4 + 0x760) = 1;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


