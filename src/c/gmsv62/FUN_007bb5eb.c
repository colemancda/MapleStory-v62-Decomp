/* FUN_007bb5eb - 0x007bb5eb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007bb5eb(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int extraout_ECX;
  int iVar9;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_00429303();
  if ((((*(int *)((-(uint)(*(int *)(extraout_ECX + 0xd74) != 0) &
                  *(int *)(extraout_ECX + 0xd74) - 0xcU) + 0x110) != 0) &&
       (uVar2 = FUN_004f162d(), (int)(((ulonglong)uVar2 / 1000000) % 100) != 9)) &&
      (uVar2 = *(uint *)(extraout_ECX + 0x52c), *(undefined4 *)(unaff_EBP + -0x20) = DAT_00978368,
      (uVar2 & 0xfffffffe) != 0x12)) && (iVar3 = FUN_004becbc(300,0), iVar3 != 0)) {
    puVar4 = (undefined4 *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
    uVar7 = *puVar4;
    piVar1 = *(int **)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -0x24) = puVar4[1];
    *(uint *)(unaff_EBP + -0x1c) = *(uint *)(extraout_ECX + 0x52c) & 1;
    iVar3 = *piVar1;
    *(undefined4 *)(unaff_EBP + -0x28) = uVar7;
    if (((iVar3 != 0x2f785a) && (iVar3 != 0x30fefa)) && (iVar3 = FUN_00654380(iVar3), iVar3 == 0)) {
LAB_007bb7a5:
      iVar3 = FUN_00653f4d(*(undefined4 *)(unaff_EBP + 0xc));
      if (iVar3 != 0) {
        uVar2 = FUN_0043f6fe();
        if (uVar2 < 0x80000000) goto LAB_007bb88a;
        iVar3 = _rand();
        uVar7 = FUN_00653ee7(*(undefined4 *)(unaff_EBP + 0xc),iVar3);
        *(undefined4 *)(extraout_ECX + 0x530) = uVar7;
        (**(code **)(*(int *)(extraout_ECX + 0x78) + 0x10))(6,100,0);
      }
      FUN_0060142b(0x53,0,0);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      uVar7 = FUN_007d1e08();
      FUN_00457d37(uVar7);
      FUN_00457d37(*piVar1);
      FUN_00457cda(*(undefined4 *)(unaff_EBP + 0xc));
      FUN_0045d247(*(undefined4 *)(unaff_EBP + -0x28));
      FUN_0045d247(*(undefined4 *)(unaff_EBP + -0x24));
      FUN_00457cda(*(undefined4 *)(unaff_EBP + -0x1c));
      FUN_004751b2(unaff_EBP + -0x38);
      iVar3 = *(int *)(unaff_EBP + -0x20);
      *(undefined4 *)(iVar3 + 0x208c) = 1;
      uVar8 = FUN_007d1e08();
      uVar7 = *(undefined4 *)(unaff_EBP + 0xc);
      *(undefined4 *)(iVar3 + 0x2090) = uVar8;
      FUN_00790b31(piVar1,uVar7,6,0,0x7fffffff);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0045ebca();
      uVar7 = 1;
      goto LAB_007bb88c;
    }
    iVar5 = FUN_00654380(*piVar1);
    iVar3 = DAT_00978138;
    iVar9 = (-(uint)((*(uint *)(extraout_ECX + 0x52c) & 1) != 0) & 0xfffffffe) + 1;
    *(int *)(unaff_EBP + 8) = iVar9;
    iVar9 = iVar9 * ((-(uint)(iVar5 != 0) & 0xffffff65) + 200) + *(int *)(unaff_EBP + -0x28);
    iVar5 = *(int *)(iVar3 + 0x24) + 1;
    if (iVar5 < iVar9) {
      iVar5 = iVar9;
    }
    iVar3 = *(int *)(iVar3 + 0x2c) + -1;
    *(int *)(unaff_EBP + -0x28) = iVar5;
    if (iVar3 <= iVar5) {
      *(int *)(unaff_EBP + -0x28) = iVar3;
    }
    do {
      piVar6 = (int *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
      if (*(int *)(unaff_EBP + -0x28) == *piVar6) goto LAB_007bb7a5;
      uVar7 = FUN_00861327(*(undefined4 *)(unaff_EBP + -0x28),*(int *)(unaff_EBP + -0x24),
                           unaff_EBP + -0x10,*(int *)(unaff_EBP + -0x24) + 0x50);
      *(undefined4 *)(unaff_EBP + -0x18) = uVar7;
      iVar3 = FUN_0086123f(*(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                           unaff_EBP + -0x14,*(int *)(unaff_EBP + -0x24) + -0x50);
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        if (iVar3 == 0) {
          iVar3 = *(int *)(unaff_EBP + -0x10);
        }
        else {
          iVar3 = *(int *)(unaff_EBP + -0x14);
          if (*(int *)(unaff_EBP + -0x10) - *(int *)(unaff_EBP + -0x24) <=
              *(int *)(unaff_EBP + -0x24) - iVar3) {
            *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x10) + -1;
            goto LAB_007bb7a5;
          }
        }
LAB_007bb7a1:
        *(int *)(unaff_EBP + -0x24) = iVar3 + -1;
        goto LAB_007bb7a5;
      }
      if (iVar3 != 0) {
        iVar3 = *(int *)(unaff_EBP + -0x14);
        goto LAB_007bb7a1;
      }
      *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + *(int *)(unaff_EBP + 8) * -0xf;
      piVar6 = (int *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
      iVar3 = *piVar6 * *(int *)(unaff_EBP + 8);
      iVar5 = *(int *)(unaff_EBP + -0x28) * *(int *)(unaff_EBP + 8);
    } while (iVar5 - iVar3 != 0 && iVar3 <= iVar5);
  }
LAB_007bb88a:
  uVar7 = 0;
LAB_007bb88c:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar7;
}


