/* FUN_007ba937 - 0x007ba937 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007ba937(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int extraout_ECX;
  uint uVar10;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x20) = DAT_00978368;
  iVar3 = FUN_004becbc(300,0);
  if (iVar3 != 0) {
    iVar3 = FUN_00455c59(unaff_EBP + -0x1c);
    uVar8 = *(undefined4 *)(iVar3 + 4);
    FUN_0045e4a2();
    piVar1 = *(int **)(unaff_EBP + 8);
    iVar3 = FUN_00650dae(uVar8,*piVar1,0);
    if ((0 < iVar3) && ((*piVar1 / 1000) % 10 != 0)) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      FUN_00486ada(unaff_EBP + -0x18);
      FUN_004125d9();
      iVar3 = FUN_00653f4d(*(undefined4 *)(unaff_EBP + 0xc));
      if (iVar3 != 0) {
        iVar3 = FUN_0043f6fe();
        if (-1 < iVar3) goto LAB_007ba9ec;
        iVar3 = FUN_006158e9();
        if (iVar3 == 0) {
          iVar3 = FUN_00615923();
          if (iVar3 == 0) {
            iVar3 = _rand();
            iVar3 = FUN_00653ee7(*(undefined4 *)(unaff_EBP + 0xc),iVar3);
          }
          else {
            iVar3 = 0x2e;
          }
        }
        else {
          iVar3 = 0x2d;
        }
        *(int *)(extraout_ECX + 0x530) = iVar3;
        (**(code **)(*(int *)(extraout_ECX + 0x78) + 0x10))(6,100,0);
        iVar3 = *(int *)(extraout_ECX + 0x530);
        uVar5 = FUN_0043f6fe();
        *(int *)(unaff_EBP + -0x14) =
             (((int *)(extraout_ECX + 0x78))[(uint)(uVar5 < 0x80000000) * 0xfd + 0x131] *
             (&DAT_00978688)[iVar3 * 6]) / (int)(&DAT_00978684)[iVar3 * 6];
      }
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      uVar8 = *(undefined4 *)(extraout_ECX + 0xd78);
      puVar6 = (undefined4 *)FUN_0047cf98(0xffffffff);
      uVar2 = *(undefined4 *)(unaff_EBP + 0xc);
      *puVar6 = uVar8;
      iVar3 = FUN_006509a1(uVar2);
      FUN_00411537(unaff_EBP + -0x38,iVar3 + 0x16c);
      uVar5 = *(uint *)(extraout_ECX + 0x52c);
      iVar3 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
      *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar3 + 4);
      puVar6 = (undefined4 *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
      uVar8 = *puVar6;
      if ((uVar5 & 1) == 0) {
        *(int *)(unaff_EBP + -0x30) = -*(int *)(unaff_EBP + -0x30);
        *(int *)(unaff_EBP + -0x38) = -*(int *)(unaff_EBP + -0x38);
        FUN_004459fe(unaff_EBP + -0x38,unaff_EBP + -0x30);
      }
      (*DAT_0097b54c)(unaff_EBP + -0x38,uVar8,*(undefined4 *)(unaff_EBP + -0x18));
      uVar5 = *(uint *)(DAT_00978140 + 0x30);
      while (uVar5 != 0) {
        iVar3 = *(int *)((-(uint)(uVar5 != 0) & uVar5 - 0x10) + 4);
        uVar10 = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
        iVar3 = *(int *)(uVar5 + 4);
        *(int *)(unaff_EBP + -0x24) = iVar3;
        iVar7 = 0;
        if (iVar3 != 0) {
          InterlockedIncrement((LONG *)(iVar3 + 4));
          iVar7 = *(int *)(unaff_EBP + -0x24);
        }
        iVar3 = **(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if ((iVar3 == 0x8adecd) &&
           ((*(uint *)(*(int *)(iVar7 + 0x10) + 0x52c) & 0xfffffffe) != 0x12)) {
          *(undefined1 *)(unaff_EBP + -4) = 0;
        }
        else {
          puVar6 = (undefined4 *)(**(code **)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + 0x10))();
          iVar3 = (*DAT_0097b57c)(unaff_EBP + -0x38,*puVar6,puVar6[1]);
          if (iVar3 != 0) {
            uVar8 = *(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0x24) + 0x10) + 0xd78);
            puVar6 = (undefined4 *)FUN_0047cf98(0xffffffff);
            *puVar6 = uVar8;
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          iVar7 = *(int *)(unaff_EBP + -0x24);
        }
        uVar5 = uVar10;
        if (iVar7 != 0) {
          FUN_004f6e32(0);
          *(undefined4 *)(unaff_EBP + -0x24) = 0;
        }
      }
      FUN_0060142b(0x53,0,0);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      uVar8 = FUN_007d1e08();
      FUN_00457d37(uVar8);
      FUN_00457d37(**(undefined4 **)(unaff_EBP + 8));
      FUN_00457cda(*(undefined4 *)(unaff_EBP + 0xc));
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + -4);
      }
      FUN_00457cda(uVar8);
      for (uVar5 = 0;
          (iVar3 = *(int *)(unaff_EBP + -0x10), iVar3 != 0 && (uVar5 < *(uint *)(iVar3 + -4)));
          uVar5 = uVar5 + 1) {
        FUN_00457d37(*(undefined4 *)(iVar3 + uVar5 * 4));
      }
      FUN_0045d247(*(undefined4 *)(unaff_EBP + -0x14));
      FUN_004751b2(unaff_EBP + -0x48);
      iVar3 = *(int *)(unaff_EBP + -0x20);
      uVar4 = 1;
      *(undefined4 *)(iVar3 + 0x208c) = 1;
      uVar9 = FUN_007d1e08();
      uVar8 = *(undefined4 *)(unaff_EBP + 0xc);
      uVar2 = *(undefined4 *)(unaff_EBP + 8);
      *(undefined4 *)(iVar3 + 0x2090) = uVar9;
      FUN_00790b31(uVar2,uVar8,6,0,0x7fffffff);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_0045ebca();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0047cf76();
      goto LAB_007bac83;
    }
  }
LAB_007ba9ec:
  uVar4 = 0;
LAB_007bac83:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


