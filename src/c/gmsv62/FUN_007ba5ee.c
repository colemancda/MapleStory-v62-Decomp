/* FUN_007ba5ee - 0x007ba5ee in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007ba5ee(void)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar7;
  
  FUN_00879bb8();
  piVar7 = *(int **)(unaff_EBP + 8);
  puVar1 = (undefined1 *)*piVar7;
  if ((((puVar1 == (undefined1 *)0x3ee1ac) || (puVar1 == (undefined1 *)0x40684c)) ||
      (puVar1 == &LAB_004c4f2d)) || (puVar1 == (undefined1 *)0x4faa8e)) {
    FUN_00486ada(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar3 = FUN_006158e9();
    if (iVar3 == 0) {
      FUN_00486ada(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar3 = FUN_00615923();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      piVar2 = *(int **)(unaff_EBP + -0x18);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      if (iVar3 != 0) goto LAB_007ba689;
      *(undefined1 *)(unaff_EBP + -0xd) = 0;
    }
    else {
LAB_007ba689:
      *(undefined1 *)(unaff_EBP + -0xd) = 1;
    }
    piVar2 = *(int **)(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    if (*(char *)(unaff_EBP + -0xd) == '\0') goto LAB_007ba6ad;
  }
  else {
LAB_007ba6ad:
    if (((undefined1 *)*piVar7 != &LAB_004c4f2d) || (uVar4 = FUN_0043f6fe(), 0x7fffffff < uVar4)) {
      puVar1 = (undefined1 *)*piVar7;
      if ((puVar1 == (undefined1 *)0x4dfcdd) ||
         ((puVar1 == &DAT_004e23eb || (puVar1 == &LAB_004c4f2d)))) {
        iVar3 = FUN_00429303();
        uVar4 = *(uint *)(iVar3 + 0x108) >> 1 & 1;
        *(uint *)(unaff_EBP + -0x18) = uVar4;
        if (uVar4 == 0) goto LAB_007ba71b;
        uVar5 = FUN_00679d22(unaff_EBP + 0xc,0x361);
        *(undefined4 *)(unaff_EBP + -4) = 2;
        FUN_00471102(uVar5,0xc);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_007ba8b8:
        FUN_00414ebb();
      }
      else {
LAB_007ba71b:
        *(undefined4 *)(unaff_EBP + -0x14) = 0xffffffff;
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        if ((*(byte *)(unaff_EBP + 0x10) & 2) != 0) {
          uVar5 = FUN_007bd3c9(piVar7,*(undefined4 *)(unaff_EBP + 0xc),unaff_EBP + -0x1c);
          *(undefined4 *)(unaff_EBP + -0x18) = uVar5;
        }
        if ((*(byte *)(unaff_EBP + 0x10) & 4) != 0) {
          uVar5 = FUN_006509a1(*(undefined4 *)(unaff_EBP + 0xc));
          FUN_007a3fab(uVar5);
          *(undefined4 *)(unaff_EBP + -4) = 3;
          FUN_00411537(unaff_EBP + -0x2c,unaff_EBP + -0x104);
          piVar7 = (int *)(extraout_ECX + 4);
          *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(extraout_ECX + 0x52c);
          iVar3 = (**(code **)(*piVar7 + 0x10))();
          uVar5 = *(undefined4 *)(iVar3 + 4);
          puVar6 = (undefined4 *)(**(code **)(*piVar7 + 0x10))();
          *(undefined4 *)(unaff_EBP + -0x14) = *puVar6;
          if ((*(byte *)(unaff_EBP + 0x10) & 1) == 0) {
            *(int *)(unaff_EBP + -0x24) = -*(int *)(unaff_EBP + -0x24);
            *(int *)(unaff_EBP + -0x2c) = -*(int *)(unaff_EBP + -0x2c);
            FUN_004459fe(unaff_EBP + -0x2c,unaff_EBP + -0x24);
          }
          (*DAT_0097b54c)(unaff_EBP + -0x2c,*(undefined4 *)(unaff_EBP + -0x14),uVar5);
          iVar3 = FUN_00413367(unaff_EBP + -0x140,*(undefined4 *)(unaff_EBP + -0x138));
          iVar3 = FUN_005d528b(unaff_EBP + -0x2c,unaff_EBP + -0x68,
                               iVar3 - *(int *)(unaff_EBP + -0x1c),0,0,0,0,0);
          *(int *)(unaff_EBP + -0x14) = iVar3;
          *(undefined4 *)(unaff_EBP + 0x10) = 0;
          if (0 < iVar3) {
            do {
              iVar3 = *(int *)(unaff_EBP + -0x68 + *(int *)(unaff_EBP + 0x10) * 4);
              uVar5 = FUN_004b8c9b(iVar3 + 0x150,*(undefined4 *)(iVar3 + 0x158));
              *(undefined4 *)(unaff_EBP + -0xa4 + *(int *)(unaff_EBP + 0x10) * 4) = uVar5;
              if ((**(int **)(unaff_EBP + 8) == 0x3ee1ac) || (**(int **)(unaff_EBP + 8) == 0x40684c)
                 ) {
                FUN_005cc3d9(1,-(uint)(extraout_ECX != 0) & (uint)piVar7,0);
              }
              *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
            } while (*(int *)(unaff_EBP + 0x10) < *(int *)(unaff_EBP + -0x14));
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_006575e6();
          piVar7 = *(int **)(unaff_EBP + 8);
        }
        if (*piVar7 == 0x3ee1ae) {
          iVar3 = FUN_007a26f6(piVar7,*(undefined4 *)(unaff_EBP + 0xc));
          *(int *)(unaff_EBP + 8) = iVar3;
          if (iVar3 == 0) {
            uVar5 = FUN_00679d22(unaff_EBP + 8,0xad2);
            *(undefined4 *)(unaff_EBP + -4) = 4;
            FUN_00471102(uVar5,0xc);
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            goto LAB_007ba8b8;
          }
        }
        iVar3 = FUN_007bd07c(piVar7,*(undefined4 *)(unaff_EBP + 0xc),
                             *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14),
                             unaff_EBP + -0xa4,*(undefined4 *)(unaff_EBP + 8),0);
        if (iVar3 != 0) {
          FUN_00790b31(piVar7,*(undefined4 *)(unaff_EBP + 0xc),6,0,0x7fffffff);
          if ((*piVar7 == 0x3ec) || (*piVar7 == 0x4faa8e)) {
            if (*(int *)(extraout_ECX + 0x24d8) == 0) {
              uVar5 = FUN_007d1e08();
              *(undefined4 *)(extraout_ECX + 0x24dc) = uVar5;
            }
            *(int *)(extraout_ECX + 0x24d8) = *(int *)(extraout_ECX + 0x24d8) + 1;
          }
          uVar5 = 1;
          goto LAB_007ba8bf;
        }
      }
    }
  }
  uVar5 = 0;
LAB_007ba8bf:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


