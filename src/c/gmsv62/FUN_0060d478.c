/* FUN_0060d478 - 0x0060d478 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0060d478(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int extraout_ECX;
  int unaff_EBP;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  *(int *)(unaff_EBP + -0x10) = extraout_ECX + -4;
  iVar1 = FUN_0060f860(*(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14));
  *(int *)(unaff_EBP + -0x34) = iVar1;
  if (-1 < iVar1) {
    iVar6 = iVar1 * 0x14;
    iVar2 = *(int *)(iVar6 + 0x10 + *(int *)(extraout_ECX + 0x188));
    *(int *)(unaff_EBP + -0x30) = iVar6;
    if (iVar2 != 0) {
      if (*(int *)(unaff_EBP + 8) == 0x201) {
        if ((*(int *)(extraout_ECX + 0x180) == 0) ||
           ((iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0x5c))(), iVar2 != 0 &&
            (*(int *)(extraout_ECX + 0xbc) == 0)))) {
          iVar1 = FUN_004becbc(500,0);
          if (iVar1 != 0) {
            if (*(int *)(iVar6 + *(int *)(extraout_ECX + 0x188) + 0x10) != 0) {
              FUN_00403191(&DAT_00980690);
              *(undefined4 *)(unaff_EBP + -4) = 0;
              FUN_004031b7(0,3);
              bVar8 = DAT_0097c1ac == 0;
              *(undefined1 *)(unaff_EBP + -4) = 1;
              if (bVar8) {
                FUN_00878dfb(0x80004003);
              }
              FUN_0042a39f(unaff_EBP + 8,0,0,0,0,0,unaff_EBP + -0x54,unaff_EBP + -100);
              *(undefined1 *)(unaff_EBP + -4) = 4;
              iVar1 = FUN_00402bc3(unaff_EBP + -0x54);
              if (iVar1 < 0) {
                FUN_00878dfb(iVar1);
              }
              *(undefined1 *)(unaff_EBP + -4) = 3;
              iVar1 = FUN_00402bc3(unaff_EBP + -100);
              if (iVar1 < 0) {
                FUN_00878dfb(iVar1);
              }
              uVar10 = 0;
              uVar9 = 0;
              uVar3 = FUN_0045e2eb(0,0);
              FUN_005536ce(unaff_EBP + -0x14,uVar3,uVar9,uVar10);
              *(undefined1 *)(unaff_EBP + -4) = 5;
              FUN_00403191(&DAT_00980690);
              *(undefined1 *)(unaff_EBP + -4) = 6;
              FUN_00403191(&DAT_00980690);
              *(undefined1 *)(unaff_EBP + -4) = 7;
              FUN_00403191(&DAT_00980690);
              *(undefined1 *)(unaff_EBP + -4) = 8;
              FUN_00403191(&DAT_00980690);
              *(undefined1 *)(unaff_EBP + -4) = 9;
              FUN_00403191(&DAT_00980690);
              *(undefined1 *)(unaff_EBP + -4) = 10;
              if (*(int *)(unaff_EBP + 8) == 0) {
                FUN_00878dfb(0x80004003);
              }
              FUN_004250ac(unaff_EBP + -0xa4,*(undefined4 *)(unaff_EBP + -0x14),unaff_EBP + -0x84,
                           unaff_EBP + -0x74,unaff_EBP + -0x94,unaff_EBP + -0x44,unaff_EBP + -0x28);
              iVar1 = FUN_00402bc3(unaff_EBP + -0xa4);
              if (iVar1 < 0) {
                FUN_00878dfb(iVar1);
              }
              *(undefined1 *)(unaff_EBP + -4) = 9;
              iVar1 = FUN_00402bc3(unaff_EBP + -0x84);
              if (iVar1 < 0) {
                FUN_00878dfb(iVar1);
              }
              *(undefined1 *)(unaff_EBP + -4) = 8;
              iVar1 = FUN_00402bc3(unaff_EBP + -0x74);
              if (iVar1 < 0) {
                FUN_00878dfb(iVar1);
              }
              *(undefined1 *)(unaff_EBP + -4) = 7;
              iVar1 = FUN_00402bc3(unaff_EBP + -0x94);
              if (iVar1 < 0) {
                FUN_00878dfb(iVar1);
              }
              *(undefined1 *)(unaff_EBP + -4) = 6;
              iVar1 = FUN_00402bc3(unaff_EBP + -0x44);
              if (iVar1 < 0) {
                FUN_00878dfb(iVar1);
              }
              *(undefined1 *)(unaff_EBP + -4) = 5;
              iVar1 = FUN_00402bc3(unaff_EBP + -0x28);
              if (iVar1 < 0) {
                FUN_00878dfb(iVar1);
              }
              if (*(int *)(unaff_EBP + 8) == 0) {
                FUN_00878dfb(0x80004003);
              }
              piVar5 = *(int **)(unaff_EBP + 8);
              iVar1 = (**(code **)(*piVar5 + 0xe0))(piVar5,0x80ffffff);
              if (iVar1 < 0) {
                FUN_00878e09(iVar1,piVar5,&DAT_00963df8);
              }
              puVar4 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x2c);
              FUN_0040ee87(*puVar4,1);
              piVar5 = *(int **)(unaff_EBP + 8);
              *(undefined1 *)(unaff_EBP + -4) = 0xc;
              if (piVar5 == (int *)0x0) {
                FUN_00878dfb(0x80004003);
                piVar5 = *(int **)(unaff_EBP + 8);
              }
              iVar1 = *piVar5;
              *(int **)(unaff_EBP + -0x10) = piVar5;
              iVar1 = (**(code **)(iVar1 + 100))
                                (piVar5,*(undefined4 *)(unaff_EBP + -0x28),
                                 *(undefined4 *)(unaff_EBP + -0x24),
                                 *(undefined4 *)(unaff_EBP + -0x20),
                                 *(undefined4 *)(unaff_EBP + -0x1c));
              if (iVar1 < 0) {
                FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
              }
              *(undefined1 *)(unaff_EBP + -4) = 0xb;
              iVar1 = FUN_00402bc3(unaff_EBP + -0x28);
              if (iVar1 < 0) {
                FUN_00878dfb(iVar1);
              }
              *(undefined1 *)(unaff_EBP + -4) = 5;
              FUN_00412600();
              FUN_00403191(&DAT_00980690);
              *(undefined1 *)(unaff_EBP + -4) = 0xd;
              FUN_00403191(&DAT_00980690);
              *(undefined1 *)(unaff_EBP + -4) = 0xe;
              if ((*(int *)(unaff_EBP + -0x14) == 0) &&
                 (FUN_00878dfb(0x80004003), *(int *)(unaff_EBP + -0x14) == 0)) {
                FUN_00878dfb(0x80004003);
              }
              if (*(int *)(unaff_EBP + 8) == 0) {
                FUN_00878dfb(0x80004003);
              }
              piVar5 = *(int **)(unaff_EBP + 8);
              iVar1 = FUN_0040eed0();
              *(int *)(unaff_EBP + 0x14) = (*(int *)(unaff_EBP + 0x14) - iVar1) + 0x10;
              iVar1 = FUN_0040eea9();
              iVar1 = (**(code **)(*piVar5 + 0x90))
                                (piVar5,(*(int *)(unaff_EBP + 0x10) - iVar1) + -0x10,
                                 *(undefined4 *)(unaff_EBP + 0x14),
                                 *(undefined4 *)(unaff_EBP + -0x28),
                                 *(undefined4 *)(unaff_EBP + -0x24),
                                 *(undefined4 *)(unaff_EBP + -0x20),
                                 *(undefined4 *)(unaff_EBP + -0x1c),
                                 *(undefined4 *)(unaff_EBP + -0x44),
                                 *(undefined4 *)(unaff_EBP + -0x40),
                                 *(undefined4 *)(unaff_EBP + -0x3c),
                                 *(undefined4 *)(unaff_EBP + -0x38));
              if (iVar1 < 0) {
                FUN_00878e09(iVar1,piVar5,&DAT_00963de8);
              }
              *(undefined1 *)(unaff_EBP + -4) = 0xd;
              iVar1 = FUN_00402bc3(unaff_EBP + -0x28);
              if (iVar1 < 0) {
                FUN_00878dfb(iVar1);
              }
              *(undefined1 *)(unaff_EBP + -4) = 5;
              iVar1 = FUN_00402bc3(unaff_EBP + -0x44);
              if (iVar1 < 0) {
                FUN_00878dfb(iVar1);
              }
              puVar4 = (undefined4 *)FUN_004029b9(0x20);
              *(undefined4 **)(unaff_EBP + 0x10) = puVar4;
              *(undefined1 *)(unaff_EBP + -4) = 0xf;
              if (puVar4 == (undefined4 *)0x0) {
                uVar7 = *(uint *)(unaff_EBP + -0x18);
                puVar4 = (undefined4 *)0x0;
              }
              else {
                uVar7 = *(uint *)(unaff_EBP + -0x18);
                uVar3 = *(undefined4 *)(unaff_EBP + 8);
                iVar1 = FUN_0045e2eb();
                *(int *)(unaff_EBP + 0x14) = iVar1 / 1000000;
                FUN_00611607(uVar3);
                uVar3 = *(undefined4 *)(unaff_EBP + 0x14);
                puVar4[5] = 0;
                puVar4[4] = uVar3;
                puVar4[6] = *(undefined4 *)(unaff_EBP + -0x34);
                puVar4[7] = -(uint)(uVar7 != 4) & uVar7;
                *puVar4 = &PTR_FUN_008ea2a8;
              }
              *(undefined1 *)(unaff_EBP + -4) = 5;
              FUN_0081820c(-(uint)(uVar7 != 4) & uVar7,puVar4);
              puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 0x14,0x73b);
              uVar3 = *puVar4;
              *(undefined1 *)(unaff_EBP + -4) = 0x10;
              FUN_007d3cdd(uVar3);
              *(undefined1 *)(unaff_EBP + -4) = 5;
              FUN_00402676();
              piVar5 = *(int **)(unaff_EBP + -0x14);
              *(undefined1 *)(unaff_EBP + -4) = 3;
              if (piVar5 != (int *)0x0) {
                (**(code **)(*piVar5 + 8))(piVar5);
              }
              piVar5 = *(int **)(unaff_EBP + 8);
              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
              if (piVar5 != (int *)0x0) {
                (**(code **)(*piVar5 + 8))(piVar5);
              }
            }
            FUN_0074d6fb();
          }
        }
        else {
          *(int *)(extraout_ECX + 0x1a4) = iVar1;
          FUN_008161f1(0);
        }
      }
      else if (*(int *)(unaff_EBP + 8) == 0x203) {
        FUN_0060f019(iVar1);
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


