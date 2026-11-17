/* FUN_007ac60d - 0x007ac60d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007ac60d(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  int *piVar7;
  int *piVar8;
  int unaff_EBP;
  undefined4 uVar9;
  int *piStack_7c;
  int iStack_78;
  int iStack_74;
  
  FUN_00879bb8();
  iStack_74 = 0x7ac624;
  iVar1 = FUN_007b3bb4();
  if (iVar1 == 0) {
    iStack_74 = 0x7ac632;
    uVar2 = FUN_0043f6fe();
    if (0x7fffffff < uVar2) {
      iStack_74 = 0x7ac63e;
      iVar1 = FUN_007a3f46();
      if ((iVar1 == 0) && (*(int *)(extraout_ECX + 0x1e64) == 0)) {
        iStack_74 = 0x7ac653;
        iVar1 = FUN_004bed04();
        if (iVar1 == 0) {
          iStack_74 = 0x7ac68e;
          iVar1 = FUN_0043fb93();
          if (iVar1 == 0) {
            uVar2 = -(uint)(*(int *)(extraout_ECX + 0xd74) != 0) &
                    *(int *)(extraout_ECX + 0xd74) - 0xcU;
            iStack_74 = *(undefined4 *)(uVar2 + 0x124);
            iStack_78 = uVar2 + 0x11c;
            piStack_7c = (int *)0x7ac6d2;
            iVar4 = FUN_0048bb31();
            iVar1 = DAT_00978368;
            if (iVar4 != 0) goto LAB_007ac69e;
            iStack_74 = unaff_EBP + -0x40;
            iStack_78 = 0x7ac6e9;
            iVar4 = FUN_00455c59();
            *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(iVar4 + 4);
            if (*(int *)(unaff_EBP + -0x3c) != 0) {
              iStack_74 = 0;
              iStack_78 = 0x7ac6fd;
              FUN_0045e7c2();
              *(undefined4 *)(unaff_EBP + -0x3c) = 0;
            }
            *(undefined4 *)(unaff_EBP + -0x38) = 1;
            *(int *)(unaff_EBP + -0x34) = iVar1 + 0x3128;
            *(undefined4 *)(unaff_EBP + -4) = 0;
            iStack_74 = 0x7ac718;
            iStack_74 = FUN_004133f0();
            uVar2 = *(uint *)(extraout_ECX + 0x52c);
            iVar4 = *(int *)(extraout_ECX + 0x4b0);
            *(int *)(unaff_EBP + -0x28) = iVar4;
            if ((uVar2 & 0xfffffffe) == 10) {
              iVar4 = (-(uint)(iVar4 != 0) & 0x21) - 1;
              *(int *)(unaff_EBP + -0x14) = iVar4;
            }
            else {
              iStack_78 = 0;
              piStack_7c = (int *)0x0;
              uVar3 = FUN_0044dddc(*(undefined4 *)(extraout_ECX + 0x4a4));
              iVar4 = FUN_00653e6a(*(undefined4 *)(unaff_EBP + -0x28),uVar3);
              *(int *)(unaff_EBP + -0x14) = iVar4;
            }
            if (-1 < iVar4) {
              iStack_74 = *(undefined4 *)(iVar1 + 0x2320);
              iStack_78 = iVar1 + 0x2318;
              *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar1 + 0x2a7c);
              piStack_7c = (int *)0x7ac780;
              iVar1 = FUN_00413367();
              piStack_7c = *(int **)(extraout_ECX + 0x4bc);
              uVar3 = FUN_00413367(extraout_ECX + 0x4b4);
              *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
              iStack_74 = 0x7ac7a2;
              puVar5 = (undefined4 *)FUN_004c2648();
              iStack_74 = *puVar5;
              piStack_7c = (int *)0x0;
              iStack_78 = iVar1;
              uVar3 = FUN_00653336(*(undefined4 *)(unaff_EBP + -0x24));
              *(undefined4 *)(unaff_EBP + -0x2c) = uVar3;
              iStack_74 = FUN_00652c29(*(undefined4 *)(unaff_EBP + -0x20),
                                       *(undefined4 *)(extraout_ECX + 0x4a4),0,0,0,0);
              piStack_7c = (int *)(extraout_ECX + 0x4c0);
              *(int **)(unaff_EBP + -0x30) = &iStack_78;
              iStack_78 = extraout_ECX_00;
              FUN_004059fd();
              piStack_7c = (int *)0x0;
              FUN_007938b4(unaff_EBP + -0x10,0);
              piVar7 = *(int **)(unaff_EBP + -0x10);
              if ((piVar7 == (int *)0x0) || (*piVar7 == 0)) {
                uVar2 = 0;
              }
              else {
                uVar2 = *(uint *)(*piVar7 + -4) >> 1;
              }
              if (uVar2 != 0) {
                iStack_74 = unaff_EBP + -0x60;
                iStack_78 = *(int *)(unaff_EBP + -0x14);
                *(int ***)(unaff_EBP + -0x30) = &piStack_7c;
                piStack_7c = piVar7;
                FUN_004059fd(unaff_EBP + -0x10);
                *(undefined1 *)(unaff_EBP + -4) = 1;
                FUN_0079d484();
                FUN_0041145f();
                piVar7 = (int *)(extraout_ECX + 4);
                *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(extraout_ECX + 0x52c);
                iStack_74 = 0x7ac83f;
                iVar1 = (**(code **)(*piVar7 + 0x10))();
                *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(iVar1 + 4);
                iStack_74 = 0x7ac84c;
                puVar5 = (undefined4 *)(**(code **)(*piVar7 + 0x10))();
                *(undefined4 *)(unaff_EBP + -0x1c) = *puVar5;
                if ((*(byte *)(unaff_EBP + -0x24) & 1) == 0) {
                  *(int *)(unaff_EBP + -0x58) = -*(int *)(unaff_EBP + -0x58);
                  *(int *)(unaff_EBP + -0x60) = -*(int *)(unaff_EBP + -0x60);
                  iStack_74 = unaff_EBP + -0x58;
                  iStack_78 = unaff_EBP + -0x60;
                  piStack_7c = (int *)0x7ac874;
                  FUN_004459fe();
                }
                iStack_74 = *(undefined4 *)(unaff_EBP + -0x20);
                piStack_7c = (int *)(unaff_EBP + -0x60);
                iStack_78 = *(int *)(unaff_EBP + -0x1c);
                (*DAT_0097b54c)();
                puVar5 = (undefined4 *)(**(code **)(*piVar7 + 0x10))();
                *(undefined4 *)(unaff_EBP + -0x30) = *puVar5;
                if (**(int **)(unaff_EBP + 8) == 0) {
                  *(undefined4 *)(unaff_EBP + -0x24) = 0;
                }
                else {
                  *(undefined4 *)(unaff_EBP + -0x24) =
                       *(undefined4 *)(**(int **)(unaff_EBP + 8) + -4);
                }
                *(undefined4 *)(unaff_EBP + -0x20) = 0xffffffff;
                *(undefined4 *)(unaff_EBP + -0x1c) = 0;
                if (0 < *(int *)(unaff_EBP + -0x24)) {
                  *(undefined4 *)(unaff_EBP + -0x18) = 0;
                  do {
                    iStack_74 = **(int **)(unaff_EBP + 8) + *(int *)(unaff_EBP + -0x18);
                    iStack_78 = 0x7ac8c8;
                    iVar1 = (*DAT_0097b5a4)();
                    if (iVar1 == 0) {
                      iStack_74 = **(int **)(unaff_EBP + 8) + *(int *)(unaff_EBP + -0x18);
                      iStack_78 = unaff_EBP + -0x60;
                      piStack_7c = (int *)(unaff_EBP + -0x70);
                      iVar1 = (*DAT_0097b5a0)();
                      if (iVar1 != 0) {
                        if ((*(int *)(unaff_EBP + 0x10) == 0) ||
                           (piVar8 = (int *)(*(int *)(unaff_EBP + -0x18) + **(int **)(unaff_EBP + 8)
                                            ),
                           -1 < (int)(((piVar8[2] + *piVar8) / 2) *
                                      ((-(uint)((*(uint *)(extraout_ECX + 0x52c) & 1) != 0) &
                                       0xfffffffe) + 1) - *(int *)(unaff_EBP + -0x30)))) {
                          *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x1c);
                          break;
                        }
                        *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x1c);
                      }
                    }
                    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
                    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x10;
                  } while (*(int *)(unaff_EBP + -0x1c) < *(int *)(unaff_EBP + -0x24));
                }
                if ((*(int *)(unaff_EBP + 0x10) == 0) || (*(int *)(unaff_EBP + -0x20) != -1)) {
                  iStack_74 = 0x7ac94c;
                  iVar1 = (**(code **)(*piVar7 + 0x10))();
                  *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(iVar1 + 4);
                  iStack_74 = 0x7ac959;
                  piVar8 = (int *)(**(code **)(*piVar7 + 0x10))();
                  iVar1 = *(int *)(extraout_ECX + 0x1efc) - *piVar8;
                  if ((iVar1 < -5) ||
                     (((5 < iVar1 ||
                       (iVar1 = *(int *)(extraout_ECX + 0x1f00) - *(int *)(unaff_EBP + 8),
                       iVar1 < -0x95)) || (0x95 < iVar1)))) {
                    *(int *)(extraout_ECX + 0x1efc) = *piVar8;
                    *(undefined4 *)(extraout_ECX + 0x1f00) = *(undefined4 *)(unaff_EBP + 8);
                    *(undefined4 *)(extraout_ECX + 0x1f04) = 0;
                  }
                  else {
                    if (99 < *(int *)(extraout_ECX + 0x1f04)) goto LAB_007acb32;
                    *(int *)(extraout_ECX + 0x1f04) = *(int *)(extraout_ECX + 0x1f04) + 1;
                  }
                  iStack_74 = 0;
                  iStack_78 = 0;
                  piStack_7c = *(int **)(unaff_EBP + -0x2c);
                  FUN_0078c1bd(*(undefined4 *)(unaff_EBP + -0x14));
                  *(undefined **)(unaff_EBP + 8) =
                       &DAT_00978678 + *(int *)(unaff_EBP + -0x14) * 0x18;
                  iStack_74 = 0x7ac9d5;
                  uVar2 = FUN_0043f6fe();
                  iStack_74 = 0;
                  **(int **)(unaff_EBP + 0xc) =
                       (*(int *)((uint)(uVar2 < 0x80000000) * 0x3f4 + 0x53c + extraout_ECX) *
                       *(int *)(*(int *)(unaff_EBP + 8) + 0x10)) /
                       *(int *)(*(int *)(unaff_EBP + 8) + 0xc);
                  iStack_78 = 0x7aca03;
                  iStack_78 = FUN_007a9209();
                  *(int ***)(unaff_EBP + 8) = &piStack_7c;
                  FUN_004059fd(unaff_EBP + -0x10);
                  uVar3 = *(undefined4 *)(unaff_EBP + -0x14);
                  *(undefined1 *)(unaff_EBP + -4) = 1;
                  uVar9 = FUN_0043f900(uVar3);
                  iVar1 = FUN_007d1e08(uVar9);
                  FUN_0078ceed(iVar1 + **(int **)(unaff_EBP + 0xc),uVar9,uVar3);
                  iStack_74 = 0;
                  iStack_78 = 0;
                  piStack_7c = (int *)0x29;
                  FUN_0060142b();
                  *(undefined1 *)(unaff_EBP + -4) = 4;
                  iStack_74 = 0x7aca4a;
                  iVar1 = FUN_00429303();
                  *(undefined1 *)(unaff_EBP + 8) = *(undefined1 *)(iVar1 + 0xf8);
                  iStack_74 = *(undefined4 *)(unaff_EBP + 8);
                  iStack_78 = 0x7aca5e;
                  FUN_00457cda();
                  iStack_74 = 1;
                  iStack_78 = 0x7aca68;
                  FUN_00457cda();
                  iStack_74 = 0;
                  iStack_78 = 0x7aca71;
                  FUN_00457d37();
                  iStack_74 = 0;
                  iStack_78 = 0x7aca7a;
                  FUN_00457cda();
                  uVar2 = *(uint *)(unaff_EBP + -0x14) & 0xffffff7f;
                  iStack_74 = CONCAT31((int3)(uVar2 >> 8),
                                       (byte)uVar2 |
                                       (char)*(undefined4 *)(extraout_ECX + 0x52c) << 7);
                  iStack_78 = 0x7aca94;
                  FUN_00457cda();
                  iStack_74 = *(undefined4 *)(unaff_EBP + -0x28);
                  iStack_78 = 0x7aca9f;
                  FUN_00457cda();
                  iStack_74 = *(undefined4 *)(unaff_EBP + -0x2c);
                  iStack_78 = 0x7acaaa;
                  FUN_00457cda();
                  iStack_74 = 0x7acaaf;
                  iStack_74 = FUN_007d1e08();
                  iStack_78 = 0x7acab8;
                  FUN_00457d37();
                  iStack_74 = 0x7acabf;
                  puVar6 = (undefined2 *)(**(code **)(*piVar7 + 0x10))();
                  iStack_74 = CONCAT22((short)((uint)puVar6 >> 0x10),*puVar6);
                  iStack_78 = 0x7acacb;
                  FUN_0045d247();
                  iStack_74 = 0x7acad2;
                  iVar1 = (**(code **)(*piVar7 + 0x10))();
                  iStack_74 = CONCAT22((short)((uint)iVar1 >> 0x10),*(undefined2 *)(iVar1 + 4));
                  iStack_78 = 0x7acadf;
                  FUN_0045d247();
                  iStack_74 = unaff_EBP + -0x50;
                  iStack_78 = 0x7acaee;
                  FUN_004751b2();
                  iStack_74 = 0x7acaf5;
                  FUN_007b4235();
                  *(undefined4 *)(unaff_EBP + -0x38) = 0;
                  *(undefined1 *)(unaff_EBP + -4) = 1;
                  iStack_74 = 0x7acb04;
                  FUN_0045ebca();
                  if (*(int *)(unaff_EBP + -0x10) != 0) {
                    iStack_74 = 0x7acb10;
                    FUN_004030b1();
                  }
                  uVar3 = *(undefined4 *)(unaff_EBP + -0x20);
                  goto LAB_007ac6a1;
                }
LAB_007acb32:
                piVar7 = *(int **)(unaff_EBP + -0x10);
              }
              if (piVar7 != (int *)0x0) {
                iStack_74 = 0x7acb3e;
                FUN_004030b1();
                *(undefined4 *)(unaff_EBP + -0x10) = 0;
              }
            }
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            iStack_74 = 0x7acb4d;
            FUN_007a934b();
            goto LAB_007ac69e;
          }
          iStack_74 = 0x4dd5cf;
        }
        else {
          iStack_74 = 0x7fffffff;
          iStack_78 = 0;
          piStack_7c = (int *)0x6;
          uVar9 = 1;
          uVar3 = FUN_0064d61f(0x3d0ceb);
          FUN_00790b31(uVar3,uVar9);
          iStack_74 = 0x1e;
          iStack_78 = 0x3d0ceb;
          piStack_7c = (int *)0x7ac682;
          FUN_007d3e08();
          iStack_74 = 0x3d0ceb;
        }
        iStack_78 = 0x7ac69e;
        FUN_007bd2b0();
      }
    }
  }
LAB_007ac69e:
  uVar3 = 0xffffffff;
LAB_007ac6a1:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


