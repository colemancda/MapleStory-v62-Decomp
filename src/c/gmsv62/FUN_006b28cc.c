/* FUN_006b28cc - 0x006b28cc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006b28cc(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  if (*(int *)(unaff_EBP + 8) == 0x201) {
    *(int *)(unaff_EBP + -0x18) = extraout_ECX + -4;
    iVar1 = FUN_006b38b8(*(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14));
    if (iVar1 == 0) {
      FUN_0074d6fb();
    }
    else {
      iVar2 = FUN_004becbc(500,0);
      if (iVar2 != 0) {
        iVar2 = FUN_00455c59(unaff_EBP + -0x78);
        *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar2 + 4);
        FUN_0045e4a2();
        *(int *)(unaff_EBP + -0x30) = -100 - iVar1;
        iVar2 = FUN_00458c4f(unaff_EBP + -0x78,1,-100 - iVar1);
        iVar2 = *(int *)(iVar2 + 4);
        FUN_0046575e();
        if (iVar2 == 0) {
          *(int *)(unaff_EBP + -0x30) = -iVar1;
          iVar1 = FUN_00458c4f(unaff_EBP + -0x78,1,-iVar1);
          iVar2 = *(int *)(iVar1 + 4);
          FUN_0046575e();
        }
        FUN_00403191(&DAT_00980690);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        FUN_004031b7(0,3);
        bVar7 = DAT_0097c1ac == 0;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (bVar7) {
          FUN_00878dfb(0x80004003);
        }
        FUN_0042a39f(unaff_EBP + -0x94,0,0,0,0,0,unaff_EBP + -0x80,unaff_EBP + -0x50);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        iVar1 = FUN_00402bc3(unaff_EBP + -0x80);
        if (iVar1 < 0) {
          FUN_00878dfb(iVar1);
        }
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iVar1 = FUN_00402bc3(unaff_EBP + -0x50);
        if (iVar1 < 0) {
          FUN_00878dfb(iVar1);
        }
        *(undefined4 *)(unaff_EBP + -0x74) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 5;
        if (iVar2 != 0) {
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 6;
          FUN_004031b7(0,3);
          bVar7 = DAT_0097c1ac == 0;
          *(undefined1 *)(unaff_EBP + -4) = 7;
          if (bVar7) {
            FUN_00878dfb(0x80004003);
          }
          FUN_0042a39f(unaff_EBP + 8,0,0,0,0,0,unaff_EBP + -0x50,unaff_EBP + -0x70);
          *(undefined1 *)(unaff_EBP + -4) = 10;
          iVar1 = FUN_00402bc3(unaff_EBP + -0x50);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
          *(undefined1 *)(unaff_EBP + -4) = 9;
          iVar1 = FUN_00402bc3(unaff_EBP + -0x70);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
          uVar9 = 0;
          uVar8 = 0;
          uVar3 = FUN_0045e2eb(0,0);
          FUN_005536ce(unaff_EBP + -0x10,uVar3,uVar8,uVar9);
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          if (*(int *)(unaff_EBP + 8) == 0) {
            FUN_00878dfb(0x80004003);
          }
          FUN_004250ac(unaff_EBP + -0x60,*(undefined4 *)(unaff_EBP + -0x10),unaff_EBP + -0x70,
                       unaff_EBP + -0x50,unaff_EBP + -0x90,unaff_EBP + -0x40,unaff_EBP + -0x2c);
          iVar1 = FUN_00402bc3(unaff_EBP + -0x60);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          iVar1 = FUN_00402bc3(unaff_EBP + -0x70);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          iVar1 = FUN_00402bc3(unaff_EBP + -0x50);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          iVar1 = FUN_00402bc3(unaff_EBP + -0x90);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          iVar1 = FUN_00402bc3(unaff_EBP + -0x40);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          iVar1 = FUN_00402bc3(unaff_EBP + -0x2c);
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
          puVar4 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x18);
          FUN_0040ee87(*puVar4,1);
          piVar5 = *(int **)(unaff_EBP + 8);
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          if (piVar5 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar5 = *(int **)(unaff_EBP + 8);
          }
          iVar1 = *piVar5;
          *(int **)(unaff_EBP + -0x14) = piVar5;
          iVar1 = (**(code **)(iVar1 + 100))
                            (piVar5,*(undefined4 *)(unaff_EBP + -0x2c),
                             *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                             *(undefined4 *)(unaff_EBP + -0x20));
          if (iVar1 < 0) {
            FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iVar1 = FUN_00402bc3(unaff_EBP + -0x2c);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          FUN_00412600();
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x14;
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            FUN_00878dfb(0x80004003);
            if (*(int *)(unaff_EBP + -0x10) == 0) {
              FUN_00878dfb(0x80004003);
            }
          }
          if (*(int *)(unaff_EBP + 8) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar5 = *(int **)(unaff_EBP + 8);
          *(int **)(unaff_EBP + -0x18) = piVar5;
          iVar1 = FUN_0040eed0();
          *(int *)(unaff_EBP + -0x14) = (*(int *)(unaff_EBP + 0x14) - iVar1) + 0x10;
          iVar1 = FUN_0040eea9();
          iVar1 = (**(code **)(*piVar5 + 0x90))
                            (*(undefined4 *)(unaff_EBP + -0x18),
                             (*(int *)(unaff_EBP + 0x10) - iVar1) + -0x10,
                             *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x2c),
                             *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                             *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x40),
                             *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                             *(undefined4 *)(unaff_EBP + -0x34));
          if (iVar1 < 0) {
            FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          iVar1 = FUN_00402bc3(unaff_EBP + -0x2c);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          iVar1 = FUN_00402bc3(unaff_EBP + -0x40);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
          puVar4 = (undefined4 *)FUN_004029b9(0x20);
          *(undefined4 **)(unaff_EBP + -0x14) = puVar4;
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          if (puVar4 == (undefined4 *)0x0) {
            uVar6 = *(uint *)(unaff_EBP + -0x1c);
            puVar4 = (undefined4 *)0x0;
          }
          else {
            FUN_00611607(*(undefined4 *)(unaff_EBP + 8));
            uVar3 = *(undefined4 *)(unaff_EBP + -0x30);
            puVar4[6] = 0;
            puVar4[5] = uVar3;
            uVar6 = *(uint *)(unaff_EBP + -0x1c);
            puVar4[4] = 1;
            puVar4[7] = -(uint)(uVar6 != 4) & uVar6;
            *puVar4 = &PTR_FUN_008ea2a8;
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          FUN_0081820c(-(uint)(uVar6 != 4) & uVar6,puVar4);
          puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x14,0x73b);
          uVar3 = *puVar4;
          *(undefined1 *)(unaff_EBP + -4) = 0x16;
          FUN_007d3cdd(uVar3);
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          if (*(int *)(unaff_EBP + -0x14) != 0) {
            FUN_00403384(*(int *)(unaff_EBP + -0x14) + -0xc);
          }
          FUN_004125e6();
          *(undefined1 *)(unaff_EBP + -4) = 5;
          FUN_00412600();
        }
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x1c) + -4;
        iVar1 = FUN_006b38b8(*(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14));
        if ((iVar1 == 200) && (*(int *)(DAT_00979110 + 0x380) != 0)) {
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          FUN_004031b7(0,3);
          bVar7 = DAT_0097c1ac == 0;
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          if (bVar7) {
            FUN_00878dfb(0x80004003);
          }
          FUN_0042a39f(unaff_EBP + 8,0,0,0,0,0,unaff_EBP + -0x2c,unaff_EBP + -0x40);
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          iVar1 = FUN_00402bc3(unaff_EBP + -0x2c);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1a;
          iVar1 = FUN_00402bc3(unaff_EBP + -0x40);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
          FUN_005536ce(unaff_EBP + -0x10,*(undefined4 *)(DAT_00979110 + 0x380),0,0);
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x1d;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x1e;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x1f;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x20;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          if (*(int *)(unaff_EBP + 8) == 0) {
            FUN_00878dfb(0x80004003);
          }
          FUN_004250ac(unaff_EBP + -0x60,*(undefined4 *)(unaff_EBP + -0x10),unaff_EBP + -0x2c,
                       unaff_EBP + -0x40,unaff_EBP + -0x90,unaff_EBP + -0x70,unaff_EBP + -0x50);
          iVar1 = FUN_00402bc3(unaff_EBP + -0x60);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x20;
          iVar1 = FUN_00402bc3(unaff_EBP + -0x2c);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1f;
          iVar1 = FUN_00402bc3(unaff_EBP + -0x40);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1e;
          iVar1 = FUN_00402bc3(unaff_EBP + -0x90);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1d;
          iVar1 = FUN_00402bc3(unaff_EBP + -0x70);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          iVar1 = FUN_00402bc3(unaff_EBP + -0x50);
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
          puVar4 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x18);
          FUN_0040ee87(*puVar4,1);
          piVar5 = *(int **)(unaff_EBP + 8);
          *(undefined1 *)(unaff_EBP + -4) = 0x23;
          if (piVar5 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar5 = *(int **)(unaff_EBP + 8);
          }
          iVar1 = *piVar5;
          *(int **)(unaff_EBP + -0x14) = piVar5;
          iVar1 = (**(code **)(iVar1 + 100))
                            (piVar5,*(undefined4 *)(unaff_EBP + -0x2c),
                             *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                             *(undefined4 *)(unaff_EBP + -0x20));
          if (iVar1 < 0) {
            FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x22;
          iVar1 = FUN_00402bc3(unaff_EBP + -0x2c);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          FUN_00412600();
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            FUN_00878dfb(0x80004003);
            if (*(int *)(unaff_EBP + -0x10) == 0) {
              FUN_00878dfb(0x80004003);
            }
          }
          if (*(int *)(unaff_EBP + 8) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar5 = *(int **)(unaff_EBP + 8);
          *(int **)(unaff_EBP + -0x18) = piVar5;
          iVar1 = FUN_0040eed0();
          *(int *)(unaff_EBP + -0x14) = (*(int *)(unaff_EBP + 0x14) - iVar1) + 0x10;
          iVar1 = FUN_0040eea9();
          iVar1 = (**(code **)(*piVar5 + 0x90))
                            (*(undefined4 *)(unaff_EBP + -0x18),
                             (*(int *)(unaff_EBP + 0x10) - iVar1) + -0x10,
                             *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x2c),
                             *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                             *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x40),
                             *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                             *(undefined4 *)(unaff_EBP + -0x34));
          if (iVar1 < 0) {
            FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963de8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          iVar1 = FUN_00402bc3(unaff_EBP + -0x2c);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          iVar1 = FUN_00402bc3(unaff_EBP + -0x40);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
          puVar4 = (undefined4 *)FUN_004029b9(0x20);
          *(undefined4 **)(unaff_EBP + -0x14) = puVar4;
          *(undefined1 *)(unaff_EBP + -4) = 0x26;
          if (puVar4 == (undefined4 *)0x0) {
            uVar6 = *(uint *)(unaff_EBP + -0x1c);
            puVar4 = (undefined4 *)0x0;
          }
          else {
            FUN_00611607(*(undefined4 *)(unaff_EBP + 8));
            uVar3 = *(undefined4 *)(unaff_EBP + -0x30);
            puVar4[6] = 0;
            puVar4[5] = uVar3;
            uVar6 = *(uint *)(unaff_EBP + -0x1c);
            puVar4[4] = 2;
            puVar4[7] = -(uint)(uVar6 != 4) & uVar6;
            *puVar4 = &PTR_FUN_008ea2a8;
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          FUN_0081820c(-(uint)(uVar6 != 4) & uVar6,puVar4);
          puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x14,0x73b);
          uVar3 = *puVar4;
          *(undefined1 *)(unaff_EBP + -4) = 0x27;
          FUN_007d3cdd(uVar3);
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          if (*(int *)(unaff_EBP + -0x14) != 0) {
            FUN_00403384(*(int *)(unaff_EBP + -0x14) + -0xc);
          }
          FUN_004125e6();
          *(undefined1 *)(unaff_EBP + -4) = 5;
          FUN_00412600();
        }
        iVar1 = FUN_006b38b8(*(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14));
        if ((iVar1 == 0xc9) && (*(int *)(DAT_00979110 + 900) != 0)) {
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x28;
          FUN_004031b7(0,3);
          bVar7 = DAT_0097c1ac == 0;
          *(undefined1 *)(unaff_EBP + -4) = 0x29;
          if (bVar7) {
            FUN_00878dfb(0x80004003);
          }
          FUN_0042a39f(unaff_EBP + 8,0,0,0,0,0,unaff_EBP + -0x2c,unaff_EBP + -0x40);
          *(undefined1 *)(unaff_EBP + -4) = 0x2c;
          iVar1 = FUN_00402bc3(unaff_EBP + -0x2c);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2b;
          iVar1 = FUN_00402bc3(unaff_EBP + -0x40);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
          FUN_005536ce(unaff_EBP + -0x10,*(undefined4 *)(DAT_00979110 + 900),0,0);
          *(undefined1 *)(unaff_EBP + -4) = 0x2d;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x2e;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x2f;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x30;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x31;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x32;
          if (*(int *)(unaff_EBP + 8) == 0) {
            FUN_00878dfb(0x80004003);
          }
          FUN_004250ac(unaff_EBP + -0xb4,*(undefined4 *)(unaff_EBP + -0x10),unaff_EBP + -0x90,
                       unaff_EBP + -0x70,unaff_EBP + -0x50,unaff_EBP + -0xa4,unaff_EBP + -0x60);
          iVar1 = FUN_00402bc3(unaff_EBP + -0xb4);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x31;
          iVar1 = FUN_00402bc3(unaff_EBP + -0x90);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x30;
          iVar1 = FUN_00402bc3(unaff_EBP + -0x70);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2f;
          iVar1 = FUN_00402bc3(unaff_EBP + -0x50);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2e;
          iVar1 = FUN_00402bc3(unaff_EBP + -0xa4);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2d;
          iVar1 = FUN_00402bc3(unaff_EBP + -0x60);
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
          puVar4 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x18);
          FUN_0040ee87(*puVar4,1);
          piVar5 = *(int **)(unaff_EBP + 8);
          *(undefined1 *)(unaff_EBP + -4) = 0x34;
          if (piVar5 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar5 = *(int **)(unaff_EBP + 8);
          }
          iVar1 = *piVar5;
          *(int **)(unaff_EBP + -0x14) = piVar5;
          iVar1 = (**(code **)(iVar1 + 100))
                            (piVar5,*(undefined4 *)(unaff_EBP + -0x60),
                             *(undefined4 *)(unaff_EBP + -0x5c),*(undefined4 *)(unaff_EBP + -0x58),
                             *(undefined4 *)(unaff_EBP + -0x54));
          if (iVar1 < 0) {
            FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x33;
          iVar1 = FUN_00402bc3(unaff_EBP + -0x60);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2d;
          FUN_00412600();
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x35;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x36;
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            FUN_00878dfb(0x80004003);
            if (*(int *)(unaff_EBP + -0x10) == 0) {
              FUN_00878dfb(0x80004003);
            }
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
                             *(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + -0x60),
                             *(undefined4 *)(unaff_EBP + -0x5c),*(undefined4 *)(unaff_EBP + -0x58),
                             *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0xa4),
                             *(undefined4 *)(unaff_EBP + -0xa0),*(undefined4 *)(unaff_EBP + -0x9c),
                             *(undefined4 *)(unaff_EBP + -0x98));
          if (iVar1 < 0) {
            FUN_00878e09(iVar1,piVar5,&DAT_00963de8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x35;
          iVar1 = FUN_00402bc3(unaff_EBP + -0x60);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2d;
          iVar1 = FUN_00402bc3(unaff_EBP + -0xa4);
          if (iVar1 < 0) {
            FUN_00878dfb(iVar1);
          }
          puVar4 = (undefined4 *)FUN_004029b9(0x20);
          *(undefined4 **)(unaff_EBP + 0x14) = puVar4;
          *(undefined1 *)(unaff_EBP + -4) = 0x37;
          if (puVar4 == (undefined4 *)0x0) {
            uVar6 = *(uint *)(unaff_EBP + -0x1c);
            puVar4 = (undefined4 *)0x0;
          }
          else {
            FUN_00611607(*(undefined4 *)(unaff_EBP + 8));
            uVar3 = *(undefined4 *)(unaff_EBP + -0x30);
            puVar4[6] = 0;
            puVar4[5] = uVar3;
            uVar6 = *(uint *)(unaff_EBP + -0x1c);
            puVar4[4] = 2;
            puVar4[7] = -(uint)(uVar6 != 4) & uVar6;
            *puVar4 = &PTR_FUN_008ea2a8;
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2d;
          FUN_0081820c(-(uint)(uVar6 != 4) & uVar6,puVar4);
          puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 0x14,0x73b);
          uVar3 = *puVar4;
          *(undefined1 *)(unaff_EBP + -4) = 0x38;
          FUN_007d3cdd(uVar3);
          *(undefined1 *)(unaff_EBP + -4) = 0x2d;
          FUN_00402676();
          piVar5 = *(int **)(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 0x2b;
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 8))(piVar5);
          }
          piVar5 = *(int **)(unaff_EBP + 8);
          *(undefined1 *)(unaff_EBP + -4) = 5;
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 8))(piVar5);
          }
        }
        FUN_0074d6fb();
        piVar5 = *(int **)(unaff_EBP + -0x94);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 8))(piVar5);
        }
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


