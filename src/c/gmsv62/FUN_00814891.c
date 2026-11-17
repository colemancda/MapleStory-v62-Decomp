/* FUN_00814891 - 0x00814891 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00814891(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar9;
  undefined4 uVar10;
  
  FUN_00879bb8();
  bVar9 = DAT_00978360 == 0;
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  if (bVar9) goto LAB_00815dcf;
  FUN_00817e25(unaff_EBP + -0x60,0);
  piVar1 = (int *)(extraout_ECX + 4);
  iVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))();
  iVar3 = *piVar1;
  *(int *)(unaff_EBP + -0x8c) = *(int *)(unaff_EBP + -0x60) - iVar2;
  iVar2 = (**(code **)(iVar3 + 0x30))();
  iVar3 = *(int *)(extraout_ECX + 0x40);
  *(int *)(unaff_EBP + -0x88) = *(int *)(unaff_EBP + -0x5c) - iVar2;
  if ((iVar3 == -1) && (*(int *)(extraout_ECX + 0x44) == -1)) {
    iVar3 = (**(code **)(*piVar1 + 0x2c))();
    *(int *)(extraout_ECX + 0x40) = *(int *)(unaff_EBP + -0x60) - iVar3;
    iVar3 = (**(code **)(*piVar1 + 0x30))();
    *(int *)(extraout_ECX + 0x44) = *(int *)(unaff_EBP + -0x5c) - iVar3;
  }
  piVar4 = (int *)FUN_004489f5(unaff_EBP + -0x24);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*piVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  *(int *)(unaff_EBP + -0x34) = *piVar4;
  piVar4 = (int *)FUN_004489f5(unaff_EBP + -0x28);
  iVar3 = *piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar3 == 0) {
    FUN_00878dfb(0x80004003);
  }
  *(int *)(unaff_EBP + -0x18) = *piVar4;
  iVar3 = (**(code **)(*piVar1 + 0x30))();
  iVar2 = FUN_0042fb0a();
  iVar3 = (**(code **)(*piVar1 + 0x2c))(iVar3 + iVar2);
  iVar2 = FUN_0042fb0a();
  uVar5 = (**(code **)(*piVar1 + 0x30))(iVar3 + iVar2);
  uVar5 = (**(code **)(*piVar1 + 0x2c))(uVar5);
  (*DAT_0097b504)(unaff_EBP + -0x1c8,uVar5);
  FUN_00412600();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00412600();
  piVar4 = DAT_0097c274;
  iVar3 = extraout_ECX;
  if (DAT_0097c274 != (int *)0x0) {
    do {
      piVar7 = (int *)*piVar4;
      iVar3 = *(int *)((-(uint)(piVar4 != (int *)0x0) & (uint)(piVar4 + -4)) + 4);
      *(uint *)(unaff_EBP + -0x34) = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
      *(int **)(unaff_EBP + -0x24) = piVar7;
      if ((((piVar7 != (int *)0x0) && (piVar7 != *(int **)(unaff_EBP + -0x1c))) &&
          (iVar3 = (**(code **)(**(int **)(unaff_EBP + -0x1c) + 0x30))
                             (*(undefined4 *)(unaff_EBP + -0x24)), iVar3 == 0)) &&
         ((DAT_00978360 != *(int *)(unaff_EBP + -0x24) &&
          (((DAT_0097919c == 0 || (DAT_0097919c != *(int *)(unaff_EBP + -0x1c))) ||
           ((DAT_00979198 == 0 || (DAT_00979198 != *(int *)(unaff_EBP + -0x24))))))))) {
        iVar3 = *(int *)(unaff_EBP + -0x24);
        piVar4 = (int *)FUN_004489f5(unaff_EBP + -0xf4);
        iVar2 = *piVar4;
        *(undefined4 *)(unaff_EBP + -4) = 2;
        if (iVar2 == 0) {
          FUN_00878dfb(0x80004003);
        }
        *(int *)(unaff_EBP + -0x18) = *piVar4;
        piVar4 = (int *)FUN_004489f5(unaff_EBP + -0x70);
        iVar2 = *piVar4;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (iVar2 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar7 = (int *)(iVar3 + 4);
        *(int *)(unaff_EBP + -0x20) = *piVar4;
        iVar3 = *piVar7;
        *(int **)(unaff_EBP + -0x28) = piVar7;
        iVar3 = (**(code **)(iVar3 + 0x30))();
        iVar2 = FUN_0042fb34();
        iVar3 = (**(code **)(*piVar7 + 0x2c))(iVar3 + 10 + iVar2);
        iVar2 = FUN_0042fb0a();
        iVar3 = (**(code **)(*piVar7 + 0x30))(iVar3 + 10 + iVar2);
        iVar3 = (**(code **)(*piVar7 + 0x2c))(iVar3 + -10);
        (*DAT_0097b504)(unaff_EBP + -0xa0,iVar3 + -10);
        FUN_00412600();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00412600();
        iVar3 = (*DAT_0097b5a0)(unaff_EBP + -0x218,unaff_EBP + -0x1c8,unaff_EBP + -0xa0);
        if (iVar3 != 0) {
          piVar4 = (int *)FUN_004489f5(unaff_EBP + -0xdc);
          iVar3 = *piVar4;
          *(undefined4 *)(unaff_EBP + -4) = 4;
          if (iVar3 == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar7 = *(int **)(unaff_EBP + -0x28);
          *(int *)(unaff_EBP + -0x20) = *piVar4;
          iVar3 = (**(code **)(*piVar7 + 0x2c))();
          iVar2 = (**(code **)(*piVar1 + 0x2c))();
          *(int *)(unaff_EBP + -0x20) = iVar2 - iVar3;
          iVar3 = FUN_0042fb0a();
          iVar3 = FUN_0087a90a(*(int *)(unaff_EBP + -0x20) - iVar3);
          *(bool *)(unaff_EBP + -0xd) = iVar3 < 0xb;
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_00412600();
          if (*(char *)(unaff_EBP + -0xd) == '\0') {
            piVar4 = (int *)FUN_004489f5(unaff_EBP + -0xac);
            iVar3 = *piVar4;
            *(undefined4 *)(unaff_EBP + -4) = 10;
            if (iVar3 == 0) {
              FUN_00878dfb(0x80004003);
            }
            iVar3 = (**(code **)(*piVar7 + 0x2c))();
            iVar2 = (**(code **)(*piVar1 + 0x2c))();
            *(int *)(unaff_EBP + -0x14) = iVar2 - iVar3;
            iVar3 = FUN_0042fb0a();
            iVar3 = FUN_0087a90a(*(int *)(unaff_EBP + -0x14) + iVar3);
            *(bool *)(unaff_EBP + -0xd) = iVar3 < 0xb;
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            FUN_00412600();
            if (*(char *)(unaff_EBP + -0xd) != '\0') {
              FUN_00403191(&DAT_00980690);
              *(undefined4 *)(unaff_EBP + -4) = 0xb;
              FUN_00403191(&DAT_00980690);
              *(undefined1 *)(unaff_EBP + -4) = 0xc;
              piVar4 = (int *)FUN_004489f5(unaff_EBP + -0x74);
              iVar3 = *piVar4;
              *(undefined1 *)(unaff_EBP + -4) = 0xd;
              if (iVar3 == 0) {
                FUN_00878dfb(0x80004003);
              }
              *(int *)(unaff_EBP + -0x14) = *piVar4;
              piVar4 = (int *)FUN_004489f5(unaff_EBP + -0xc0);
              iVar3 = *piVar4;
              *(undefined1 *)(unaff_EBP + -4) = 0xe;
              if (iVar3 == 0) {
                FUN_00878dfb(0x80004003);
              }
              piVar4 = (int *)FUN_0042fb5e(unaff_EBP + -0x6c);
              iVar3 = *piVar4;
              *(undefined1 *)(unaff_EBP + -4) = 0xf;
              if (iVar3 == 0) {
                FUN_00878dfb(0x80004003);
              }
              piVar4 = (int *)*piVar4;
              iVar3 = *piVar1;
              *(int **)(unaff_EBP + -0x18) = piVar4;
              uVar5 = (**(code **)(iVar3 + 0x30))();
              *(undefined4 *)(unaff_EBP + -0x20) = uVar5;
              iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x28) + 0x2c))();
              iVar6 = FUN_0042fb0a();
              iVar3 = *piVar4;
              *(int *)(unaff_EBP + -0x14) = iVar2 - iVar6;
              iVar3 = (**(code **)(iVar3 + 0x90))
                                (*(undefined4 *)(unaff_EBP + -0x18),
                                 *(undefined4 *)(unaff_EBP + -0x14),
                                 *(undefined4 *)(unaff_EBP + -0x20),
                                 *(undefined4 *)(unaff_EBP + -0x1b8),
                                 *(undefined4 *)(unaff_EBP + -0x1b4),
                                 *(undefined4 *)(unaff_EBP + -0x1b0),
                                 *(undefined4 *)(unaff_EBP + -0x1ac),
                                 *(undefined4 *)(unaff_EBP + -0x128),
                                 *(undefined4 *)(unaff_EBP + -0x124),
                                 *(undefined4 *)(unaff_EBP + -0x120),
                                 *(undefined4 *)(unaff_EBP + -0x11c));
              if (iVar3 < 0) {
                FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
              }
              FUN_004125d9();
              FUN_00412600();
              FUN_00412600();
              *(undefined1 *)(unaff_EBP + -4) = 0xb;
              iVar3 = FUN_00402bc3(unaff_EBP + -0x1b8);
              if (iVar3 < 0) {
                FUN_00878dfb(iVar3);
              }
              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
              iVar3 = unaff_EBP + -0x128;
              goto LAB_00814e8e;
            }
          }
          else {
            FUN_00403191(&DAT_00980690);
            *(undefined4 *)(unaff_EBP + -4) = 5;
            FUN_00403191(&DAT_00980690);
            *(undefined1 *)(unaff_EBP + -4) = 6;
            piVar4 = (int *)FUN_004489f5(unaff_EBP + -0xf8);
            iVar3 = *piVar4;
            *(undefined1 *)(unaff_EBP + -4) = 7;
            if (iVar3 == 0) {
              FUN_00878dfb(0x80004003);
            }
            *(int *)(unaff_EBP + -0x20) = *piVar4;
            piVar4 = (int *)FUN_004489f5(unaff_EBP + -0x80);
            iVar3 = *piVar4;
            *(undefined1 *)(unaff_EBP + -4) = 8;
            if (iVar3 == 0) {
              FUN_00878dfb(0x80004003);
            }
            piVar4 = (int *)FUN_0042fb5e(unaff_EBP + -0x78);
            iVar3 = *piVar4;
            *(undefined1 *)(unaff_EBP + -4) = 9;
            if (iVar3 == 0) {
              FUN_00878dfb(0x80004003);
            }
            piVar4 = (int *)*piVar4;
            iVar3 = *piVar1;
            *(int **)(unaff_EBP + -0x18) = piVar4;
            uVar5 = (**(code **)(iVar3 + 0x30))();
            *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
            iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x28) + 0x2c))();
            iVar6 = FUN_0042fb0a();
            iVar3 = *piVar4;
            *(int *)(unaff_EBP + -0x20) = iVar2 + iVar6;
            iVar3 = (**(code **)(iVar3 + 0x90))
                              (*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x20)
                               ,*(undefined4 *)(unaff_EBP + -0x14),
                               *(undefined4 *)(unaff_EBP + -0x108),
                               *(undefined4 *)(unaff_EBP + -0x104),
                               *(undefined4 *)(unaff_EBP + -0x100),
                               *(undefined4 *)(unaff_EBP + -0xfc),
                               *(undefined4 *)(unaff_EBP + -0x198),
                               *(undefined4 *)(unaff_EBP + -0x194),*(undefined4 *)(unaff_EBP + -400)
                               ,*(undefined4 *)(unaff_EBP + -0x18c));
            if (iVar3 < 0) {
              FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
            }
            FUN_004125d9();
            FUN_00412600();
            FUN_00412600();
            *(undefined1 *)(unaff_EBP + -4) = 5;
            iVar3 = FUN_00402bc3(unaff_EBP + -0x108);
            if (iVar3 < 0) {
              FUN_00878dfb(iVar3);
            }
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            iVar3 = unaff_EBP + -0x198;
LAB_00814e8e:
            iVar3 = FUN_00402bc3(iVar3);
            if (iVar3 < 0) {
              FUN_00878dfb(iVar3);
            }
          }
          piVar4 = (int *)FUN_004489f5(unaff_EBP + -200);
          iVar3 = *piVar4;
          *(undefined4 *)(unaff_EBP + -4) = 0x10;
          if (iVar3 == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar7 = *(int **)(unaff_EBP + -0x28);
          *(int *)(unaff_EBP + -0x14) = *piVar4;
          iVar3 = (**(code **)(*piVar7 + 0x30))();
          iVar2 = (**(code **)(*piVar1 + 0x30))();
          *(int *)(unaff_EBP + -0x14) = iVar2 - iVar3;
          iVar3 = FUN_0042fb34();
          iVar3 = FUN_0087a90a(*(int *)(unaff_EBP + -0x14) - iVar3);
          *(bool *)(unaff_EBP + -0xd) = iVar3 < 0xb;
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_00412600();
          if (*(char *)(unaff_EBP + -0xd) == '\0') {
            piVar4 = (int *)FUN_004489f5(unaff_EBP + -0xd8);
            iVar3 = *piVar4;
            *(undefined4 *)(unaff_EBP + -4) = 0x16;
            if (iVar3 == 0) {
              FUN_00878dfb(0x80004003);
            }
            iVar3 = (**(code **)(*piVar7 + 0x30))();
            iVar2 = (**(code **)(*piVar1 + 0x30))();
            *(int *)(unaff_EBP + -0x14) = iVar2 - iVar3;
            iVar3 = FUN_0042fb34();
            iVar3 = FUN_0087a90a(*(int *)(unaff_EBP + -0x14) + iVar3);
            *(bool *)(unaff_EBP + -0xd) = iVar3 < 0xb;
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            FUN_00412600();
            if (*(char *)(unaff_EBP + -0xd) != '\0') {
              FUN_00403191(&DAT_00980690);
              *(undefined4 *)(unaff_EBP + -4) = 0x17;
              FUN_00403191(&DAT_00980690);
              *(undefined1 *)(unaff_EBP + -4) = 0x18;
              piVar4 = (int *)FUN_004489f5(unaff_EBP + -0xa4);
              iVar3 = *piVar4;
              *(undefined1 *)(unaff_EBP + -4) = 0x19;
              if (iVar3 == 0) {
                FUN_00878dfb(0x80004003);
              }
              *(int *)(unaff_EBP + -0x14) = *piVar4;
              piVar4 = (int *)FUN_004489f5(unaff_EBP + -0xe0);
              iVar3 = *piVar4;
              *(undefined1 *)(unaff_EBP + -4) = 0x1a;
              if (iVar3 == 0) {
                FUN_00878dfb(0x80004003);
              }
              piVar4 = (int *)FUN_0042fb5e(unaff_EBP + -0x90);
              iVar3 = *piVar4;
              *(undefined1 *)(unaff_EBP + -4) = 0x1b;
              if (iVar3 == 0) {
                FUN_00878dfb(0x80004003);
              }
              piVar4 = (int *)*piVar4;
              iVar3 = **(int **)(unaff_EBP + -0x28);
              *(int **)(unaff_EBP + -0x18) = piVar4;
              iVar2 = (**(code **)(iVar3 + 0x30))();
              iVar6 = FUN_0042fb34();
              iVar3 = *piVar1;
              *(int *)(unaff_EBP + -0x14) = iVar2 - iVar6;
              uVar5 = (**(code **)(iVar3 + 0x2c))();
              iVar3 = (**(code **)(*piVar4 + 0x90))
                                (*(undefined4 *)(unaff_EBP + -0x18),uVar5,
                                 *(undefined4 *)(unaff_EBP + -0x14),
                                 *(undefined4 *)(unaff_EBP + -0x1e8),
                                 *(undefined4 *)(unaff_EBP + -0x1e4),
                                 *(undefined4 *)(unaff_EBP + -0x1e0),
                                 *(undefined4 *)(unaff_EBP + -0x1dc),
                                 *(undefined4 *)(unaff_EBP + -0x168),
                                 *(undefined4 *)(unaff_EBP + -0x164),
                                 *(undefined4 *)(unaff_EBP + -0x160),
                                 *(undefined4 *)(unaff_EBP + -0x15c));
              if (iVar3 < 0) {
                FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
              }
              FUN_004125d9();
              FUN_00412600();
              FUN_00412600();
              *(undefined1 *)(unaff_EBP + -4) = 0x17;
              iVar3 = FUN_00402bc3(unaff_EBP + -0x1e8);
              if (iVar3 < 0) {
                FUN_00878dfb(iVar3);
              }
              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
              iVar3 = unaff_EBP + -0x168;
              goto LAB_00815209;
            }
          }
          else {
            FUN_00403191(&DAT_00980690);
            *(undefined4 *)(unaff_EBP + -4) = 0x11;
            FUN_00403191(&DAT_00980690);
            *(undefined1 *)(unaff_EBP + -4) = 0x12;
            piVar4 = (int *)FUN_004489f5(unaff_EBP + -0x84);
            iVar3 = *piVar4;
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            if (iVar3 == 0) {
              FUN_00878dfb(0x80004003);
            }
            *(int *)(unaff_EBP + -0x14) = *piVar4;
            piVar4 = (int *)FUN_004489f5(unaff_EBP + -0xd0);
            iVar3 = *piVar4;
            *(undefined1 *)(unaff_EBP + -4) = 0x14;
            if (iVar3 == 0) {
              FUN_00878dfb(0x80004003);
            }
            piVar4 = (int *)FUN_0042fb5e(unaff_EBP + -0x7c);
            iVar3 = *piVar4;
            *(undefined1 *)(unaff_EBP + -4) = 0x15;
            if (iVar3 == 0) {
              FUN_00878dfb(0x80004003);
            }
            piVar4 = (int *)*piVar4;
            iVar3 = **(int **)(unaff_EBP + -0x28);
            *(int **)(unaff_EBP + -0x18) = piVar4;
            iVar2 = (**(code **)(iVar3 + 0x30))();
            iVar6 = FUN_0042fb34();
            iVar3 = *piVar1;
            *(int *)(unaff_EBP + -0x14) = iVar2 + iVar6;
            uVar5 = (**(code **)(iVar3 + 0x2c))();
            iVar3 = (**(code **)(*piVar4 + 0x90))
                              (*(undefined4 *)(unaff_EBP + -0x18),uVar5,
                               *(undefined4 *)(unaff_EBP + -0x14),
                               *(undefined4 *)(unaff_EBP + -0x1a8),
                               *(undefined4 *)(unaff_EBP + -0x1a4),
                               *(undefined4 *)(unaff_EBP + -0x1a0),
                               *(undefined4 *)(unaff_EBP + -0x19c),
                               *(undefined4 *)(unaff_EBP + -0x148),
                               *(undefined4 *)(unaff_EBP + -0x144),
                               *(undefined4 *)(unaff_EBP + -0x140),
                               *(undefined4 *)(unaff_EBP + -0x13c));
            if (iVar3 < 0) {
              FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
            }
            FUN_004125d9();
            FUN_00412600();
            FUN_00412600();
            *(undefined1 *)(unaff_EBP + -4) = 0x11;
            iVar3 = FUN_00402bc3(unaff_EBP + -0x1a8);
            if (iVar3 < 0) {
              FUN_00878dfb(iVar3);
            }
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            iVar3 = unaff_EBP + -0x148;
LAB_00815209:
            iVar3 = FUN_00402bc3(iVar3);
            if (iVar3 < 0) {
              FUN_00878dfb(iVar3);
            }
          }
          (*DAT_0097b504)(unaff_EBP + -0xa0,*(int *)(unaff_EBP + -0xa0) + 0xf,
                          *(int *)(unaff_EBP + -0x9c) + 0xf,*(int *)(unaff_EBP + -0x98) + -0xf,
                          *(int *)(unaff_EBP + -0x94) + -0xf);
          iVar3 = (*DAT_0097b5a0)(unaff_EBP + -0x218,unaff_EBP + -0x1c8,unaff_EBP + -0xa0);
          if (iVar3 == 0) {
            piVar4 = *(int **)(unaff_EBP + -0x28);
            iVar3 = (**(code **)(*piVar4 + 0x2c))();
            iVar2 = (**(code **)(*piVar1 + 0x2c))();
            iVar3 = FUN_0087a90a(iVar2 - iVar3);
            if (iVar3 < 0xb) {
              FUN_00403191(&DAT_00980690);
              *(undefined4 *)(unaff_EBP + -4) = 0x1c;
              FUN_00403191(&DAT_00980690);
              *(undefined1 *)(unaff_EBP + -4) = 0x1d;
              piVar4 = (int *)FUN_004489f5(unaff_EBP + -0xf0);
              iVar3 = *piVar4;
              *(undefined1 *)(unaff_EBP + -4) = 0x1e;
              if (iVar3 == 0) {
                FUN_00878dfb(0x80004003);
              }
              piVar4 = (int *)FUN_0042fb5e(unaff_EBP + -0xe8);
              iVar3 = *piVar4;
              *(undefined1 *)(unaff_EBP + -4) = 0x1f;
              if (iVar3 == 0) {
                FUN_00878dfb(0x80004003);
              }
              piVar4 = (int *)*piVar4;
              iVar3 = *piVar1;
              *(int **)(unaff_EBP + -0x18) = piVar4;
              uVar5 = (**(code **)(iVar3 + 0x30))();
              *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
              uVar5 = (**(code **)(**(int **)(unaff_EBP + -0x28) + 0x2c))();
              iVar3 = (**(code **)(*piVar4 + 0x90))
                                (*(undefined4 *)(unaff_EBP + -0x18),uVar5,
                                 *(undefined4 *)(unaff_EBP + -0x14),
                                 *(undefined4 *)(unaff_EBP + -0x188),
                                 *(undefined4 *)(unaff_EBP + -0x184),
                                 *(undefined4 *)(unaff_EBP + -0x180),
                                 *(undefined4 *)(unaff_EBP + -0x17c),
                                 *(undefined4 *)(unaff_EBP + -0x208),
                                 *(undefined4 *)(unaff_EBP + -0x204),
                                 *(undefined4 *)(unaff_EBP + -0x200),
                                 *(undefined4 *)(unaff_EBP + -0x1fc));
              if (iVar3 < 0) {
                FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
              }
              FUN_004125d9();
              FUN_00412600();
              *(undefined1 *)(unaff_EBP + -4) = 0x1c;
              iVar3 = FUN_00402bc3(unaff_EBP + -0x188);
              if (iVar3 < 0) {
                FUN_00878dfb(iVar3);
              }
              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
              iVar3 = unaff_EBP + -0x208;
LAB_008155c4:
              iVar3 = FUN_00402bc3(iVar3);
              if (iVar3 < 0) {
                FUN_00878dfb(iVar3);
              }
            }
            else {
              piVar7 = (int *)FUN_004489f5(unaff_EBP + -0xb4);
              iVar3 = *piVar7;
              *(undefined4 *)(unaff_EBP + -4) = 0x20;
              if (iVar3 == 0) {
                FUN_00878dfb(0x80004003);
              }
              *(int *)(unaff_EBP + -0x20) = *piVar7;
              piVar7 = (int *)FUN_004489f5(unaff_EBP + -0xd4);
              iVar3 = *piVar7;
              *(undefined1 *)(unaff_EBP + -4) = 0x21;
              if (iVar3 == 0) {
                FUN_00878dfb(0x80004003);
              }
              iVar3 = (**(code **)(*piVar4 + 0x2c))();
              iVar2 = (**(code **)(*piVar1 + 0x2c))();
              iVar6 = FUN_0042fb0a();
              iVar8 = FUN_0042fb0a();
              iVar3 = FUN_0087a90a(((iVar2 - iVar3) - iVar6) + iVar8);
              *(bool *)(unaff_EBP + -0xd) = iVar3 < 0xb;
              FUN_00412600();
              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
              FUN_00412600();
              if (*(char *)(unaff_EBP + -0xd) != '\0') {
                FUN_00403191(&DAT_00980690);
                *(undefined4 *)(unaff_EBP + -4) = 0x22;
                FUN_00403191(&DAT_00980690);
                *(undefined1 *)(unaff_EBP + -4) = 0x23;
                piVar4 = (int *)FUN_004489f5(unaff_EBP + -0xec);
                iVar3 = *piVar4;
                *(undefined1 *)(unaff_EBP + -4) = 0x24;
                if (iVar3 == 0) {
                  FUN_00878dfb(0x80004003);
                }
                *(int *)(unaff_EBP + -0x20) = *piVar4;
                piVar4 = (int *)FUN_004489f5(unaff_EBP + -0xc4);
                iVar3 = *piVar4;
                *(undefined1 *)(unaff_EBP + -4) = 0x25;
                if (iVar3 == 0) {
                  FUN_00878dfb(0x80004003);
                }
                *(int *)(unaff_EBP + -0x14) = *piVar4;
                piVar4 = (int *)FUN_004489f5(unaff_EBP + -100);
                iVar3 = *piVar4;
                *(undefined1 *)(unaff_EBP + -4) = 0x26;
                if (iVar3 == 0) {
                  FUN_00878dfb(0x80004003);
                }
                piVar4 = (int *)FUN_0042fb5e(unaff_EBP + -0xbc);
                iVar3 = *piVar4;
                *(undefined1 *)(unaff_EBP + -4) = 0x27;
                if (iVar3 == 0) {
                  FUN_00878dfb(0x80004003);
                }
                piVar4 = (int *)*piVar4;
                iVar3 = *piVar1;
                *(int **)(unaff_EBP + -0x18) = piVar4;
                uVar5 = (**(code **)(iVar3 + 0x30))();
                *(undefined4 *)(unaff_EBP + -0x30) = uVar5;
                iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x28) + 0x2c))();
                iVar6 = FUN_0042fb0a();
                iVar8 = FUN_0042fb0a();
                iVar3 = *piVar4;
                *(int *)(unaff_EBP + -0x14) = (iVar2 - iVar6) + iVar8;
                iVar3 = (**(code **)(iVar3 + 0x90))
                                  (*(undefined4 *)(unaff_EBP + -0x18),
                                   *(undefined4 *)(unaff_EBP + -0x14),
                                   *(undefined4 *)(unaff_EBP + -0x30),
                                   *(undefined4 *)(unaff_EBP + -0x118),
                                   *(undefined4 *)(unaff_EBP + -0x114),
                                   *(undefined4 *)(unaff_EBP + -0x110),
                                   *(undefined4 *)(unaff_EBP + -0x10c),
                                   *(undefined4 *)(unaff_EBP + -0x138),
                                   *(undefined4 *)(unaff_EBP + -0x134),
                                   *(undefined4 *)(unaff_EBP + -0x130),
                                   *(undefined4 *)(unaff_EBP + -300));
                if (iVar3 < 0) {
                  FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
                }
                FUN_004125d9();
                FUN_00412600();
                FUN_00412600();
                FUN_00412600();
                *(undefined1 *)(unaff_EBP + -4) = 0x22;
                iVar3 = FUN_00402bc3(unaff_EBP + -0x118);
                if (iVar3 < 0) {
                  FUN_00878dfb(iVar3);
                }
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                iVar3 = unaff_EBP + -0x138;
                goto LAB_008155c4;
              }
            }
            piVar4 = *(int **)(unaff_EBP + -0x28);
            iVar3 = (**(code **)(*piVar4 + 0x30))();
            iVar2 = (**(code **)(*piVar1 + 0x30))();
            iVar3 = FUN_0087a90a(iVar2 - iVar3);
            if (iVar3 < 0xb) {
              FUN_00403191(&DAT_00980690);
              *(undefined4 *)(unaff_EBP + -4) = 0x28;
              FUN_00403191(&DAT_00980690);
              *(undefined1 *)(unaff_EBP + -4) = 0x29;
              piVar4 = (int *)FUN_004489f5(unaff_EBP + -0xe4);
              iVar3 = *piVar4;
              *(undefined1 *)(unaff_EBP + -4) = 0x2a;
              if (iVar3 == 0) {
                FUN_00878dfb(0x80004003);
              }
              piVar4 = (int *)FUN_0042fb5e(unaff_EBP + -0xcc);
              iVar3 = *piVar4;
              *(undefined1 *)(unaff_EBP + -4) = 0x2b;
              if (iVar3 == 0) {
                FUN_00878dfb(0x80004003);
              }
              piVar4 = (int *)*piVar4;
              iVar3 = **(int **)(unaff_EBP + -0x28);
              *(int **)(unaff_EBP + -0x18) = piVar4;
              uVar5 = (**(code **)(iVar3 + 0x30))();
              *(undefined4 *)(unaff_EBP + -0x30) = uVar5;
              uVar5 = (**(code **)(*piVar1 + 0x2c))();
              iVar3 = (**(code **)(*piVar4 + 0x90))
                                (*(undefined4 *)(unaff_EBP + -0x18),uVar5,
                                 *(undefined4 *)(unaff_EBP + -0x30),
                                 *(undefined4 *)(unaff_EBP + -0x158),
                                 *(undefined4 *)(unaff_EBP + -0x154),
                                 *(undefined4 *)(unaff_EBP + -0x150),
                                 *(undefined4 *)(unaff_EBP + -0x14c),
                                 *(undefined4 *)(unaff_EBP + -0x178),
                                 *(undefined4 *)(unaff_EBP + -0x174),
                                 *(undefined4 *)(unaff_EBP + -0x170),
                                 *(undefined4 *)(unaff_EBP + -0x16c));
              if (iVar3 < 0) {
                FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
              }
              FUN_004125d9();
              FUN_00412600();
              *(undefined1 *)(unaff_EBP + -4) = 0x28;
              iVar3 = FUN_00402bc3(unaff_EBP + -0x158);
              if (iVar3 < 0) {
                FUN_00878dfb(iVar3);
              }
              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
              iVar3 = unaff_EBP + -0x178;
            }
            else {
              piVar7 = (int *)FUN_004489f5(unaff_EBP + -0xb0);
              iVar3 = *piVar7;
              *(undefined4 *)(unaff_EBP + -4) = 0x2c;
              if (iVar3 == 0) {
                FUN_00878dfb(0x80004003);
              }
              *(int *)(unaff_EBP + -0x14) = *piVar7;
              piVar7 = (int *)FUN_004489f5(unaff_EBP + -0xa8);
              iVar3 = *piVar7;
              *(undefined1 *)(unaff_EBP + -4) = 0x2d;
              if (iVar3 == 0) {
                FUN_00878dfb(0x80004003);
              }
              iVar3 = (**(code **)(*piVar4 + 0x30))();
              iVar2 = (**(code **)(*piVar1 + 0x30))();
              iVar6 = FUN_0042fb34();
              iVar8 = FUN_0042fb34();
              iVar3 = FUN_0087a90a(((iVar2 - iVar3) - iVar6) + iVar8);
              *(bool *)(unaff_EBP + -0xd) = iVar3 < 0xb;
              FUN_00412600();
              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
              FUN_00412600();
              if (*(char *)(unaff_EBP + -0xd) == '\0') goto LAB_00815915;
              FUN_00403191(&DAT_00980690);
              *(undefined4 *)(unaff_EBP + -4) = 0x2e;
              FUN_00403191(&DAT_00980690);
              *(undefined1 *)(unaff_EBP + -4) = 0x2f;
              piVar4 = (int *)FUN_004489f5(unaff_EBP + -0x2c);
              iVar3 = *piVar4;
              *(undefined1 *)(unaff_EBP + -4) = 0x30;
              if (iVar3 == 0) {
                FUN_00878dfb(0x80004003);
              }
              *(int *)(unaff_EBP + -0x14) = *piVar4;
              piVar4 = (int *)FUN_004489f5(unaff_EBP + -0x38);
              iVar3 = *piVar4;
              *(undefined1 *)(unaff_EBP + -4) = 0x31;
              if (iVar3 == 0) {
                FUN_00878dfb(0x80004003);
              }
              *(int *)(unaff_EBP + -0x30) = *piVar4;
              piVar4 = (int *)FUN_004489f5(unaff_EBP + -0x68);
              iVar3 = *piVar4;
              *(undefined1 *)(unaff_EBP + -4) = 0x32;
              if (iVar3 == 0) {
                FUN_00878dfb(0x80004003);
              }
              piVar4 = (int *)FUN_0042fb5e(unaff_EBP + -0xb8);
              iVar3 = *piVar4;
              *(undefined1 *)(unaff_EBP + -4) = 0x33;
              if (iVar3 == 0) {
                FUN_00878dfb(0x80004003);
              }
              piVar4 = (int *)*piVar4;
              iVar3 = **(int **)(unaff_EBP + -0x28);
              *(int **)(unaff_EBP + -0x18) = piVar4;
              iVar2 = (**(code **)(iVar3 + 0x30))();
              iVar6 = FUN_0042fb34();
              iVar8 = FUN_0042fb34();
              iVar3 = *piVar1;
              *(int *)(unaff_EBP + -0x30) = (iVar2 - iVar6) + iVar8;
              uVar5 = (**(code **)(iVar3 + 0x2c))();
              iVar3 = (**(code **)(*piVar4 + 0x90))
                                (*(undefined4 *)(unaff_EBP + -0x18),uVar5,
                                 *(undefined4 *)(unaff_EBP + -0x30),
                                 *(undefined4 *)(unaff_EBP + -0x58),
                                 *(undefined4 *)(unaff_EBP + -0x54),
                                 *(undefined4 *)(unaff_EBP + -0x50),
                                 *(undefined4 *)(unaff_EBP + -0x4c),
                                 *(undefined4 *)(unaff_EBP + -0x48),
                                 *(undefined4 *)(unaff_EBP + -0x44),
                                 *(undefined4 *)(unaff_EBP + -0x40),
                                 *(undefined4 *)(unaff_EBP + -0x3c));
              if (iVar3 < 0) {
                FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
              }
              FUN_004125d9();
              FUN_00412600();
              FUN_00412600();
              FUN_00412600();
              *(undefined1 *)(unaff_EBP + -4) = 0x2e;
              iVar3 = FUN_00402bc3(unaff_EBP + -0x58);
              if (iVar3 < 0) {
                FUN_00878dfb(iVar3);
              }
              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
              iVar3 = unaff_EBP + -0x48;
            }
            iVar3 = FUN_00402bc3(iVar3);
            if (iVar3 < 0) {
              FUN_00878dfb(iVar3);
            }
          }
        }
      }
LAB_00815915:
      if (*(int *)(unaff_EBP + -0x34) == 0) goto code_r0x0081591f;
      piVar4 = *(int **)(unaff_EBP + -0x34);
    } while( true );
  }
  goto LAB_00815927;
code_r0x0081591f:
  iVar3 = *(int *)(unaff_EBP + -0x1c);
LAB_00815927:
  uVar5 = (**(code **)(*piVar1 + 0x2c))();
  iVar2 = FUN_0087a90a(uVar5);
  if (iVar2 < 0xb) {
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 0x34;
    FUN_00403191(&DAT_00980690);
    iVar3 = *(int *)(iVar3 + 0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar4 = (int *)FUN_0042fb5e(unaff_EBP + -0x2c);
    iVar3 = *piVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    if (iVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar4 = (int *)*piVar4;
    iVar3 = *piVar1;
    *(int **)(unaff_EBP + -0x34) = piVar4;
    uVar5 = (**(code **)(iVar3 + 0x30))();
    iVar3 = (**(code **)(*piVar4 + 0x90))
                      (*(undefined4 *)(unaff_EBP + -0x34),0,uVar5,*(undefined4 *)(unaff_EBP + -0x48)
                       ,*(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                       *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x58),
                       *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                       *(undefined4 *)(unaff_EBP + -0x4c));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x34),&DAT_00963de8);
    }
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x48);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_00815ad3:
    iVar3 = FUN_00402bc3(unaff_EBP + -0x58);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
  }
  else {
    iVar2 = *(int *)(iVar3 + 0x18);
    *(int **)(unaff_EBP + -0x34) = (int *)(iVar3 + 0x18);
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    uVar5 = (**(code **)(*piVar1 + 0x2c))();
    *(undefined4 *)(unaff_EBP + -0x2c) = uVar5;
    iVar3 = FUN_0042fb0a();
    iVar3 = FUN_0087a90a(*(int *)(unaff_EBP + -0x2c) + -800 + iVar3);
    if (iVar3 < 0xb) {
      FUN_00403191(&DAT_00980690);
      *(undefined4 *)(unaff_EBP + -4) = 0x37;
      FUN_00403191(&DAT_00980690);
      iVar3 = unaff_EBP + -0x2c;
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
      FUN_00424e27(iVar3);
      FUN_0042fb5e(iVar3);
      iVar3 = unaff_EBP + -0x58;
      iVar2 = unaff_EBP + -0x48;
      iVar6 = *piVar1;
      *(undefined1 *)(unaff_EBP + -4) = 0x39;
      uVar5 = (**(code **)(iVar6 + 0x30))(iVar2,iVar3);
      FUN_00424e27(uVar5);
      iVar6 = FUN_0042fb0a();
      iVar6 = 800 - iVar6;
      FUN_00424df4(iVar6);
      FUN_00424f2f(iVar6,uVar5,iVar2,iVar3);
      FUN_004125d9();
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x48);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      goto LAB_00815ad3;
    }
  }
  uVar5 = (**(code **)(*piVar1 + 0x30))();
  iVar3 = FUN_0087a90a(uVar5);
  if (iVar3 < 0xb) {
    FUN_00424aee(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 0x3a;
    FUN_00424aee(&DAT_00980690);
    iVar3 = *(int *)(unaff_EBP + -0x1c);
    iVar2 = unaff_EBP + -0x38;
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    FUN_00424e27(iVar2);
    uVar5 = FUN_0042fb5e(iVar2);
    *(undefined4 *)(unaff_EBP + -0x2c) = uVar5;
    iVar2 = unaff_EBP + -0x58;
    iVar6 = unaff_EBP + -0x48;
    iVar8 = *piVar1;
    uVar10 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x3c;
    uVar5 = (**(code **)(iVar8 + 0x2c))(0,iVar6,iVar2);
    FUN_00424df4(uVar5);
    FUN_00424f2f(uVar5,uVar10,iVar6,iVar2);
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 0x3a;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x48);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_00815c52:
    iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
  }
  else {
    iVar3 = *(int *)(unaff_EBP + -0x1c);
    FUN_00424e27();
    iVar2 = FUN_0042fb34();
    iVar6 = (**(code **)(*piVar1 + 0x30))();
    iVar2 = FUN_0087a90a(iVar2 + -600 + iVar6);
    if (iVar2 < 0xb) {
      FUN_00424aee(&DAT_00980690);
      *(undefined4 *)(unaff_EBP + -4) = 0x3d;
      FUN_00424aee(&DAT_00980690);
      iVar2 = unaff_EBP + -0x38;
      *(undefined1 *)(unaff_EBP + -4) = 0x3e;
      FUN_00424e27(iVar2);
      uVar5 = FUN_0042fb5e(iVar2);
      *(undefined4 *)(unaff_EBP + -0x2c) = uVar5;
      iVar2 = unaff_EBP + -0x58;
      iVar6 = unaff_EBP + -0x48;
      *(undefined1 *)(unaff_EBP + -4) = 0x3f;
      FUN_00424e27(iVar6,iVar2);
      iVar8 = FUN_0042fb34();
      iVar8 = 600 - iVar8;
      uVar5 = (**(code **)(*piVar1 + 0x2c))(iVar8);
      FUN_00424df4(uVar5);
      FUN_00424f2f(uVar5,iVar8,iVar6,iVar2);
      FUN_004125d9();
      *(undefined1 *)(unaff_EBP + -4) = 0x3d;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x48);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      goto LAB_00815c52;
    }
  }
  iVar2 = FUN_0087a90a(*(int *)(iVar3 + 0x40) - *(int *)(unaff_EBP + -0x8c));
  if (0xf < iVar2) {
    FUN_00424aee(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 0x40;
    FUN_00424aee(&DAT_00980690);
    iVar2 = unaff_EBP + -0x38;
    *(undefined1 *)(unaff_EBP + -4) = 0x41;
    FUN_00424e27(iVar2);
    uVar5 = FUN_0042fb5e(iVar2);
    *(undefined4 *)(unaff_EBP + -0x2c) = uVar5;
    iVar2 = unaff_EBP + -0x58;
    iVar6 = unaff_EBP + -0x48;
    iVar8 = *piVar1;
    *(undefined1 *)(unaff_EBP + -4) = 0x42;
    uVar5 = (**(code **)(iVar8 + 0x30))(iVar6,iVar2);
    iVar8 = *(int *)(unaff_EBP + -0x60) - *(int *)(iVar3 + 0x40);
    FUN_00424df4(iVar8,uVar5);
    FUN_00424f2f(iVar8,uVar5,iVar6,iVar2);
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 0x40;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x48);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
  }
  iVar2 = FUN_0087a90a(*(int *)(iVar3 + 0x44) - *(int *)(unaff_EBP + -0x88));
  if (0xf < iVar2) {
    FUN_00424aee(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 0x43;
    FUN_00424aee(&DAT_00980690);
    iVar2 = unaff_EBP + -0x30;
    *(undefined1 *)(unaff_EBP + -4) = 0x44;
    FUN_00424e27(iVar2);
    FUN_0042fb5e(iVar2);
    iVar2 = unaff_EBP + -0x1f8;
    iVar6 = unaff_EBP + -0x1d8;
    iVar8 = *(int *)(unaff_EBP + -0x5c) - *(int *)(iVar3 + 0x44);
    iVar3 = *piVar1;
    *(undefined1 *)(unaff_EBP + -4) = 0x45;
    uVar5 = (**(code **)(iVar3 + 0x2c))(iVar8,iVar6,iVar2);
    FUN_00424df4(uVar5);
    FUN_00424f2f(uVar5,iVar8,iVar6,iVar2);
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 0x43;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x1d8);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x1f8);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
  }
LAB_00815dcf:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


