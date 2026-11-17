/* FUN_00790b31 - 0x00790b31 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00790b31(void)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int extraout_ECX_03;
  int *extraout_ECX_04;
  int *extraout_ECX_05;
  int *extraout_ECX_06;
  int *extraout_ECX_07;
  int *extraout_ECX_08;
  int *extraout_ECX_09;
  int iVar9;
  int *extraout_ECX_10;
  int iVar10;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int unaff_EBP;
  undefined4 uVar11;
  bool bVar12;
  int *piStack_2dc;
  undefined4 *puStack_2d8;
  int *local_2d4;
  int iStack_2d0;
  int iStack_2cc;
  code *pcStack_2c8;
  
  FUN_00879bb8();
  uVar11 = 0;
  iVar7 = extraout_ECX[0x149];
  *(int **)(unaff_EBP + -0x28) = extraout_ECX;
  if (iVar7 != 0) goto LAB_00792f54;
  pcVar1 = (code *)**(undefined4 **)(unaff_EBP + 8);
  pcStack_2c8 = (code *)0x790b65;
  FUN_00790038();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (((pcVar1 == (code *)0x111ae9) || (pcVar1 == (code *)0x12a189)) || (pcVar1 == (code *)0x142829)
     ) {
    uVar4 = (uint)(*(int *)(unaff_EBP + 0x14) == 0);
  }
  else {
    if (extraout_ECX[0x34f] == 0) {
      pcStack_2c8 = (code *)0x790b92;
      FUN_00878dfb();
    }
    uVar4 = FUN_0043210d();
  }
  *(uint *)(unaff_EBP + 0x14) = uVar4;
  if ((int)pcVar1 < 0x4dd5cd) {
    if (pcVar1 == (code *)0x4dd5cc) {
LAB_00791f68:
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      pcStack_2c8 = (code *)(unaff_EBP + -0x11c);
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      iStack_2cc = 0x791f81;
      puVar8 = (undefined4 *)FUN_00679d86();
      iStack_2cc = *puVar8;
      pcStack_2c8 = (code *)(unaff_EBP + 0xc);
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      iStack_2d0 = 0x791f92;
      FUN_00437222();
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      if (*(int *)(unaff_EBP + -0x11c) != 0) {
        pcStack_2c8 = (code *)0x791fac;
        FUN_00403384();
      }
      pcStack_2c8 = (code *)0x791fbb;
      piVar5 = (int *)FUN_00486ada();
      iVar7 = *piVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x31;
      if (iVar7 == 0) {
        pcStack_2c8 = (code *)0x791fcf;
        FUN_00878dfb();
      }
      pcStack_2c8 = (code *)0x791fdd;
      FUN_004308ad();
      pcStack_2c8 = (code *)0x0;
      *(undefined1 *)(unaff_EBP + -4) = 0x32;
      iStack_2cc = 0x791fea;
      iVar7 = FUN_004032b4();
      *(undefined1 *)(unaff_EBP + -4) = 0x31;
      pcStack_2c8 = (code *)0x791ffc;
      iVar9 = FUN_00402bc3();
      if (iVar9 < 0) {
        pcStack_2c8 = (code *)0x792007;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      FUN_004125d9();
      if (iVar7 != 0) {
        pcStack_2c8 = (code *)0x79202c;
        piVar5 = (int *)FUN_00486ada();
        iVar7 = *piVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0x33;
        if (iVar7 == 0) {
          pcStack_2c8 = (code *)0x792040;
          FUN_00878dfb();
        }
        pcStack_2c8 = (code *)0x79204e;
        piVar5 = (int *)FUN_004308ad();
        local_2d4 = *(int **)(unaff_EBP + 0xc);
        *(undefined1 *)(unaff_EBP + -4) = 0x34;
        if (local_2d4 == (int *)0x0) {
          pcStack_2c8 = (code *)0x792065;
          FUN_00878dfb();
          local_2d4 = *(int **)(unaff_EBP + 0xc);
        }
        iVar7 = *local_2d4;
        iStack_2d0 = *piVar5;
        iStack_2cc = piVar5[1];
        pcStack_2c8 = (code *)piVar5[2];
        *(int **)(unaff_EBP + -0x14) = local_2d4;
        puStack_2d8 = (undefined4 *)0x79207c;
        iVar7 = (**(code **)(iVar7 + 100))();
        if (iVar7 < 0) {
          pcStack_2c8 = *(code **)(unaff_EBP + -0x14);
          iStack_2d0 = 0x79208e;
          iStack_2cc = iVar7;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x33;
        pcStack_2c8 = (code *)0x79209e;
        iVar7 = FUN_00402bc3();
        if (iVar7 < 0) {
          pcStack_2c8 = (code *)0x7920a9;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        FUN_004125d9();
      }
      pcStack_2c8 = (code *)0x7920cb;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x35;
      pcStack_2c8 = (code *)0x7920db;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      pcStack_2c8 = (code *)0x7920ed;
      piVar5 = (int *)FUN_00486ada();
      iVar7 = *piVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      if (iVar7 == 0) {
        pcStack_2c8 = (code *)0x792101;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x14) = *piVar5;
      pcStack_2c8 = (code *)0x792114;
      piVar5 = (int *)FUN_00486ada();
      iVar7 = *piVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
      if (iVar7 == 0) {
        pcStack_2c8 = (code *)0x792128;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + 0xc) == 0) {
        pcStack_2c8 = (code *)0x792139;
        FUN_00878dfb();
      }
      piVar5 = *(int **)(unaff_EBP + 0xc);
      *(int **)(unaff_EBP + -0x10) = piVar5;
      uVar11 = FUN_00424f08();
      *(undefined4 *)(unaff_EBP + -0x14) = uVar11;
      uVar11 = FUN_00424ee1();
      iStack_2d0 = *(int *)(unaff_EBP + -0xa4);
      iStack_2cc = *(int *)(unaff_EBP + -0xa0);
      pcStack_2c8 = *(code **)(unaff_EBP + -0x9c);
      piStack_2dc = *(int **)(unaff_EBP + -0xb0);
      puStack_2d8 = *(undefined4 **)(unaff_EBP + -0xac);
      local_2d4 = *(int **)(unaff_EBP + -0xa8);
      iVar7 = (**(code **)(*piVar5 + 0x90))
                        (*(undefined4 *)(unaff_EBP + -0x10),uVar11,
                         *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0xb4));
      if (iVar7 < 0) {
        pcStack_2c8 = *(code **)(unaff_EBP + -0x10);
        iStack_2d0 = 0x792190;
        iStack_2cc = iVar7;
        FUN_00878e09();
      }
      FUN_004125d9();
      FUN_004125d9();
      *(undefined1 *)(unaff_EBP + -4) = 0x35;
      pcStack_2c8 = (code *)0x7921b6;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        pcStack_2c8 = (code *)0x7921c1;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      pcStack_2c8 = (code *)0x7921d1;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        pcStack_2c8 = (code *)0x7921dc;
        FUN_00878dfb();
      }
      pcStack_2c8 = *(code **)(unaff_EBP + 0x18);
      iStack_2cc = ((*(int *)(unaff_EBP + 0x10) + 10) * 1000) / 0x10;
      local_2d4 = extraout_ECX + 0x34f;
      iStack_2d0 = 0x10;
      *(int **)(unaff_EBP + 0x10) = &iStack_2d0;
      puStack_2d8 = (undefined4 *)0x792206;
      FUN_0041160e();
      puStack_2d8 = (undefined4 *)(unaff_EBP + 0xc);
      *(int ***)(unaff_EBP + 0x18) = &local_2d4;
      piStack_2dc = (int *)0x792215;
      local_2d4 = extraout_ECX_07;
      FUN_00433bdf();
      puStack_2d8 = *(undefined4 **)(unaff_EBP + 0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      piStack_2dc = (int *)0x792224;
      piStack_2dc = (int *)FUN_004091f9();
      FUN_00424e82();
      FUN_0042d941();
      *(undefined1 *)(unaff_EBP + -4) = 0;
LAB_007926f6:
      FUN_004125d9();
    }
    else if ((int)pcVar1 < 0x12a192) {
      if (pcVar1 == (code *)0x12a191) {
LAB_00790dd0:
        iVar7 = (**(code **)(*extraout_ECX + 4))();
        pcStack_2c8 = (code *)(iVar7 + 0x3a8);
        iStack_2cc = 0x790de8;
        iVar7 = FUN_00413367();
        if (iVar7 < 0x127a81) {
          if (iVar7 < 0x127a7f) {
            if (0x127a7a < iVar7) {
              if (iVar7 < 0x127a7d) {
                uVar11 = 2;
              }
              else if (iVar7 < 0x127a7f) {
                uVar11 = 1;
              }
            }
          }
          else {
            uVar11 = 3;
          }
        }
        else if ((0x12a18a < iVar7) && (iVar7 < 0x12a18d)) {
          uVar11 = 5;
        }
        FUN_0087a1b0();
        iStack_2d0 = 0x790e3d;
        iStack_2cc = uVar11;
        pcStack_2c8 = (code *)&stack0xfffffd40;
        FUN_0087a25a();
        pcStack_2c8 = (code *)0x790e49;
        FUN_00402e8e();
        pcStack_2c8 = (code *)&DAT_00965698;
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
        iStack_2cc = 0x790e5e;
        FUN_0049e7d6();
        pcStack_2c8 = (code *)0x790e65;
        FUN_00432dcc();
        FUN_00402fa6();
        pcStack_2c8 = (code *)0x7fffffff;
        iStack_2cc = ((*(int *)(unaff_EBP + 0x10) + 10) * 1000) / 0x10;
        iStack_2d0 = 0x10;
        local_2d4 = extraout_ECX + 0x34f;
        *(int **)(unaff_EBP + 0x10) = &iStack_2d0;
        puStack_2d8 = (undefined4 *)0x790e99;
        FUN_0041160e();
        puStack_2d8 = &local_2d4;
        *(int ***)(unaff_EBP + 0x18) = &local_2d4;
        *(undefined1 *)(unaff_EBP + -4) = 0x29;
        piStack_2dc = (int *)0x790eab;
        local_2d4 = extraout_ECX_02;
        FUN_00486ada();
      }
      else {
        if (pcVar1 == (code *)0x3ec) goto LAB_00792f4c;
        if (pcVar1 == (code *)0xf462b) {
LAB_00791185:
          pcStack_2c8 = (code *)0x791195;
          FUN_00403191();
          pcStack_2c8 = (code *)0x0;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          iStack_2cc = 0x7911a7;
          FUN_004031b7();
          bVar12 = DAT_0097c1ac == 0;
          *(undefined1 *)(unaff_EBP + -4) = 2;
          if (bVar12) {
            pcStack_2c8 = (code *)0x7911bd;
            FUN_00878dfb();
          }
          pcStack_2c8 = (code *)(unaff_EBP + -0x180);
          iStack_2cc = 0;
          iStack_2d0 = 0;
          local_2d4 = (int *)0x0;
          puStack_2d8 = (undefined4 *)0x0;
          piStack_2dc = (int *)0x0;
          FUN_0042a39f(unaff_EBP + 0x18);
          *(undefined1 *)(unaff_EBP + -4) = 5;
          pcStack_2c8 = (code *)0x7911ef;
          iVar7 = FUN_00402bc3();
          if (iVar7 < 0) {
            pcStack_2c8 = (code *)0x7911fa;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 4;
          pcStack_2c8 = (code *)0x79120a;
          iVar7 = FUN_00402bc3();
          if (iVar7 < 0) {
            pcStack_2c8 = (code *)0x791215;
            FUN_00878dfb();
          }
          pcStack_2c8 = (code *)0x791223;
          puVar8 = (undefined4 *)FUN_00486ada();
          pcStack_2c8 = (code *)*puVar8;
          iStack_2cc = 0x791233;
          FUN_0040ee87();
          piVar5 = *(int **)(unaff_EBP + 0x18);
          *(undefined1 *)(unaff_EBP + -4) = 7;
          if (piVar5 == (int *)0x0) {
            pcStack_2c8 = (code *)0x791248;
            FUN_00878dfb();
            piVar5 = *(int **)(unaff_EBP + 0x18);
          }
          iVar7 = *piVar5;
          iStack_2d0 = *(int *)(unaff_EBP + -0x1c0);
          iStack_2cc = *(int *)(unaff_EBP + -0x1bc);
          pcStack_2c8 = *(code **)(unaff_EBP + -0x1b8);
          *(int **)(unaff_EBP + 0xc) = piVar5;
          puStack_2d8 = (undefined4 *)0x791263;
          local_2d4 = piVar5;
          iVar7 = (**(code **)(iVar7 + 100))();
          if (iVar7 < 0) {
            puStack_2d8 = (undefined4 *)&DAT_00963de8;
            piStack_2dc = *(int **)(unaff_EBP + 0xc);
            FUN_00878e09(iVar7);
          }
          puStack_2d8 = (undefined4 *)(unaff_EBP + -0x1c0);
          *(undefined1 *)(unaff_EBP + -4) = 6;
          piStack_2dc = (int *)0x791285;
          puStack_2d8 = (undefined4 *)FUN_00402bc3();
          if ((int)puStack_2d8 < 0) {
            piStack_2dc = (int *)0x791290;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 4;
          puStack_2d8 = (undefined4 *)0x79129f;
          FUN_004125d9();
          if (*(int *)(unaff_EBP + 0x18) == 0) {
            puStack_2d8 = (undefined4 *)0x80004003;
            piStack_2dc = (int *)0x7912af;
            FUN_00878dfb();
          }
          piVar5 = *(int **)(unaff_EBP + 0x18);
          puStack_2d8 = (undefined4 *)0xc00614a4;
          piStack_2dc = piVar5;
          iVar7 = (**(code **)(*piVar5 + 0xb4))();
          if (iVar7 < 0) {
            FUN_00878e09(iVar7,piVar5,&DAT_00963df8);
          }
          if (*(int *)(unaff_EBP + 0x18) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar5 = *(int **)(unaff_EBP + 0x18);
          iVar7 = (**(code **)(*piVar5 + 0xe0))(piVar5,0xffffffff);
          if (iVar7 < 0) {
            FUN_00878e09(iVar7,piVar5,&DAT_00963df8);
          }
          iVar7 = extraout_ECX[0x34f];
          *(undefined4 *)(unaff_EBP + 0xc) = 0x7fffffff;
          *(undefined4 *)(unaff_EBP + -0x20) = 0x7fffffff;
          *(undefined4 *)(unaff_EBP + -0x24) = 0x80000000;
          *(undefined4 *)(unaff_EBP + -0x10) = 0x80000000;
          if (iVar7 == 0) {
            FUN_00878dfb(0x80004003);
          }
          uVar11 = FUN_00424ee1();
          *(undefined4 *)(unaff_EBP + -0x20) = uVar11;
          if (extraout_ECX[0x34f] == 0) {
            FUN_00878dfb(0x80004003);
          }
          uVar11 = FUN_00424f08();
          *(undefined4 *)(unaff_EBP + 0xc) = uVar11;
          if (extraout_ECX[0x34f] == 0) {
            FUN_00878dfb(0x80004003);
          }
          iVar7 = extraout_ECX[0x34f];
          *(int *)(unaff_EBP + -0x1c) = iVar7;
          if (iVar7 == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar5 = (int *)FUN_0042bc90(unaff_EBP + -0x100);
          iVar7 = *piVar5;
          *(undefined1 *)(unaff_EBP + -4) = 8;
          if (iVar7 == 0) {
            FUN_00878dfb(0x80004003);
          }
          iVar7 = FUN_00424ee1();
          iVar9 = FUN_00424ee1();
          if (-0x80000000 <= iVar7 + iVar9) {
            *(int *)(unaff_EBP + -0x10) = iVar7 + iVar9;
          }
          *(undefined1 *)(unaff_EBP + -4) = 4;
          FUN_004125d9();
          if (extraout_ECX[0x34f] == 0) {
            FUN_00878dfb(0x80004003);
          }
          iVar7 = extraout_ECX[0x34f];
          *(int *)(unaff_EBP + -0x1c) = iVar7;
          if (iVar7 == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar5 = (int *)FUN_0042bc90(unaff_EBP + -0x108);
          iVar7 = *piVar5;
          *(undefined1 *)(unaff_EBP + -4) = 9;
          if (iVar7 == 0) {
            FUN_00878dfb(0x80004003);
          }
          iVar7 = FUN_00424f08();
          iVar9 = FUN_00424f08();
          if (-0x80000000 <= iVar7 + iVar9) {
            *(int *)(unaff_EBP + -0x24) = iVar7 + iVar9;
          }
          *(undefined1 *)(unaff_EBP + -4) = 4;
          FUN_004125d9();
          if (extraout_ECX[0x34e] == 0) {
            FUN_00878dfb(0x80004003);
          }
          iVar7 = FUN_00424ee1();
          if (iVar7 <= *(int *)(unaff_EBP + -0x20)) {
            *(int *)(unaff_EBP + -0x20) = iVar7;
          }
          if (extraout_ECX[0x34e] == 0) {
            FUN_00878dfb(0x80004003);
          }
          iVar7 = FUN_00424f08();
          if (iVar7 <= *(int *)(unaff_EBP + 0xc)) {
            *(int *)(unaff_EBP + 0xc) = iVar7;
          }
          if (extraout_ECX[0x34e] == 0) {
            FUN_00878dfb(0x80004003);
          }
          if (extraout_ECX[0x34e] == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar5 = (int *)FUN_0042bc90(unaff_EBP + -0x110);
          iVar7 = *piVar5;
          *(undefined1 *)(unaff_EBP + -4) = 10;
          if (iVar7 == 0) {
            FUN_00878dfb(0x80004003);
          }
          iVar7 = FUN_00424ee1();
          iVar9 = FUN_00424ee1();
          if (*(int *)(unaff_EBP + -0x10) <= iVar7 + iVar9) {
            *(int *)(unaff_EBP + -0x10) = iVar7 + iVar9;
          }
          *(undefined1 *)(unaff_EBP + -4) = 4;
          FUN_004125d9();
          if (extraout_ECX[0x34e] == 0) {
            FUN_00878dfb(0x80004003);
          }
          if (extraout_ECX[0x34e] == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar5 = (int *)FUN_0042bc90(unaff_EBP + -0x118);
          iVar7 = *piVar5;
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          if (iVar7 == 0) {
            FUN_00878dfb(0x80004003);
          }
          iVar7 = FUN_00424f08();
          iVar9 = FUN_00424f08();
          if (*(int *)(unaff_EBP + -0x24) <= iVar7 + iVar9) {
            *(int *)(unaff_EBP + -0x24) = iVar7 + iVar9;
          }
          FUN_004125d9();
          *(undefined4 *)(unaff_EBP + 0x10) = 0;
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          puVar8 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x120,0x3af);
          uVar11 = *puVar8;
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          FUN_0040381b(uVar11,unaff_EBP + 0x10,0);
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          if (*(int *)(unaff_EBP + -0x120) != 0) {
            FUN_00403384(*(int *)(unaff_EBP + -0x120) + -0xc);
          }
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          FUN_00403191(&DAT_00980690);
          piVar5 = *(int **)(unaff_EBP + 0x10);
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          if (piVar5 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar5 = *(int **)(unaff_EBP + 0x10);
          }
          iVar7 = *piVar5;
          *(int **)(unaff_EBP + -0x1c) = piVar5;
          iVar7 = (**(code **)(iVar7 + 0x2c))
                            (piVar5,*(int *)(unaff_EBP + -0x10) - *(int *)(unaff_EBP + -0x20),
                             *(int *)(unaff_EBP + -0x24) - *(int *)(unaff_EBP + 0xc),
                             *(undefined4 *)(unaff_EBP + -0x1e0),*(undefined4 *)(unaff_EBP + -0x1dc)
                             ,*(undefined4 *)(unaff_EBP + -0x1d8),
                             *(undefined4 *)(unaff_EBP + -0x1d4),*(undefined4 *)(unaff_EBP + -0x140)
                             ,*(undefined4 *)(unaff_EBP + -0x13c),
                             *(undefined4 *)(unaff_EBP + -0x138),*(undefined4 *)(unaff_EBP + -0x134)
                            );
          if (iVar7 < 0) {
            FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963cc8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          iVar7 = FUN_00402bc3();
          if (iVar7 < 0) {
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          iVar7 = FUN_00402bc3();
          if (iVar7 < 0) {
            FUN_00878dfb();
          }
          if (*(int *)(unaff_EBP + 0x10) == 0) {
            FUN_00878dfb();
          }
          piVar5 = *(int **)(unaff_EBP + 0x10);
          iVar7 = (**(code **)(*piVar5 + 0x70))(piVar5,-*(int *)(unaff_EBP + -0x20));
          if (iVar7 < 0) {
            FUN_00878e09(iVar7,piVar5,&DAT_00963cc8);
          }
          if (*(int *)(unaff_EBP + 0x10) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar5 = *(int **)(unaff_EBP + 0x10);
          iVar7 = (**(code **)(*piVar5 + 0x78))(piVar5,-*(int *)(unaff_EBP + 0xc));
          if (iVar7 < 0) {
            FUN_00878e09(iVar7,piVar5,&DAT_00963cc8);
          }
          FUN_004031b7(0xff,3);
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          FUN_004031b7(0,3);
          iVar7 = extraout_ECX[0x34f];
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          if (iVar7 == 0) {
            FUN_00878dfb(0x80004003);
          }
          puVar8 = (undefined4 *)FUN_00425067(unaff_EBP + -0x128,unaff_EBP + -0x220);
          iVar7 = extraout_ECX[0x34f];
          uVar11 = *puVar8;
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          *(undefined4 *)(unaff_EBP + -0x24) = uVar11;
          if (iVar7 == 0) {
            FUN_00878dfb(0x80004003);
          }
          iVar7 = extraout_ECX[0x34f];
          *(int *)(unaff_EBP + -0x1c) = iVar7;
          if (iVar7 == 0) {
            FUN_00878dfb(0x80004003);
          }
          if (*(int *)(unaff_EBP + 0x10) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar5 = *(int **)(unaff_EBP + 0x10);
          *(int **)(unaff_EBP + -0x10) = piVar5;
          iVar7 = FUN_00424f08();
          *(int *)(unaff_EBP + -0x1c) = iVar7 - *(int *)(unaff_EBP + 0xc);
          iVar7 = FUN_00424ee1();
          iVar7 = (**(code **)(*piVar5 + 0x80))
                            (*(undefined4 *)(unaff_EBP + -0x10),iVar7 - *(int *)(unaff_EBP + -0x20),
                             *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x24),
                             *(undefined4 *)(unaff_EBP + -0x250),*(undefined4 *)(unaff_EBP + -0x24c)
                             ,*(undefined4 *)(unaff_EBP + -0x248),
                             *(undefined4 *)(unaff_EBP + -0x244));
          if (iVar7 < 0) {
            FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
          }
          FUN_004125e6();
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          iVar7 = FUN_00402bc3(unaff_EBP + -0x220);
          if (iVar7 < 0) {
            FUN_00878dfb(iVar7);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          iVar7 = FUN_00402bc3(unaff_EBP + -0x250);
          if (iVar7 < 0) {
            FUN_00878dfb(iVar7);
          }
          if (extraout_ECX[0x34d] == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar5 = (int *)FUN_004113e5(unaff_EBP + -0x130);
          iVar7 = *piVar5;
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          if (iVar7 == 0) {
            FUN_00878dfb(0x80004003);
          }
          iVar7 = FUN_00404a94();
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          FUN_004125d9();
          if (0 < iVar7) {
            FUN_004031b7(0xff,3);
            *(undefined1 *)(unaff_EBP + -4) = 0x14;
            FUN_004031b7(0,3);
            iVar7 = *(int *)(unaff_EBP + -0x28);
            iVar9 = *(int *)(iVar7 + 0xd34);
            *(undefined1 *)(unaff_EBP + -4) = 0x15;
            if (iVar9 == 0) {
              FUN_00878dfb(0x80004003);
            }
            puVar8 = (undefined4 *)FUN_00425067(unaff_EBP + -0xd4,unaff_EBP + -0x210);
            iVar9 = *(int *)(iVar7 + 0xd28);
            uVar11 = *puVar8;
            *(undefined1 *)(unaff_EBP + -4) = 0x16;
            *(undefined4 *)(unaff_EBP + -0x14) = uVar11;
            if (iVar9 == 0) {
              FUN_00878dfb(0x80004003);
            }
            iVar9 = *(int *)(iVar7 + 0xd34);
            *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(iVar7 + 0xd28);
            if (iVar9 == 0) {
              FUN_00878dfb(0x80004003);
            }
            iVar9 = *(int *)(iVar7 + 0xd28);
            *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(iVar7 + 0xd34);
            if (iVar9 == 0) {
              FUN_00878dfb(0x80004003);
            }
            if (*(int *)(iVar7 + 0xd34) == 0) {
              FUN_00878dfb(0x80004003);
            }
            *(undefined4 *)(unaff_EBP + -0x5c) = *(undefined4 *)(iVar7 + 0xd34);
            if (*(int *)(unaff_EBP + 0x10) == 0) {
              FUN_00878dfb(0x80004003);
            }
            piVar5 = *(int **)(unaff_EBP + 0x10);
            *(int **)(unaff_EBP + -0x10) = piVar5;
            iVar9 = FUN_00424f08();
            iVar7 = *(int *)(unaff_EBP + 0xc);
            iVar10 = FUN_00424f08();
            *(int *)(unaff_EBP + -0x1c) = (iVar9 - iVar7) + iVar10;
            iVar10 = FUN_00424ee1();
            iVar7 = *(int *)(unaff_EBP + 0x14);
            iVar9 = *(int *)(unaff_EBP + -0x20);
            iVar6 = FUN_00424ee1();
            iVar7 = (**(code **)(*piVar5 + 0x80))
                              (*(undefined4 *)(unaff_EBP + -0x10),
                               (iVar10 * ((-(uint)(iVar7 != 0) & 0xfffffffe) + 1) - iVar9) + iVar6,
                               *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x14)
                               ,*(undefined4 *)(unaff_EBP + -0x170),
                               *(undefined4 *)(unaff_EBP + -0x16c),
                               *(undefined4 *)(unaff_EBP + -0x168),
                               *(undefined4 *)(unaff_EBP + -0x164));
            if (iVar7 < 0) {
              FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
            }
            FUN_004125e6();
            *(undefined1 *)(unaff_EBP + -4) = 0x14;
            iVar7 = FUN_00402bc3(unaff_EBP + -0x210);
            if (iVar7 < 0) {
              FUN_00878dfb(iVar7);
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            iVar7 = FUN_00402bc3(unaff_EBP + -0x170);
            if (iVar7 < 0) {
              FUN_00878dfb(iVar7);
            }
          }
          FUN_004031b7(0xff,3);
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          FUN_004031b7(0,3);
          iVar7 = *(int *)(unaff_EBP + -0x28);
          iVar9 = *(int *)(iVar7 + 0xd38);
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          if (iVar9 == 0) {
            FUN_00878dfb(0x80004003);
          }
          puVar8 = (undefined4 *)FUN_00425067(unaff_EBP + -0x104,unaff_EBP + -0x240);
          iVar9 = *(int *)(iVar7 + 0xd38);
          uVar11 = *puVar8;
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          *(undefined4 *)(unaff_EBP + -0x14) = uVar11;
          if (iVar9 == 0) {
            FUN_00878dfb(0x80004003);
          }
          if (*(int *)(iVar7 + 0xd38) == 0) {
            FUN_00878dfb(0x80004003);
          }
          if (*(int *)(unaff_EBP + 0x10) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar5 = *(int **)(unaff_EBP + 0x10);
          *(int **)(unaff_EBP + -0x10) = piVar5;
          iVar9 = FUN_00424f08();
          iVar7 = *(int *)(unaff_EBP + 0xc);
          iVar10 = FUN_00424ee1();
          iVar7 = (**(code **)(*piVar5 + 0x80))
                            (*(undefined4 *)(unaff_EBP + -0x10),iVar10 - *(int *)(unaff_EBP + -0x20)
                             ,iVar9 - iVar7,*(undefined4 *)(unaff_EBP + -0x14),
                             *(undefined4 *)(unaff_EBP + -400),*(undefined4 *)(unaff_EBP + -0x18c),
                             *(undefined4 *)(unaff_EBP + -0x188),*(undefined4 *)(unaff_EBP + -0x184)
                            );
          if (iVar7 < 0) {
            FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
          }
          FUN_004125e6();
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          iVar7 = FUN_00402bc3(unaff_EBP + -0x240);
          if (iVar7 < 0) {
            FUN_00878dfb(iVar7);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          iVar7 = FUN_00402bc3(unaff_EBP + -400);
          if (iVar7 < 0) {
            FUN_00878dfb(iVar7);
          }
          FUN_004031b7(0xfffffed4,3);
          *(undefined1 *)(unaff_EBP + -4) = 0x1a;
          FUN_004031b7(0xffffff9c,3);
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          FUN_004031b7(0,3);
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          FUN_004031b7(0xd4,3);
          *(undefined1 *)(unaff_EBP + -4) = 0x1d;
          FUN_004031b7(400,3);
          *(undefined1 *)(unaff_EBP + -4) = 0x1e;
          if (*(int *)(unaff_EBP + 0x18) == 0) {
            FUN_00878dfb(0x80004003);
          }
          FUN_004250ac(unaff_EBP + -0x290,*(undefined4 *)(unaff_EBP + 0x10),unaff_EBP + -0x230,
                       unaff_EBP + -0x1b0,unaff_EBP + -0x260,unaff_EBP + -0x1d0,unaff_EBP + -0x280);
          iVar7 = FUN_00402bc3(unaff_EBP + -0x290);
          if (iVar7 < 0) {
            FUN_00878dfb(iVar7);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1d;
          iVar7 = FUN_00402bc3(unaff_EBP + -0x230);
          if (iVar7 < 0) {
            FUN_00878dfb(iVar7);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          iVar7 = FUN_00402bc3(unaff_EBP + -0x1b0);
          if (iVar7 < 0) {
            FUN_00878dfb(iVar7);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          iVar7 = FUN_00402bc3(unaff_EBP + -0x260);
          if (iVar7 < 0) {
            FUN_00878dfb(iVar7);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1a;
          iVar7 = FUN_00402bc3(unaff_EBP + -0x1d0);
          if (iVar7 < 0) {
            FUN_00878dfb(iVar7);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          iVar7 = FUN_00402bc3(unaff_EBP + -0x280);
          if (iVar7 < 0) {
            FUN_00878dfb(iVar7);
          }
          if (*(int *)(unaff_EBP + 0x18) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar5 = *(int **)(unaff_EBP + 0x18);
          iVar7 = (**(code **)(*piVar5 + 0xd8))(piVar5,*(undefined4 *)(unaff_EBP + 0x14));
          if (iVar7 < 0) {
            FUN_00878e09(iVar7,piVar5,&DAT_00963df8);
          }
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x1f;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x20;
          if (*(int *)(unaff_EBP + 0x18) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar5 = *(int **)(unaff_EBP + 0x18);
          iVar7 = (**(code **)(*piVar5 + 0x110))
                            (piVar5,0,*(undefined4 *)(unaff_EBP + -0x1f0),
                             *(undefined4 *)(unaff_EBP + -0x1ec),*(undefined4 *)(unaff_EBP + -0x1e8)
                             ,*(undefined4 *)(unaff_EBP + -0x1e4),
                             *(undefined4 *)(unaff_EBP + -0x270),*(undefined4 *)(unaff_EBP + -0x26c)
                             ,*(undefined4 *)(unaff_EBP + -0x268),
                             *(undefined4 *)(unaff_EBP + -0x264));
          if (iVar7 < 0) {
            iStack_2d0 = 0x791cdd;
            iStack_2cc = iVar7;
            pcStack_2c8 = (code *)piVar5;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1f;
          pcStack_2c8 = (code *)0x791ced;
          iVar7 = FUN_00402bc3();
          if (iVar7 < 0) {
            pcStack_2c8 = (code *)0x791cf8;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          pcStack_2c8 = (code *)0x791d08;
          iVar7 = FUN_00402bc3();
          if (iVar7 < 0) {
            pcStack_2c8 = (code *)0x791d13;
            FUN_00878dfb();
          }
          *(undefined1 **)(unaff_EBP + 0x14) = &stack0xfffffd3c;
          pcStack_2c8 = (code *)0x791d23;
          FUN_00424ed4();
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          pcStack_2c8 = (code *)0x791d2c;
          FUN_00424e82();
          pcStack_2c8 = (code *)0x791d33;
          FUN_00427af9();
          FUN_004125e6();
          *(undefined1 *)(unaff_EBP + -4) = 0;
          FUN_00412600();
          goto LAB_0079275b;
        }
        if ((int)pcVar1 < 0x10f3db) {
LAB_00790c15:
          if ((*(int **)(unaff_EBP + -0x18) == (int *)0x0) ||
             (iVar7 = **(int **)(unaff_EBP + -0x18), iVar7 == 0)) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(uint *)(iVar7 + -4) >> 1;
          }
          if (uVar4 == 0) goto LAB_0079275b;
          pcStack_2c8 = *(code **)(unaff_EBP + 0x18);
          iStack_2cc = ((*(int *)(unaff_EBP + 0x10) + 10) * 1000) / 0x10;
          iStack_2d0 = 0x10;
          local_2d4 = extraout_ECX + 0x34f;
          *(int **)(unaff_EBP + 0x10) = &iStack_2d0;
          puStack_2d8 = (undefined4 *)0x79272d;
          FUN_0041160e();
          puStack_2d8 = &local_2d4;
          *(int ***)(unaff_EBP + 0x18) = &local_2d4;
          *(undefined1 *)(unaff_EBP + -4) = 0x5c;
          piStack_2dc = (int *)0x79273f;
          local_2d4 = extraout_ECX_09;
          FUN_00486ada();
          goto LAB_0079273f;
        }
        if ((int)pcVar1 < 0x10f3df) {
          iVar7 = (**(code **)(*extraout_ECX + 4))();
          pcStack_2c8 = (code *)(iVar7 + 0x36c);
          iStack_2cc = 0x790cff;
          iVar7 = FUN_00413367();
          iVar7 = iVar7 + -1;
          *(int *)(unaff_EBP + 0x14) = iVar7;
          if ((0 < iVar7) && (iVar7 < 0xb)) {
            *(undefined4 *)(unaff_EBP + 0x18) = 0;
            pcStack_2c8 = (code *)(unaff_EBP + -0xe8);
            *(undefined1 *)(unaff_EBP + -4) = 0x22;
            iStack_2cc = 0x790d33;
            piVar5 = (int *)FUN_00679d86();
            iStack_2d0 = *piVar5;
            iStack_2cc = (int)pcVar1 / 10000;
            *(undefined1 *)(unaff_EBP + -4) = 0x23;
            local_2d4 = (int *)(unaff_EBP + 0x18);
            puStack_2d8 = (undefined4 *)0x790d52;
            pcStack_2c8 = pcVar1;
            FUN_0041354c();
            *(undefined1 *)(unaff_EBP + -4) = 0x22;
            if (*(int *)(unaff_EBP + -0xe8) != 0) {
              pcStack_2c8 = (code *)0x790d6c;
              FUN_00403384();
            }
            pcStack_2c8 = (code *)0xffffffff;
            iStack_2cc = ((*(int *)(unaff_EBP + 0x10) + 10) * 1000) / 0x10;
            iStack_2d0 = 0x10;
            local_2d4 = extraout_ECX + 0x34f;
            *(int **)(unaff_EBP + 0x10) = &iStack_2d0;
            puStack_2d8 = (undefined4 *)0x790d96;
            FUN_0041160e();
            puStack_2d8 = &local_2d4;
            *(int ***)(unaff_EBP + 0x14) = &local_2d4;
            *(undefined1 *)(unaff_EBP + -4) = 0x24;
            piStack_2dc = (int *)0x790da8;
            local_2d4 = extraout_ECX_01;
            FUN_00486ada();
            puStack_2d8 = (undefined4 *)0x0;
            *(undefined1 *)(unaff_EBP + -4) = 0x22;
            piStack_2dc = (int *)0x790db5;
            piStack_2dc = (int *)FUN_00411641();
            FUN_00424e82();
            FUN_0042d941();
            iVar7 = *(int *)(unaff_EBP + 0x18);
            *(undefined1 *)(unaff_EBP + -4) = 0;
            goto LAB_00791170;
          }
          goto LAB_0079275b;
        }
        if (pcVar1 != (code *)0x111af0) {
          if (pcVar1 == (code *)0x127a7a) goto LAB_00790dd0;
          goto LAB_00790c15;
        }
        pcStack_2c8 = (code *)0x790c3f;
        iVar7 = FUN_0044dddc();
        if ((iVar7 == 0x1e) || (iVar7 == 0x1f)) {
          pcStack_2c8 = (code *)0x790c8c;
          FUN_00432cfc();
          *(undefined1 *)(unaff_EBP + -4) = 0x2b;
          pcStack_2c8 = (code *)0x790c9c;
          FUN_00432dcc();
LAB_00790c9f:
          FUN_00402fa6();
        }
        else if ((iVar7 == 0x28) || (iVar7 == 0x29)) {
          pcStack_2c8 = (code *)0x790c64;
          FUN_00432cfc();
          *(undefined1 *)(unaff_EBP + -4) = 0x2c;
          pcStack_2c8 = (code *)0x790c77;
          FUN_00432dcc();
          goto LAB_00790c9f;
        }
        pcStack_2c8 = (code *)0x7fffffff;
        iStack_2cc = ((*(int *)(unaff_EBP + 0x10) + 10) * 1000) / 0x10;
        iStack_2d0 = 0x10;
        local_2d4 = extraout_ECX + 0x34f;
        *(int **)(unaff_EBP + 0x10) = &iStack_2d0;
        puStack_2d8 = (undefined4 *)0x790cd0;
        FUN_0041160e();
        puStack_2d8 = &local_2d4;
        *(int ***)(unaff_EBP + 0x18) = &local_2d4;
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
        piStack_2dc = (int *)0x790ce2;
        local_2d4 = extraout_ECX_00;
        FUN_00486ada();
      }
LAB_0079273f:
      puStack_2d8 = *(undefined4 **)(unaff_EBP + 0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      piStack_2dc = (int *)0x79274e;
      piStack_2dc = (int *)FUN_004091f9();
      FUN_00424e82();
      FUN_0042d941();
    }
    else {
      if ((int)pcVar1 < 0x140119) goto LAB_00790c15;
      if ((int)pcVar1 < 0x14011b) {
        pcStack_2c8 = *(code **)(unaff_EBP + 0xc);
        iStack_2cc = 0x791d59;
        FUN_006509a1();
        pcStack_2c8 = (code *)0x791d60;
        pcStack_2c8 = (code *)FUN_00792f6b();
        iStack_2cc = ((*(int *)(unaff_EBP + 0x10) + 10) * 1000) / 0x10;
        iStack_2d0 = 0x10;
        local_2d4 = extraout_ECX + 0x34f;
        *(int **)(unaff_EBP + 0x10) = &iStack_2d0;
        puStack_2d8 = (undefined4 *)0x791d86;
        FUN_0041160e();
        puStack_2d8 = &local_2d4;
        *(int ***)(unaff_EBP + 0x18) = &local_2d4;
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        piStack_2dc = (int *)0x791d98;
        local_2d4 = extraout_ECX_05;
        FUN_00486ada();
        goto LAB_0079273f;
      }
      if (pcVar1 == (code *)0x1e886b) goto LAB_00791185;
      if (pcVar1 != (code *)0x20361a) {
        bVar12 = pcVar1 == (code *)&DAT_004c4f2b;
        goto LAB_00791dd2;
      }
      if ((*(int **)(unaff_EBP + -0x18) == (int *)0x0) ||
         (iVar7 = **(int **)(unaff_EBP + -0x18), iVar7 == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(iVar7 + -4) >> 1;
      }
      if (uVar4 != 0) {
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        *(undefined4 *)(unaff_EBP + -0x20) = 0xffffffff;
        *(undefined1 *)(unaff_EBP + -4) = 0x4e;
        if (-2 < *(int *)(unaff_EBP + 0x18)) {
          *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x28) + 0xd3c;
          do {
            if (-1 < *(int *)(unaff_EBP + -0x20)) {
              FUN_0087a1b0();
              iStack_2cc = *(undefined4 *)(unaff_EBP + -0x20);
              iStack_2d0 = 0x790f41;
              pcStack_2c8 = (code *)&stack0xfffffd40;
              FUN_0087a25a();
            }
            if (*(undefined4 **)(unaff_EBP + -0x18) == (undefined4 *)0x0) {
              uVar11 = 0;
            }
            else {
              uVar11 = **(undefined4 **)(unaff_EBP + -0x18);
            }
            pcStack_2c8 = (code *)(unaff_EBP + -0xf8);
            iStack_2cc = 0x790f70;
            puVar8 = (undefined4 *)FUN_00679d86();
            iStack_2cc = *puVar8;
            iStack_2d0 = unaff_EBP + -0x10;
            *(undefined1 *)(unaff_EBP + -4) = 0x4f;
            local_2d4 = (int *)0x790f82;
            pcStack_2c8 = (code *)uVar11;
            FUN_0041354c();
            *(undefined1 *)(unaff_EBP + -4) = 0x4e;
            iVar7 = extraout_ECX_03;
            if (*(int *)(unaff_EBP + -0xf8) != 0) {
              iVar7 = *(int *)(unaff_EBP + -0xf8) + -0xc;
              pcStack_2c8 = (code *)0x790f9c;
              FUN_00403384();
            }
            pcStack_2c8 = (code *)0xff;
            iStack_2cc = 3;
            *(int **)(unaff_EBP + -0x34) = &iStack_2d0;
            local_2d4 = *(int **)(unaff_EBP + -0x24);
            puStack_2d8 = (undefined4 *)0x790fb3;
            iStack_2d0 = iVar7;
            FUN_0041160e();
            local_2d4 = (int *)(unaff_EBP + -0xe0);
            *(undefined1 *)(unaff_EBP + -4) = 0x50;
            puStack_2d8 = (undefined4 *)0x790fc6;
            FUN_00486ada();
            *(undefined1 *)(unaff_EBP + -4) = 0x51;
            local_2d4 = (int *)0x790fd1;
            FUN_00424df4();
            local_2d4 = (int *)0x790fd8;
            local_2d4 = (int *)FUN_00404abb();
            puStack_2d8 = (undefined4 *)(unaff_EBP + -0xd0);
            piStack_2dc = (int *)0x790fe8;
            FUN_00486ada();
            *(undefined1 *)(unaff_EBP + -4) = 0x52;
            puStack_2d8 = (undefined4 *)0x790ff3;
            FUN_00424df4();
            puStack_2d8 = (undefined4 *)0x790ffa;
            puStack_2d8 = (undefined4 *)FUN_00404a94();
            *(int ***)(unaff_EBP + -0x14) = &piStack_2dc;
            piStack_2dc = extraout_ECX_04;
            FUN_00424dd7(0);
            *(undefined1 *)(unaff_EBP + -4) = 0x55;
            uVar11 = FUN_00411641(*(undefined4 *)(unaff_EBP + 0x14));
            puVar8 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x124,uVar11);
            *(undefined4 *)(unaff_EBP + 0xc) = *puVar8;
            FUN_00424ed4();
            FUN_00412600();
            FUN_004125d9();
            *(undefined1 *)(unaff_EBP + -4) = 0x57;
            FUN_004125d9();
            if (*(int *)(unaff_EBP + 0xc) == 0) {
              FUN_00412600();
              break;
            }
            iVar7 = *(int *)(unaff_EBP + 0x10);
            pcStack_2c8 = (code *)0x791085;
            FUN_00403191();
            *(undefined1 *)(unaff_EBP + -4) = 0x59;
            iStack_2cc = 0x791097;
            pcStack_2c8 = (code *)(((iVar7 + 10) * 1000) / 0x10);
            FUN_004031b7();
            piVar5 = *(int **)(unaff_EBP + 0xc);
            *(undefined1 *)(unaff_EBP + -4) = 0x5a;
            if (piVar5 == (int *)0x0) {
              pcStack_2c8 = (code *)0x7910ac;
              FUN_00878dfb();
              piVar5 = *(int **)(unaff_EBP + 0xc);
            }
            iStack_2d0 = *(int *)(unaff_EBP + -0x160);
            iStack_2cc = *(int *)(unaff_EBP + -0x15c);
            iVar7 = *piVar5;
            pcStack_2c8 = *(code **)(unaff_EBP + -0x158);
            piStack_2dc = *(int **)(unaff_EBP + -0x1fc);
            puStack_2d8 = *(undefined4 **)(unaff_EBP + -0x1f8);
            *(int **)(unaff_EBP + -0x1c) = piVar5;
            local_2d4 = *(int **)(unaff_EBP + -500);
            iVar7 = (**(code **)(iVar7 + 0x110))(piVar5,0,*(undefined4 *)(unaff_EBP + -0x200));
            if (iVar7 < 0) {
              pcStack_2c8 = *(code **)(unaff_EBP + -0x1c);
              iStack_2d0 = 0x7910ec;
              iStack_2cc = iVar7;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x59;
            pcStack_2c8 = (code *)0x7910fc;
            iVar7 = FUN_00402bc3();
            if (iVar7 < 0) {
              pcStack_2c8 = (code *)0x791107;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x57;
            pcStack_2c8 = (code *)0x791117;
            iVar7 = FUN_00402bc3();
            if (iVar7 < 0) {
              pcStack_2c8 = (code *)0x791122;
              FUN_00878dfb();
            }
            *(undefined1 **)(unaff_EBP + -0x34) = &stack0xfffffd3c;
            pcStack_2c8 = (code *)0x791132;
            FUN_00424ed4();
            *(undefined1 *)(unaff_EBP + -4) = 0x57;
            pcStack_2c8 = (code *)0x79113b;
            FUN_00424e82();
            pcStack_2c8 = (code *)0x791142;
            FUN_00427af9();
            *(undefined1 *)(unaff_EBP + -4) = 0x4e;
            FUN_00412600();
            *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
          } while (*(int *)(unaff_EBP + -0x20) <= *(int *)(unaff_EBP + 0x18));
        }
        iVar7 = *(int *)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0;
LAB_00791170:
        if (iVar7 != 0) {
          pcStack_2c8 = (code *)0x79117f;
          FUN_00403384();
        }
      }
    }
LAB_0079275b:
    iVar7 = **(int **)(unaff_EBP + 8) / 10000;
    if (iVar7 == 0) {
      iVar9 = 0;
    }
    else if (iVar7 % 100 == 0) {
      iVar9 = 1;
    }
    else {
      iVar9 = (-(uint)(iVar7 % 10 != 0) & 0xfffffffe) + 2;
    }
    iVar10 = 0;
    *(int *)(unaff_EBP + 0xc) = iVar9;
    *(int *)(unaff_EBP + -0x2c) = iVar7 / 100;
    iVar7 = *(int *)(*(int *)(unaff_EBP + -0x28) + 0x91);
    if ((iVar7 < 0x1871d0) || (0x1871d3 < iVar7)) {
      if ((0x1871d3 < iVar7) && (iVar7 < 0x1871d8)) {
        iVar10 = 2;
      }
    }
    else {
      iVar10 = 1;
    }
    if ((0 < iVar9) && (iVar9 <= iVar10)) {
      *(undefined4 *)(unaff_EBP + 0x14) = 0;
      pcStack_2c8 = (code *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x5e;
      iStack_2cc = 0x792800;
      puVar8 = (undefined4 *)FUN_00679d86();
      iStack_2cc = *puVar8;
      pcStack_2c8 = *(code **)(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 0x5f;
      iStack_2d0 = unaff_EBP + 0x14;
      local_2d4 = (int *)0x792815;
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 0x5e;
      if (*(int *)(unaff_EBP + -0x30) != 0) {
        pcStack_2c8 = (code *)0x79282c;
        FUN_00403384();
      }
      pcStack_2c8 = (code *)0x79283b;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x60;
      pcStack_2c8 = (code *)0x792848;
      FUN_00403191();
      pcStack_2c8 = (code *)0x0;
      iStack_2cc = unaff_EBP + -0x80;
      iStack_2d0 = unaff_EBP + -0x48;
      *(undefined1 *)(unaff_EBP + -4) = 0x61;
      local_2d4 = (int *)0x79285e;
      puStack_2d8 = (undefined4 *)FUN_00411641();
      *(int ***)(unaff_EBP + -0x30) = &local_2d4;
      piStack_2dc = (int *)0x79286a;
      local_2d4 = extraout_ECX_10;
      FUN_004033a1();
      puStack_2d8 = (undefined4 *)(unaff_EBP + -0xcc);
      *(undefined1 *)(unaff_EBP + -4) = 0x61;
      piStack_2dc = (int *)0x79287a;
      FUN_00405a1d();
      piStack_2dc = (int *)0x792881;
      FUN_00402660();
      piStack_2dc = (int *)0x792888;
      FUN_00404a02();
      *(undefined1 *)(unaff_EBP + -4) = 99;
      iStack_2cc = 0x792893;
      iVar7 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x2c) = iVar7;
      *(undefined4 *)(unaff_EBP + 8) = 0;
      if (iVar7 != 0) {
        pcStack_2c8 = (code *)0x7928a9;
        iVar7 = FUN_0041a581();
        if ((iVar7 < 0) && (iVar7 != -0x7fffbffe)) {
          pcStack_2c8 = (code *)0x7928ba;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x67;
      pcStack_2c8 = (code *)0x7928ca;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        pcStack_2c8 = (code *)0x7928d5;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x66;
      pcStack_2c8 = (code *)0x7928e2;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        pcStack_2c8 = (code *)0x7928ed;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x65;
      pcStack_2c8 = (code *)0x7928fa;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        pcStack_2c8 = (code *)0x792905;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + 8) == 0) {
        FUN_004125e6();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + 0x14) != 0) {
          pcStack_2c8 = (code *)0x79292a;
          FUN_00403384();
        }
      }
      else {
        *(undefined4 *)(unaff_EBP + 0x10) = 0;
        pcStack_2c8 = (code *)(unaff_EBP + -0x2c);
        *(undefined1 *)(unaff_EBP + -4) = 0x68;
        iStack_2cc = 0x792947;
        puVar8 = (undefined4 *)FUN_00679d86();
        iStack_2cc = *puVar8;
        pcStack_2c8 = (code *)(unaff_EBP + 0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0x69;
        iStack_2d0 = 0x792958;
        FUN_00437222();
        *(undefined1 *)(unaff_EBP + -4) = 0x68;
        if (*(int *)(unaff_EBP + -0x2c) != 0) {
          pcStack_2c8 = (code *)0x79296f;
          FUN_00403384();
        }
        pcStack_2c8 = (code *)0x79297c;
        puVar8 = (undefined4 *)FUN_00486ada();
        pcStack_2c8 = (code *)*puVar8;
        iStack_2cc = 0x792989;
        FUN_0040ee87();
        local_2d4 = *(int **)(unaff_EBP + 0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0x6b;
        if (local_2d4 == (int *)0x0) {
          pcStack_2c8 = (code *)0x79299e;
          FUN_00878dfb();
          local_2d4 = *(int **)(unaff_EBP + 0x10);
        }
        iVar7 = *local_2d4;
        iStack_2d0 = *(int *)(unaff_EBP + -0x48);
        iStack_2cc = *(undefined4 *)(unaff_EBP + -0x44);
        pcStack_2c8 = *(code **)(unaff_EBP + -0x40);
        *(int **)(unaff_EBP + -0x2c) = local_2d4;
        puStack_2d8 = (undefined4 *)0x7929b6;
        iVar7 = (**(code **)(iVar7 + 100))();
        if (iVar7 < 0) {
          puStack_2d8 = (undefined4 *)&DAT_00963de8;
          piStack_2dc = *(int **)(unaff_EBP + -0x2c);
          FUN_00878e09(iVar7);
        }
        puStack_2d8 = (undefined4 *)(unaff_EBP + -0x48);
        *(undefined1 *)(unaff_EBP + -4) = 0x6a;
        piStack_2dc = (int *)0x7929d5;
        puStack_2d8 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_2d8 < 0) {
          piStack_2dc = (int *)0x7929e0;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x68;
        puStack_2d8 = (undefined4 *)0x7929ec;
        FUN_004125d9();
        puStack_2d8 = &DAT_00980690;
        piStack_2dc = (int *)0x7929f5;
        FUN_00403191();
        puStack_2d8 = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 0x6c;
        piStack_2dc = (int *)0x792a02;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x6d;
        if (*(int *)(unaff_EBP + 0x10) == 0) {
          puStack_2d8 = (undefined4 *)0x80004003;
          piStack_2dc = (int *)0x792a16;
          FUN_00878dfb();
        }
        piVar5 = *(int **)(unaff_EBP + 0x10);
        *(int **)(unaff_EBP + -0x38) = piVar5;
        puStack_2d8 = (undefined4 *)0x792a27;
        iVar7 = FUN_0043f545();
        piStack_2dc = *(int **)(unaff_EBP + -0x78);
        puStack_2d8 = *(undefined4 **)(unaff_EBP + -0x74);
        iVar7 = (**(code **)(*piVar5 + 0x90))
                          (*(undefined4 *)(unaff_EBP + -0x38),0,-0x1e - iVar7,
                           *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44),
                           *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                           *(undefined4 *)(unaff_EBP + -0x80),*(undefined4 *)(unaff_EBP + -0x7c));
        if (iVar7 < 0) {
          FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + -0x38),&DAT_00963de8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x6c;
        iVar7 = FUN_00402bc3(unaff_EBP + -0x48);
        if (iVar7 < 0) {
          FUN_00878dfb(iVar7);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x68;
        iVar7 = FUN_00402bc3(unaff_EBP + -0x80);
        if (iVar7 < 0) {
          FUN_00878dfb(iVar7);
        }
        if (*(int *)(unaff_EBP + 0xc) == 2) {
          if (*(int *)(unaff_EBP + 0x10) == 0) {
            FUN_00878dfb(0x80004003);
          }
          iVar7 = FUN_0042a378();
          FUN_004031b7(iVar7 + 300,3);
          piVar5 = *(int **)(unaff_EBP + 0x10);
          *(undefined1 *)(unaff_EBP + -4) = 0x6e;
          if (piVar5 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar5 = *(int **)(unaff_EBP + 0x10);
          }
          uVar2 = _DAT_008ea318;
          iVar7 = *piVar5;
          *(int **)(unaff_EBP + 0xc) = piVar5;
          iVar7 = (**(code **)(iVar7 + 0xa0))
                            (piVar5,uVar2,*(undefined4 *)(unaff_EBP + -0x48),
                             *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                             *(undefined4 *)(unaff_EBP + -0x3c));
          if (iVar7 < 0) {
            FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963de8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x68;
          iVar7 = FUN_00402bc3(unaff_EBP + -0x48);
          if (iVar7 < 0) {
            FUN_00878dfb(iVar7);
          }
        }
        FUN_00403191(&DAT_00980690);
        *(undefined1 *)(unaff_EBP + -4) = 0x6f;
        FUN_004031b7(0,3);
        bVar12 = DAT_0097c1ac == 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x70;
        if (bVar12) {
          FUN_00878dfb(0x80004003);
        }
        FUN_0042a39f(unaff_EBP + 0x18,0,0,0,0,5,unaff_EBP + -0x48,unaff_EBP + -0x80);
        *(undefined1 *)(unaff_EBP + -4) = 0x73;
        iVar7 = FUN_00402bc3(unaff_EBP + -0x48);
        if (iVar7 < 0) {
          FUN_00878dfb(iVar7);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x72;
        iVar7 = FUN_00402bc3(unaff_EBP + -0x80);
        if (iVar7 < 0) {
          FUN_00878dfb(iVar7);
        }
        if (*(int *)(unaff_EBP + 0x18) == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar5 = *(int **)(unaff_EBP + 0x18);
        iStack_2cc = (**(code **)(*piVar5 + 0xe0))(piVar5,0x80ffffff);
        if (iStack_2cc < 0) {
          iStack_2d0 = 0x792bd5;
          pcStack_2c8 = (code *)piVar5;
          FUN_00878e09();
        }
        pcStack_2c8 = *(code **)(unaff_EBP + 0x10);
        iStack_2cc = 0x792be2;
        FUN_0040ee87();
        *(undefined1 *)(unaff_EBP + -4) = 0x74;
        if (*(int *)(unaff_EBP + 0x18) == 0) {
          pcStack_2c8 = (code *)0x792bf2;
          FUN_00878dfb();
        }
        pcStack_2c8 = (code *)0x792bfe;
        FUN_00429607();
        *(undefined1 *)(unaff_EBP + -4) = 0x72;
        pcStack_2c8 = (code *)0x792c0b;
        iVar7 = FUN_00402bc3();
        if (iVar7 < 0) {
          pcStack_2c8 = (code *)0x792c16;
          FUN_00878dfb();
        }
        pcStack_2c8 = *(code **)(*(int *)(unaff_EBP + -0x28) + 0xd3c);
        iStack_2cc = 0x792c2a;
        FUN_0043f060();
        *(undefined1 *)(unaff_EBP + -4) = 0x75;
        pcStack_2c8 = (code *)0x792c3a;
        FUN_00424e27();
        pcStack_2c8 = (code *)0x792c41;
        FUN_00444e29();
        *(undefined1 *)(unaff_EBP + -4) = 0x72;
        pcStack_2c8 = (code *)0x792c4e;
        iVar7 = FUN_00402bc3();
        if (iVar7 < 0) {
          pcStack_2c8 = (code *)0x792c59;
          FUN_00878dfb();
        }
        pcStack_2c8 = (code *)0x46;
        iStack_2cc = 0x792c6a;
        FUN_004295f1();
        pcStack_2c8 = (code *)0x12c;
        *(undefined1 *)(unaff_EBP + -4) = 0x76;
        iStack_2cc = 0x792c7f;
        FUN_004295f1();
        *(undefined1 *)(unaff_EBP + -4) = 0x77;
        pcStack_2c8 = (code *)0x792c8f;
        FUN_00424aee();
        pcStack_2c8 = (code *)0x40;
        *(undefined1 *)(unaff_EBP + -4) = 0x78;
        iStack_2cc = 0x792c9e;
        FUN_004295f1();
        pcStack_2c8 = (code *)0xf0;
        *(undefined1 *)(unaff_EBP + -4) = 0x79;
        iStack_2cc = 0x792cb0;
        FUN_004295f1();
        pcStack_2c8 = (code *)(unaff_EBP + -0xb4);
        iStack_2cc = unaff_EBP + -0xa4;
        iStack_2d0 = unaff_EBP + -0x70;
        local_2d4 = (int *)(unaff_EBP + -0x58);
        puStack_2d8 = *(undefined4 **)(unaff_EBP + 8);
        piStack_2dc = (int *)(unaff_EBP + -0xcc);
        *(undefined1 *)(unaff_EBP + -4) = 0x7a;
        FUN_00424e27();
        FUN_004250ac();
        pcStack_2c8 = (code *)0x792cf6;
        iVar7 = FUN_00402bc3();
        if (iVar7 < 0) {
          pcStack_2c8 = (code *)0x792d01;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x79;
        pcStack_2c8 = (code *)0x792d0e;
        iVar7 = FUN_00402bc3();
        if (iVar7 < 0) {
          pcStack_2c8 = (code *)0x792d19;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x78;
        pcStack_2c8 = (code *)0x792d26;
        iVar7 = FUN_00402bc3();
        if (iVar7 < 0) {
          pcStack_2c8 = (code *)0x792d31;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x77;
        pcStack_2c8 = (code *)0x792d41;
        iVar7 = FUN_00402bc3();
        if (iVar7 < 0) {
          pcStack_2c8 = (code *)0x792d4c;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x76;
        pcStack_2c8 = (code *)0x792d5c;
        iVar7 = FUN_00402bc3();
        if (iVar7 < 0) {
          pcStack_2c8 = (code *)0x792d67;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x72;
        pcStack_2c8 = (code *)0x792d77;
        iVar7 = FUN_00402bc3();
        if (iVar7 < 0) {
          pcStack_2c8 = (code *)0x792d82;
          FUN_00878dfb();
        }
        pcStack_2c8 = (code *)0x792d8e;
        FUN_00424aee();
        pcStack_2c8 = (code *)0x64;
        *(undefined1 *)(unaff_EBP + -4) = 0x7b;
        iStack_2cc = 0x792da0;
        FUN_004295f1();
        *(undefined1 *)(unaff_EBP + -4) = 0x7c;
        pcStack_2c8 = (code *)0x792db0;
        FUN_00424aee();
        pcStack_2c8 = (code *)0xff;
        *(undefined1 *)(unaff_EBP + -4) = 0x7d;
        iStack_2cc = 0x792dc2;
        FUN_004295f1();
        pcStack_2c8 = (code *)0xa0;
        *(undefined1 *)(unaff_EBP + -4) = 0x7e;
        iStack_2cc = 0x792dd4;
        FUN_004295f1();
        pcStack_2c8 = (code *)(unaff_EBP + -0xb4);
        iStack_2cc = unaff_EBP + -0xa4;
        iStack_2d0 = unaff_EBP + -0x70;
        local_2d4 = (int *)(unaff_EBP + -0x58);
        puStack_2d8 = *(undefined4 **)(unaff_EBP + 8);
        piStack_2dc = (int *)(unaff_EBP + -0xcc);
        *(undefined1 *)(unaff_EBP + -4) = 0x7f;
        FUN_00424e27();
        FUN_004250ac();
        pcStack_2c8 = (code *)0x792e1a;
        iVar7 = FUN_00402bc3();
        if (iVar7 < 0) {
          pcStack_2c8 = (code *)0x792e25;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7e;
        pcStack_2c8 = (code *)0x792e32;
        iVar7 = FUN_00402bc3();
        if (iVar7 < 0) {
          pcStack_2c8 = (code *)0x792e3d;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7d;
        pcStack_2c8 = (code *)0x792e4a;
        iVar7 = FUN_00402bc3();
        if (iVar7 < 0) {
          pcStack_2c8 = (code *)0x792e55;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7c;
        pcStack_2c8 = (code *)0x792e65;
        iVar7 = FUN_00402bc3();
        if (iVar7 < 0) {
          pcStack_2c8 = (code *)0x792e70;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7b;
        pcStack_2c8 = (code *)0x792e80;
        iVar7 = FUN_00402bc3();
        if (iVar7 < 0) {
          pcStack_2c8 = (code *)0x792e8b;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x72;
        pcStack_2c8 = (code *)0x792e9b;
        iVar7 = FUN_00402bc3();
        if (iVar7 < 0) {
          pcStack_2c8 = (code *)0x792ea6;
          FUN_00878dfb();
        }
        pcStack_2c8 = (code *)0x792eaf;
        FUN_00424aee();
        *(undefined1 *)(unaff_EBP + -4) = 0x80;
        pcStack_2c8 = (code *)0x792ebc;
        FUN_00424aee();
        pcStack_2c8 = (code *)(unaff_EBP + -0x58);
        iStack_2cc = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x81;
        iStack_2d0 = 0x792ed2;
        FUN_00424e27();
        iStack_2d0 = 0x792ed9;
        FUN_00425139();
        *(undefined1 *)(unaff_EBP + -4) = 0x80;
        pcStack_2c8 = (code *)0x792ee6;
        iVar7 = FUN_00402bc3();
        if (iVar7 < 0) {
          pcStack_2c8 = (code *)0x792ef1;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x72;
        pcStack_2c8 = (code *)0x792efe;
        iVar7 = FUN_00402bc3();
        if (iVar7 < 0) {
          pcStack_2c8 = (code *)0x792f09;
          FUN_00878dfb();
        }
        pcStack_2c8 = (code *)(unaff_EBP + 0x18);
        *(undefined1 **)(unaff_EBP + 0xc) = &stack0xfffffd3c;
        iStack_2cc = 0x792f18;
        FUN_0041160e();
        *(undefined1 *)(unaff_EBP + -4) = 0x72;
        pcStack_2c8 = (code *)0x792f21;
        FUN_00424e82();
        pcStack_2c8 = (code *)0x792f28;
        FUN_00427af9();
        FUN_00412600();
        FUN_004125d9();
        FUN_004125e6();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00402676();
      }
    }
  }
  else {
    if (0x4f7f90 < (int)pcVar1) {
      if (0x4f837b < (int)pcVar1) {
        if ((int)pcVar1 < 0x4f837e) {
          if ((*(int **)(unaff_EBP + -0x18) == (int *)0x0) ||
             (iVar7 = **(int **)(unaff_EBP + -0x18), iVar7 == 0)) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(uint *)(iVar7 + -4) >> 1;
          }
          if (uVar4 == 0) goto LAB_0079275b;
          *(undefined4 *)(unaff_EBP + 0xc) = 0;
          pcStack_2c8 = (code *)(unaff_EBP + -0xf4);
          *(undefined1 *)(unaff_EBP + -4) = 0x3d;
          iStack_2cc = 0x792274;
          puVar8 = (undefined4 *)FUN_00679d86();
          iStack_2cc = *puVar8;
          pcStack_2c8 = (code *)(unaff_EBP + 0xc);
          *(undefined1 *)(unaff_EBP + -4) = 0x3e;
          iStack_2d0 = 0x792285;
          FUN_00437222();
          *(undefined1 *)(unaff_EBP + -4) = 0x3d;
          if (*(int *)(unaff_EBP + -0xf4) != 0) {
            pcStack_2c8 = (code *)0x79229f;
            FUN_00403384();
          }
          pcStack_2c8 = (code *)0x7922ae;
          piVar5 = (int *)FUN_00486ada();
          iVar7 = *piVar5;
          *(undefined1 *)(unaff_EBP + -4) = 0x3f;
          if (iVar7 == 0) {
            pcStack_2c8 = (code *)0x7922c2;
            FUN_00878dfb();
          }
          pcStack_2c8 = (code *)0x7922d0;
          FUN_004308ad();
          pcStack_2c8 = (code *)0x0;
          *(undefined1 *)(unaff_EBP + -4) = 0x40;
          iStack_2cc = 0x7922dd;
          iVar7 = FUN_004032b4();
          *(undefined1 *)(unaff_EBP + -4) = 0x3f;
          pcStack_2c8 = (code *)0x7922ef;
          iVar9 = FUN_00402bc3();
          if (iVar9 < 0) {
            pcStack_2c8 = (code *)0x7922fa;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x3d;
          FUN_004125d9();
          if (iVar7 != 0) {
            pcStack_2c8 = (code *)0x79231f;
            piVar5 = (int *)FUN_00486ada();
            iVar7 = *piVar5;
            *(undefined1 *)(unaff_EBP + -4) = 0x41;
            if (iVar7 == 0) {
              pcStack_2c8 = (code *)0x792333;
              FUN_00878dfb();
            }
            pcStack_2c8 = (code *)0x792341;
            piVar5 = (int *)FUN_004308ad();
            local_2d4 = *(int **)(unaff_EBP + 0xc);
            *(undefined1 *)(unaff_EBP + -4) = 0x42;
            if (local_2d4 == (int *)0x0) {
              pcStack_2c8 = (code *)0x792358;
              FUN_00878dfb();
              local_2d4 = *(int **)(unaff_EBP + 0xc);
            }
            iVar7 = *local_2d4;
            iStack_2d0 = *piVar5;
            iStack_2cc = piVar5[1];
            pcStack_2c8 = (code *)piVar5[2];
            *(int **)(unaff_EBP + -0x14) = local_2d4;
            puStack_2d8 = (undefined4 *)0x79236f;
            iVar7 = (**(code **)(iVar7 + 100))();
            if (iVar7 < 0) {
              pcStack_2c8 = *(code **)(unaff_EBP + -0x14);
              iStack_2d0 = 0x792381;
              iStack_2cc = iVar7;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x41;
            pcStack_2c8 = (code *)0x792391;
            iVar7 = FUN_00402bc3();
            if (iVar7 < 0) {
              pcStack_2c8 = (code *)0x79239c;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x3d;
            FUN_004125d9();
          }
          if (extraout_ECX[0x13f] / 10000 == 0xc1) {
            pcStack_2c8 = (code *)(unaff_EBP + -0xbc);
            iStack_2cc = 0x7923dc;
            FUN_00679e4e();
            *(undefined1 *)(unaff_EBP + -4) = 0x43;
            pcStack_2c8 = (code *)0x7923e9;
            FUN_00432dcc();
            *(undefined1 *)(unaff_EBP + -4) = 0x3d;
            FUN_00402fa6();
            pcStack_2c8 = (code *)0x792406;
            FUN_00403191();
            *(undefined1 *)(unaff_EBP + -4) = 0x44;
            pcStack_2c8 = (code *)0x792413;
            FUN_00403191();
            *(undefined1 *)(unaff_EBP + -4) = 0x45;
            pcStack_2c8 = (code *)0x792425;
            piVar5 = (int *)FUN_00486ada();
            iVar7 = *piVar5;
            *(undefined1 *)(unaff_EBP + -4) = 0x46;
            if (iVar7 == 0) {
              pcStack_2c8 = (code *)0x792439;
              FUN_00878dfb();
            }
            *(int *)(unaff_EBP + -0x14) = *piVar5;
            pcStack_2c8 = (code *)0x79244c;
            piVar5 = (int *)FUN_00486ada();
            iVar7 = *piVar5;
            *(undefined1 *)(unaff_EBP + -4) = 0x47;
            if (iVar7 == 0) {
              pcStack_2c8 = (code *)0x792460;
              FUN_00878dfb();
            }
            if (*(int *)(unaff_EBP + 0xc) == 0) {
              pcStack_2c8 = (code *)0x792471;
              FUN_00878dfb();
            }
            piVar5 = *(int **)(unaff_EBP + 0xc);
            *(int **)(unaff_EBP + -0x10) = piVar5;
            uVar11 = FUN_00424f08();
            *(undefined4 *)(unaff_EBP + -0x14) = uVar11;
            uVar11 = FUN_00424ee1();
            iStack_2d0 = *(int *)(unaff_EBP + -0x58);
            iStack_2cc = *(int *)(unaff_EBP + -0x54);
            pcStack_2c8 = *(code **)(unaff_EBP + -0x50);
            piStack_2dc = *(int **)(unaff_EBP + -0x6c);
            puStack_2d8 = *(undefined4 **)(unaff_EBP + -0x68);
            local_2d4 = *(int **)(unaff_EBP + -100);
            iVar7 = (**(code **)(*piVar5 + 0x90))
                              (*(undefined4 *)(unaff_EBP + -0x10),uVar11,
                               *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x70)
                              );
            if (iVar7 < 0) {
              pcStack_2c8 = *(code **)(unaff_EBP + -0x10);
              iStack_2d0 = 0x7924c2;
              iStack_2cc = iVar7;
              FUN_00878e09();
            }
            FUN_004125d9();
            FUN_004125d9();
            *(undefined1 *)(unaff_EBP + -4) = 0x44;
            pcStack_2c8 = (code *)0x7924e5;
            iVar7 = FUN_00402bc3();
            if (iVar7 < 0) {
              pcStack_2c8 = (code *)0x7924f0;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x3d;
          }
          else {
            pcStack_2c8 = (code *)0x79250a;
            FUN_00403191();
            *(undefined1 *)(unaff_EBP + -4) = 0x48;
            pcStack_2c8 = (code *)0x792517;
            FUN_00403191();
            *(undefined1 *)(unaff_EBP + -4) = 0x49;
            pcStack_2c8 = (code *)0x792526;
            piVar5 = (int *)FUN_00486ada();
            iVar7 = *piVar5;
            *(undefined1 *)(unaff_EBP + -4) = 0x4a;
            if (iVar7 == 0) {
              pcStack_2c8 = (code *)0x79253a;
              FUN_00878dfb();
            }
            iVar7 = extraout_ECX[0x34b];
            *(int *)(unaff_EBP + -0x1c) = *piVar5;
            if (iVar7 == 0) {
              pcStack_2c8 = (code *)0x792551;
              FUN_00878dfb();
            }
            iVar7 = extraout_ECX[0x34c];
            *(int *)(unaff_EBP + -0x5c) = extraout_ECX[0x34b];
            if (iVar7 == 0) {
              pcStack_2c8 = (code *)0x79256c;
              FUN_00878dfb();
            }
            *(int *)(unaff_EBP + -0x14) = extraout_ECX[0x34c];
            pcStack_2c8 = (code *)0x792580;
            piVar5 = (int *)FUN_00486ada();
            iVar7 = *piVar5;
            *(undefined1 *)(unaff_EBP + -4) = 0x4b;
            if (iVar7 == 0) {
              pcStack_2c8 = (code *)0x792594;
              FUN_00878dfb();
            }
            iVar7 = extraout_ECX[0x34b];
            *(int *)(unaff_EBP + -0x20) = *piVar5;
            if (iVar7 == 0) {
              pcStack_2c8 = (code *)0x7925ac;
              FUN_00878dfb();
            }
            iVar7 = extraout_ECX[0x34c];
            *(int *)(unaff_EBP + -0x34) = extraout_ECX[0x34b];
            if (iVar7 == 0) {
              pcStack_2c8 = (code *)0x7925c3;
              FUN_00878dfb();
            }
            *(int *)(unaff_EBP + -0x24) = extraout_ECX[0x34c];
            if (*(int *)(unaff_EBP + 0xc) == 0) {
              pcStack_2c8 = (code *)0x7925d7;
              FUN_00878dfb();
            }
            piVar5 = *(int **)(unaff_EBP + 0xc);
            *(int **)(unaff_EBP + -0x10) = piVar5;
            iVar7 = FUN_00424f08();
            iVar9 = FUN_00424f08();
            iVar10 = FUN_00424f08();
            *(int *)(unaff_EBP + -0x14) = iVar7 + iVar9 + iVar10;
            iVar9 = FUN_00424ee1();
            iVar10 = FUN_00424ee1();
            iVar6 = FUN_00424ee1();
            iVar7 = *piVar5;
            *(int *)(unaff_EBP + -0x34) = iVar9 + iVar10 + iVar6;
            iStack_2d0 = *(int *)(unaff_EBP + -0x48);
            iStack_2cc = *(int *)(unaff_EBP + -0x44);
            pcStack_2c8 = *(code **)(unaff_EBP + -0x40);
            piStack_2dc = *(int **)(unaff_EBP + -0x7c);
            puStack_2d8 = *(undefined4 **)(unaff_EBP + -0x78);
            local_2d4 = *(int **)(unaff_EBP + -0x74);
            iVar7 = (**(code **)(iVar7 + 0x90))
                              (*(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0x34)
                               ,*(undefined4 *)(unaff_EBP + -0x14),
                               *(undefined4 *)(unaff_EBP + -0x80));
            if (iVar7 < 0) {
              pcStack_2c8 = *(code **)(unaff_EBP + -0x10);
              iStack_2d0 = 0x79265a;
              iStack_2cc = iVar7;
              FUN_00878e09();
            }
            FUN_004125d9();
            FUN_004125d9();
            *(undefined1 *)(unaff_EBP + -4) = 0x48;
            pcStack_2c8 = (code *)0x792677;
            iVar7 = FUN_00402bc3();
            if (iVar7 < 0) {
              pcStack_2c8 = (code *)0x792682;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x3d;
          }
          pcStack_2c8 = (code *)0x79268f;
          iVar7 = FUN_00402bc3();
          if (iVar7 < 0) {
            pcStack_2c8 = (code *)0x79269a;
            FUN_00878dfb();
          }
          pcStack_2c8 = *(code **)(unaff_EBP + 0x18);
          iStack_2cc = ((*(int *)(unaff_EBP + 0x10) + 10) * 1000) / 0x10;
          local_2d4 = extraout_ECX + 0x34f;
          iStack_2d0 = 0x10;
          *(int **)(unaff_EBP + 0x10) = &iStack_2d0;
          puStack_2d8 = (undefined4 *)0x7926c4;
          FUN_0041160e();
          puStack_2d8 = (undefined4 *)(unaff_EBP + 0xc);
          *(int ***)(unaff_EBP + 0x18) = &local_2d4;
          piStack_2dc = (int *)0x7926d3;
          local_2d4 = extraout_ECX_08;
          FUN_00433bdf();
          puStack_2d8 = *(undefined4 **)(unaff_EBP + 0x14);
          *(undefined1 *)(unaff_EBP + -4) = 0x3d;
          piStack_2dc = (int *)0x7926e2;
          piStack_2dc = (int *)FUN_004091f9();
          FUN_00424e82();
          FUN_0042d941();
          *(undefined1 *)(unaff_EBP + -4) = 0;
          goto LAB_007926f6;
        }
        if (pcVar1 == (code *)0x4faa8b) goto LAB_00791f68;
        if (pcVar1 == (code *)0x4faa8e) goto LAB_00792f4c;
        if (pcVar1 == (code *)0x4faa91) goto LAB_00791e15;
      }
      goto LAB_00790c15;
    }
    if (pcVar1 == (code *)0x4f7f90) {
LAB_00791e15:
      iVar7 = *(int *)(unaff_EBP + 0x10);
      if ((*(int **)(unaff_EBP + -0x18) == (int *)0x0) ||
         (iVar9 = **(int **)(unaff_EBP + -0x18), iVar9 == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(iVar9 + -4) >> 1;
      }
      if (uVar4 != 0) {
        pcStack_2c8 = (code *)0xff;
        iStack_2cc = 3;
        iStack_2d0 = 0x10;
        local_2d4 = extraout_ECX + 0x34f;
        *(int **)(unaff_EBP + 0x10) = &iStack_2d0;
        puStack_2d8 = (undefined4 *)0x791e61;
        FUN_0041160e();
        local_2d4 = (int *)0x0;
        puStack_2d8 = (undefined4 *)0x0;
        *(int ***)(unaff_EBP + 0x10) = &piStack_2dc;
        piStack_2dc = extraout_ECX_06;
        FUN_00433bdf(extraout_ECX + 0x34c);
        uVar11 = FUN_004091f9(*(undefined4 *)(unaff_EBP + 0x14));
        puVar8 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0xdc,uVar11);
        this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x354);
        pcStack_2c8 = (code *)0x791e9f;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar8);
        FUN_00412600();
        pcStack_2c8 = (code *)0x791eb2;
        cVar3 = FUN_00433bfa();
        if (cVar3 == '\0') {
          pcStack_2c8 = (code *)0x791eca;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x3b;
          iStack_2cc = 0x791edc;
          pcStack_2c8 = (code *)(((iVar7 + 10) * 1000) / 0x10);
          FUN_004031b7();
          iVar7 = *(int *)this;
          *(undefined1 *)(unaff_EBP + -4) = 0x3c;
          if (iVar7 == 0) {
            pcStack_2c8 = (code *)0x791eee;
            FUN_00878dfb();
          }
          piVar5 = *(int **)this;
          iStack_2d0 = *(int *)(unaff_EBP + -0x94);
          iStack_2cc = *(int *)(unaff_EBP + -0x90);
          pcStack_2c8 = *(code **)(unaff_EBP + -0x8c);
          piStack_2dc = *(int **)(unaff_EBP + -0x14c);
          puStack_2d8 = *(undefined4 **)(unaff_EBP + -0x148);
          local_2d4 = *(int **)(unaff_EBP + -0x144);
          iVar7 = (**(code **)(*piVar5 + 0x110))(piVar5,0,*(undefined4 *)(unaff_EBP + -0x150));
          if (iVar7 < 0) {
            iStack_2d0 = 0x791f29;
            iStack_2cc = iVar7;
            pcStack_2c8 = (code *)piVar5;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x3b;
          pcStack_2c8 = (code *)0x791f39;
          iVar7 = FUN_00402bc3();
          if (iVar7 < 0) {
            pcStack_2c8 = (code *)0x791f44;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          pcStack_2c8 = (code *)0x791f54;
          iVar7 = FUN_00402bc3();
          if (iVar7 < 0) {
            pcStack_2c8 = (code *)0x791f63;
            FUN_00878dfb();
          }
        }
      }
      goto LAB_0079275b;
    }
    if (pcVar1 != (code *)0x4dd5cf) {
      if ((pcVar1 == (code *)0x4dfcde) || (pcVar1 == ptr_004e23ec)) goto LAB_00791f68;
      bVar12 = pcVar1 == (code *)0x4f5c6c;
LAB_00791dd2:
      if (!bVar12) goto LAB_00790c15;
      goto LAB_00791e15;
    }
  }
LAB_00792f4c:
  FUN_00402fa6();
LAB_00792f54:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


