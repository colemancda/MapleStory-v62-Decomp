/* FUN_00401def - 0x00401def in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00401def(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  int extraout_ECX;
  int unaff_EBP;
  int iVar7;
  int iVar8;
  
  FUN_00879bb8();
  FUN_00401bfb();
  FUN_00401c7a();
  *(int *)(unaff_EBP + -0x10) = *(int *)(extraout_ECX + 0x20) - *(int *)(extraout_ECX + 0x18);
  *(int *)(unaff_EBP + -0x14) = *(int *)(extraout_ECX + 0x24) - *(int *)(extraout_ECX + 0x1c);
  puVar5 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x18,0x3af);
  piVar1 = *(int **)(unaff_EBP + 8);
  uVar2 = *puVar5;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0040381b(uVar2,piVar1,0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_00403384(*(int *)(unaff_EBP + -0x18) + -0xc);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00403191(&DAT_00980690);
  iVar6 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar6 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)*piVar1;
  iVar6 = *piVar1;
  *(int **)(unaff_EBP + -0x18) = piVar1;
  iVar6 = (**(code **)(iVar6 + 0x2c))
                    (piVar1,*(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0x14),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                     *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
  if (iVar6 < 0) {
    FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  puVar5 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x18,0x3af);
  piVar1 = *(int **)(unaff_EBP + 0xc);
  uVar2 = *puVar5;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  FUN_0040381b(uVar2,piVar1,0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_00403384(*(int *)(unaff_EBP + -0x18) + -0xc);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_00403191(&DAT_00980690);
  iVar6 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar6 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)*piVar1;
  iVar6 = *piVar1;
  *(int **)(unaff_EBP + -0x18) = piVar1;
  iVar6 = (**(code **)(iVar6 + 0x2c))
                    (piVar1,*(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0x14),
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                     *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c));
  if (iVar6 < 0) {
    FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  iVar6 = *(int *)(extraout_ECX + 0x10);
  if (iVar6 != 0) {
    do {
      iVar7 = *(int *)(iVar6 + 4);
      iVar6 = *(int *)((-(uint)(iVar6 != 0) & iVar6 - 0x10U) + 4);
      iVar8 = *(int *)(iVar7 + 0x14);
      *(uint *)(unaff_EBP + -0x10) = -(uint)(iVar6 != 0) & iVar6 + 0x10U;
      if (iVar8 != 0) {
        iVar6 = *(int *)(iVar7 + 0x20);
        if (*(int *)(unaff_EBP + 0x1c) == 0) {
          if (*(int *)(iVar6 + 0x24) < DAT_00973a5c) {
            FUN_004031b7(0xff,3);
            piVar1 = *(int **)(unaff_EBP + 8);
            iVar6 = *piVar1;
            uVar2 = *(undefined4 *)(*(int *)(iVar7 + 0x20) + 0x30);
            *(undefined4 *)(unaff_EBP + -4) = 6;
            *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
            if (iVar6 == 0) {
              FUN_00878dfb(0x80004003);
            }
            piVar1 = (int *)*piVar1;
            iVar6 = *(int *)(iVar7 + 0x10);
            iVar7 = *(int *)(iVar7 + 0xc);
            iVar8 = *(int *)(extraout_ECX + 0x1c);
            iVar3 = *(int *)(extraout_ECX + 0x18);
            *(int **)(unaff_EBP + -0x14) = piVar1;
            iVar6 = (**(code **)(*piVar1 + 0x80))
                              (*(undefined4 *)(unaff_EBP + -0x14),iVar7 - iVar3,iVar6 - iVar8,
                               *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x38)
                               ,*(undefined4 *)(unaff_EBP + -0x34),
                               *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c)
                              );
            if (iVar6 < 0) {
              FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963cc8);
            }
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            iVar6 = unaff_EBP + -0x38;
          }
          else {
            FUN_004031b7(0xff,3);
            piVar1 = *(int **)(unaff_EBP + 0xc);
            iVar6 = *piVar1;
            uVar2 = *(undefined4 *)(*(int *)(iVar7 + 0x20) + 0x30);
            *(undefined4 *)(unaff_EBP + -4) = 7;
            *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
            if (iVar6 == 0) {
              FUN_00878dfb(0x80004003);
            }
            piVar1 = (int *)*piVar1;
            iVar6 = *(int *)(iVar7 + 0x10);
            iVar7 = *(int *)(iVar7 + 0xc);
            iVar8 = *(int *)(extraout_ECX + 0x1c);
            iVar3 = *(int *)(extraout_ECX + 0x18);
            *(int **)(unaff_EBP + -0x14) = piVar1;
            iVar6 = (**(code **)(*piVar1 + 0x80))
                              (*(undefined4 *)(unaff_EBP + -0x14),iVar7 - iVar3,iVar6 - iVar8,
                               *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x28)
                               ,*(undefined4 *)(unaff_EBP + -0x24),
                               *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c)
                              );
            if (iVar6 < 0) {
              FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963cc8);
            }
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            iVar6 = unaff_EBP + -0x28;
          }
        }
        else if (*(int *)(iVar6 + 0x24) < DAT_00973a58) {
          FUN_004031b7(0xff,3);
          piVar1 = *(int **)(unaff_EBP + 8);
          iVar6 = *piVar1;
          uVar2 = *(undefined4 *)(*(int *)(iVar7 + 0x20) + 0x30);
          *(undefined4 *)(unaff_EBP + -4) = 8;
          *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
          if (iVar6 == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar1 = (int *)*piVar1;
          iVar6 = *(int *)(iVar7 + 0x10);
          iVar7 = *(int *)(iVar7 + 0xc);
          iVar8 = *(int *)(extraout_ECX + 0x1c);
          iVar3 = *(int *)(extraout_ECX + 0x18);
          *(int **)(unaff_EBP + -0x14) = piVar1;
          iVar6 = (**(code **)(*piVar1 + 0x80))
                            (*(undefined4 *)(unaff_EBP + -0x14),iVar7 - iVar3,iVar6 - iVar8,
                             *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x48),
                             *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                             *(undefined4 *)(unaff_EBP + -0x3c));
          if (iVar6 < 0) {
            FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963cc8);
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar6 = unaff_EBP + -0x48;
        }
        else {
          if (*(int *)(iVar6 + 0x24) <= DAT_00973a54) goto LAB_00402234;
          FUN_004031b7(0xff,3);
          piVar1 = *(int **)(unaff_EBP + 0xc);
          iVar6 = *piVar1;
          uVar2 = *(undefined4 *)(*(int *)(iVar7 + 0x20) + 0x30);
          *(undefined4 *)(unaff_EBP + -4) = 9;
          *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
          if (iVar6 == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar1 = (int *)*piVar1;
          iVar6 = *(int *)(iVar7 + 0x10);
          iVar7 = *(int *)(iVar7 + 0xc);
          iVar8 = *(int *)(extraout_ECX + 0x1c);
          iVar3 = *(int *)(extraout_ECX + 0x18);
          *(int **)(unaff_EBP + -0x14) = piVar1;
          iVar6 = (**(code **)(*piVar1 + 0x80))
                            (*(undefined4 *)(unaff_EBP + -0x14),iVar7 - iVar3,iVar6 - iVar8,
                             *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x58),
                             *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                             *(undefined4 *)(unaff_EBP + -0x4c));
          if (iVar6 < 0) {
            FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963cc8);
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar6 = unaff_EBP + -0x58;
        }
        iVar6 = FUN_00402bc3(iVar6);
        if (iVar6 < 0) {
          FUN_00878dfb(iVar6);
        }
      }
LAB_00402234:
      if (*(int *)(unaff_EBP + -0x10) == 0) break;
      iVar6 = *(int *)(unaff_EBP + -0x10);
    } while( true );
  }
  iVar6 = *(int *)(extraout_ECX + 0x30);
  iVar7 = (*(int *)(*(int *)(iVar6 + 0x20) + 0x28) + *(int *)(iVar6 + 0xc)) -
          *(int *)(extraout_ECX + 0x18);
  iVar8 = (*(int *)(*(int *)(iVar6 + 0x20) + 0x2c) + *(int *)(iVar6 + 0x10)) -
          *(int *)(extraout_ECX + 0x1c);
  iVar6 = **(int **)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x10) = iVar7;
  *(int *)(unaff_EBP + -0x14) = iVar8;
  if (iVar6 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)**(undefined4 **)(unaff_EBP + 8);
  iVar6 = *piVar1;
  *(int **)(unaff_EBP + -0x18) = piVar1;
  iVar6 = (**(code **)(iVar6 + 0x70))(piVar1,iVar7);
  if (iVar6 < 0) {
    FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
  }
  if (**(int **)(unaff_EBP + 8) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)**(undefined4 **)(unaff_EBP + 8);
  iVar6 = *piVar1;
  *(int **)(unaff_EBP + 8) = piVar1;
  iVar6 = (**(code **)(iVar6 + 0x78))(piVar1,iVar8);
  if (iVar6 < 0) {
    FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + 8),&DAT_00963cc8);
  }
  if (**(int **)(unaff_EBP + 0xc) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)**(undefined4 **)(unaff_EBP + 0xc);
  iVar6 = *piVar1;
  *(int **)(unaff_EBP + 8) = piVar1;
  iVar6 = (**(code **)(iVar6 + 0x70))(piVar1,iVar7);
  if (iVar6 < 0) {
    FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + 8),&DAT_00963cc8);
  }
  piVar1 = *(int **)(unaff_EBP + 0xc);
  if (*piVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)*piVar1;
  iVar6 = (**(code **)(*piVar1 + 0x78))(piVar1,iVar8);
  if (iVar6 < 0) {
    FUN_00878e09(iVar6,piVar1,&DAT_00963cc8);
  }
  iVar6 = *(int *)(extraout_ECX + 0x48);
  iVar7 = (-(uint)(*(int *)(unaff_EBP + 0x1c) != 0) & 0xfffffffe) + 3;
  if (iVar6 != 0) {
    while (iVar7 != 0) {
      iVar8 = *(int *)((-(uint)(iVar6 != 0) & iVar6 - 0x10U) + 4);
      iVar6 = *(int *)(*(int *)(iVar6 + 4) + 0xc);
      *(uint *)(unaff_EBP + 0xc) = -(uint)(iVar8 != 0) & iVar8 + 0x10U;
      if (iVar6 != 0) {
        do {
          iVar8 = *(int *)((-(uint)(iVar6 != 0) & iVar6 - 0x10U) + 4);
          *(uint *)(unaff_EBP + 8) = -(uint)(iVar8 != 0) & iVar8 + 0x10U;
          cVar4 = FUN_00402f72(&DAT_00973a40);
          if (cVar4 != '\0') {
            piVar1 = *(int **)(unaff_EBP + 0x10);
            *piVar1 = (*(int *)(iVar6 + 4) - *(int *)(extraout_ECX + 0x18)) -
                      *(int *)(unaff_EBP + -0x10);
            iVar7 = iVar7 + -1;
            piVar1[1] = (*(int *)(iVar6 + 8) - *(int *)(unaff_EBP + -0x14)) -
                        *(int *)(extraout_ECX + 0x1c);
            if (iVar7 == 0) break;
          }
          if (*(int *)(unaff_EBP + 0x1c) == 0) {
            cVar4 = FUN_00402f72(&DAT_00973a44);
            if (cVar4 != '\0') {
              piVar1 = *(int **)(unaff_EBP + 0x14);
              *piVar1 = (*(int *)(iVar6 + 4) - *(int *)(extraout_ECX + 0x18)) -
                        *(int *)(unaff_EBP + -0x10);
              iVar7 = iVar7 + -1;
              piVar1[1] = (*(int *)(iVar6 + 8) - *(int *)(unaff_EBP + -0x14)) -
                          *(int *)(extraout_ECX + 0x1c);
              if (iVar7 == 0) break;
            }
            cVar4 = FUN_00402f72(&DAT_00973a3c);
            if (cVar4 != '\0') {
              piVar1 = *(int **)(unaff_EBP + 0x18);
              *piVar1 = (*(int *)(iVar6 + 4) - *(int *)(extraout_ECX + 0x18)) -
                        *(int *)(unaff_EBP + -0x10);
              iVar7 = iVar7 + -1;
              piVar1[1] = (*(int *)(iVar6 + 8) - *(int *)(unaff_EBP + -0x14)) -
                          *(int *)(extraout_ECX + 0x1c);
              if (iVar7 == 0) break;
            }
          }
          if (*(int *)(unaff_EBP + 8) == 0) break;
          iVar6 = *(int *)(unaff_EBP + 8);
        } while( true );
      }
      if (*(int *)(unaff_EBP + 0xc) == 0) break;
      iVar6 = *(int *)(unaff_EBP + 0xc);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


