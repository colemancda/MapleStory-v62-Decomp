/* FUN_0079601e - 0x0079601e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0079601e(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int extraout_ECX;
  int iVar6;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int unaff_EBP;
  bool bVar7;
  int *piStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  code *pcStack_1bc;
  
  FUN_00879bb8();
  iVar3 = *(int *)(extraout_ECX + 0x524);
  *(int *)(unaff_EBP + -0x48) = extraout_ECX;
  if (iVar3 == 0) {
    pcStack_1bc = (code *)0x4;
    iStack_1c0 = 0x796057;
    uVar1 = FUN_0079ba1a();
    iVar3 = *(int *)(extraout_ECX + 0x4e0);
    *(undefined4 *)(unaff_EBP + -0x20) = uVar1;
    if (((iVar3 == 0) && (*(int *)(extraout_ECX + 0x4f4) == 0)) && (*(int *)(unaff_EBP + 8) != 0)) {
      *(undefined4 *)(unaff_EBP + -0x34) = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      *(undefined4 *)(unaff_EBP + -0x38) = 0;
      pcStack_1bc = (code *)0x962;
      iStack_1c0 = unaff_EBP + -0x24;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_1c4 = 0x79609d;
      puVar2 = (undefined4 *)FUN_00679d86();
      iStack_1c0 = *puVar2;
      pcStack_1bc = ptr_004df8f0;
      iStack_1c4 = unaff_EBP + -0x34;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_1c8 = 0x7960b3;
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        pcStack_1bc = (code *)(*(int *)(unaff_EBP + -0x24) + -0xc);
        iStack_1c0 = 0x7960ca;
        FUN_00403384();
      }
      pcStack_1bc = (code *)0x963;
      iStack_1c0 = unaff_EBP + -0x24;
      iStack_1c4 = 0x7960db;
      puVar2 = (undefined4 *)FUN_00679d86();
      iStack_1c0 = *puVar2;
      pcStack_1bc = ptr_004df8f0;
      iStack_1c4 = unaff_EBP + -0x38;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_1c8 = 0x7960ec;
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        pcStack_1bc = (code *)(*(int *)(unaff_EBP + -0x24) + -0xc);
        iStack_1c0 = 0x796103;
        FUN_00403384();
      }
      pcStack_1bc = (code *)&DAT_00980690;
      iStack_1c0 = 0x796115;
      FUN_00403191();
      pcStack_1bc = (code *)&DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_1c0 = 0x796125;
      FUN_00403191();
      pcStack_1bc = (code *)0x0;
      iStack_1c0 = 0;
      iStack_1c4 = unaff_EBP + -0xa8;
      iStack_1c8 = unaff_EBP + -0xe8;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      piStack_1cc = (int *)0x796141;
      uVar1 = FUN_00411641();
      *(int ***)(unaff_EBP + -0x44) = &piStack_1cc;
      FUN_004033a1(uVar1);
      iVar3 = unaff_EBP + -0x1a8;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00405a1d(iVar3);
      FUN_00402660();
      FUN_00404a02(iVar3);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_1c4 = 0x796176;
      iVar3 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x54) = iVar3;
      *(undefined4 *)(unaff_EBP + -0x30) = 0;
      if (iVar3 != 0) {
        pcStack_1bc = (code *)(unaff_EBP + -0x54);
        iStack_1c0 = 0x79618c;
        pcStack_1bc = (code *)FUN_0041a581();
        if (((int)pcStack_1bc < 0) && (pcStack_1bc != (code *)0x80004002)) {
          iStack_1c0 = 0x79619d;
          FUN_00878dfb();
        }
      }
      pcStack_1bc = (code *)(unaff_EBP + -0x1a8);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iStack_1c0 = 0x7961ad;
      pcStack_1bc = (code *)FUN_00402bc3();
      if ((int)pcStack_1bc < 0) {
        iStack_1c0 = 0x7961b8;
        FUN_00878dfb();
      }
      pcStack_1bc = (code *)(unaff_EBP + -0xe8);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_1c0 = 0x7961c8;
      pcStack_1bc = (code *)FUN_00402bc3();
      if ((int)pcStack_1bc < 0) {
        iStack_1c0 = 0x7961d3;
        FUN_00878dfb();
      }
      pcStack_1bc = (code *)(unaff_EBP + -0xa8);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_1c0 = 0x7961e3;
      pcStack_1bc = (code *)FUN_00402bc3();
      if ((int)pcStack_1bc < 0) {
        iStack_1c0 = 0x7961ee;
        FUN_00878dfb();
      }
      pcStack_1bc = (code *)&DAT_00980690;
      iStack_1c0 = 0x7961fa;
      FUN_00403191();
      pcStack_1bc = (code *)&DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iStack_1c0 = 0x79620a;
      FUN_00403191();
      pcStack_1bc = (code *)0x0;
      iStack_1c0 = 0;
      iStack_1c4 = unaff_EBP + -200;
      iStack_1c8 = unaff_EBP + -0x198;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      piStack_1cc = (int *)0x796226;
      uVar1 = FUN_00411641();
      *(int ***)(unaff_EBP + -0x44) = &piStack_1cc;
      FUN_004033a1(uVar1);
      iVar3 = unaff_EBP + -0x1b8;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      FUN_00405a1d(iVar3);
      FUN_00402660();
      FUN_00404a02(iVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      iStack_1c4 = 0x79625b;
      iVar3 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x5c) = iVar3;
      *(undefined4 *)(unaff_EBP + -0x3c) = 0;
      if (iVar3 != 0) {
        pcStack_1bc = (code *)(unaff_EBP + -0x5c);
        iStack_1c0 = 0x796271;
        pcStack_1bc = (code *)FUN_0041a581();
        if (((int)pcStack_1bc < 0) && (pcStack_1bc != (code *)0x80004002)) {
          iStack_1c0 = 0x796282;
          FUN_00878dfb();
        }
      }
      pcStack_1bc = (code *)(unaff_EBP + -0x1b8);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iStack_1c0 = 0x796292;
      pcStack_1bc = (code *)FUN_00402bc3();
      if ((int)pcStack_1bc < 0) {
        iStack_1c0 = 0x79629d;
        FUN_00878dfb();
      }
      pcStack_1bc = (code *)(unaff_EBP + -0x198);
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      iStack_1c0 = 0x7962ad;
      pcStack_1bc = (code *)FUN_00402bc3();
      if ((int)pcStack_1bc < 0) {
        iStack_1c0 = 0x7962b8;
        FUN_00878dfb();
      }
      pcStack_1bc = (code *)(unaff_EBP + -200);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iStack_1c0 = 0x7962c8;
      pcStack_1bc = (code *)FUN_00402bc3();
      if ((int)pcStack_1bc < 0) {
        iStack_1c0 = 0x7962d3;
        FUN_00878dfb();
      }
      iVar6 = *(int *)(unaff_EBP + 8) % 10;
      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
      iVar3 = *(int *)(unaff_EBP + 8) / 10;
      *(int *)(unaff_EBP + -0x28) = iVar6;
      *(int *)(unaff_EBP + -0x58) = iVar3;
      *(int *)(unaff_EBP + -0x24) = iVar3 + iVar6;
      pcStack_1bc = (code *)0x3b1;
      iStack_1c0 = unaff_EBP + 8;
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      iStack_1c4 = 0x796309;
      puVar2 = (undefined4 *)FUN_00679d86();
      iStack_1c4 = *puVar2;
      pcStack_1bc = (code *)0x0;
      iStack_1c0 = unaff_EBP + -0x2c;
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_1c8 = 0x79631a;
      FUN_00437222();
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      if (*(int *)(unaff_EBP + 8) != 0) {
        pcStack_1bc = (code *)(*(int *)(unaff_EBP + 8) + -0xc);
        iStack_1c0 = 0x796331;
        FUN_00403384();
      }
      iStack_1c0 = *(undefined4 *)(*(int *)(unaff_EBP + -0x48) + 0xd28);
      pcStack_1bc = (code *)0x1;
      iStack_1c4 = 0x796346;
      FUN_0040ee87();
      piStack_1cc = *(int **)(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      if (piStack_1cc == (int *)0x0) {
        pcStack_1bc = (code *)0x80004003;
        iStack_1c0 = 0x79635b;
        FUN_00878dfb();
        piStack_1cc = *(int **)(unaff_EBP + -0x2c);
      }
      iVar3 = *piStack_1cc;
      iStack_1c8 = *(undefined4 *)(unaff_EBP + -0x78);
      iStack_1c4 = *(undefined4 *)(unaff_EBP + -0x74);
      iStack_1c0 = *(undefined4 *)(unaff_EBP + -0x70);
      *(int **)(unaff_EBP + 8) = piStack_1cc;
      pcStack_1bc = *(code **)(unaff_EBP + -0x6c);
      iVar3 = (**(code **)(iVar3 + 100))();
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x78);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined4 *)(unaff_EBP + 8) = 0;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        *(int *)(unaff_EBP + -0x40) = *(int *)(unaff_EBP + -0x20) + 0x14;
        do {
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -100,0x3b1);
          uVar1 = *puVar2;
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          FUN_00437222(uVar1,unaff_EBP + -0x14,0);
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          if (*(int *)(unaff_EBP + -100) != 0) {
            FUN_00403384(*(int *)(unaff_EBP + -100) + -0xc);
          }
          FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x2c),1);
          piVar5 = *(int **)(unaff_EBP + -0x14);
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          if (piVar5 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar5 = *(int **)(unaff_EBP + -0x14);
          }
          iVar3 = *piVar5;
          *(int **)(unaff_EBP + -0x20) = piVar5;
          iVar3 = (**(code **)(iVar3 + 100))
                            (piVar5,*(undefined4 *)(unaff_EBP + -0x148),
                             *(undefined4 *)(unaff_EBP + -0x144),*(undefined4 *)(unaff_EBP + -0x140)
                             ,*(undefined4 *)(unaff_EBP + -0x13c));
          if (iVar3 < 0) {
            FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x20),&DAT_00963de8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          iVar3 = FUN_00402bc3(unaff_EBP + -0x148);
          if (iVar3 < 0) {
            FUN_00878dfb(iVar3);
          }
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          *(undefined1 *)(unaff_EBP + -4) = 0x1a;
          puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x60,0x3b1);
          uVar1 = *puVar2;
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          FUN_00437222(uVar1,unaff_EBP + -0x18,0);
          *(undefined1 *)(unaff_EBP + -4) = 0x1a;
          if (*(int *)(unaff_EBP + -0x60) != 0) {
            FUN_00403384(*(int *)(unaff_EBP + -0x60) + -0xc);
          }
          if (*(uint *)(unaff_EBP + 8) < *(uint *)(unaff_EBP + -0x28)) {
            if ((int)*(uint *)(unaff_EBP + -0x28) % 10 < 6) {
              iVar3 = (*(uint *)(unaff_EBP + 8) % 5) * 2 - *(int *)(unaff_EBP + -0x28);
LAB_00796501:
              iVar3 = (iVar3 + 1) * 5;
            }
            else {
              if (4 < *(uint *)(unaff_EBP + 8) % 10) {
                iVar3 = (*(uint *)(unaff_EBP + 8) % 5) * 2 - *(int *)(unaff_EBP + -0x28) % 5;
                goto LAB_00796501;
              }
              iVar3 = (*(uint *)(unaff_EBP + 8) % 5 - 2) * 10;
            }
            iVar6 = (-2 - *(uint *)(unaff_EBP + 8) / 5) * 10;
          }
          else {
            uVar4 = *(int *)(unaff_EBP + 8) - *(int *)(unaff_EBP + -0x28);
            iVar3 = (uVar4 % 5) * 0xf + (*(int *)(unaff_EBP + -0x58) % 5) * -7 + 7;
            iVar6 = ((*(int *)(unaff_EBP + -0x28) + -1) / 5) * -10 + (uVar4 / 5) * -0xf + -0x23;
          }
          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
          *(int *)(unaff_EBP + -0x20) = iVar6;
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x68,0x3b1);
          uVar1 = *puVar2;
          *(undefined1 *)(unaff_EBP + -4) = 0x1d;
          FUN_00437222(uVar1,unaff_EBP + -0x1c,0);
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          if (*(int *)(unaff_EBP + -0x68) != 0) {
            FUN_00403384(*(int *)(unaff_EBP + -0x68) + -0xc);
          }
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x1e;
          uVar4 = FUN_004133f0();
          piVar5 = *(int **)(unaff_EBP + -0x1c);
          *(uint *)(unaff_EBP + -0x50) = uVar4 % 0x168;
          if (piVar5 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar5 = *(int **)(unaff_EBP + -0x1c);
          }
          iVar6 = *piVar5;
          *(undefined4 *)(unaff_EBP + -0x6c) = 0;
          *(undefined4 *)(unaff_EBP + -0x70) = *(undefined4 *)(unaff_EBP + -0x50);
          *(int **)(unaff_EBP + -0x10) = piVar5;
          iVar6 = (**(code **)(iVar6 + 0xa0))
                            (piVar5,(double)*(longlong *)(unaff_EBP + -0x70),
                             *(undefined4 *)(unaff_EBP + -0x88),*(undefined4 *)(unaff_EBP + -0x84),
                             *(undefined4 *)(unaff_EBP + -0x80),*(undefined4 *)(unaff_EBP + -0x7c));
          if (iVar6 < 0) {
            FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          iVar6 = FUN_00402bc3(unaff_EBP + -0x88);
          if (iVar6 < 0) {
            FUN_00878dfb(iVar6);
          }
          FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x1c),1);
          piVar5 = *(int **)(unaff_EBP + -0x18);
          *(undefined1 *)(unaff_EBP + -4) = 0x1f;
          if (piVar5 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar5 = *(int **)(unaff_EBP + -0x18);
          }
          iVar6 = *piVar5;
          *(int **)(unaff_EBP + -0x10) = piVar5;
          iVar6 = (**(code **)(iVar6 + 100))
                            (piVar5,*(undefined4 *)(unaff_EBP + -0x188),
                             *(undefined4 *)(unaff_EBP + -0x184),*(undefined4 *)(unaff_EBP + -0x180)
                             ,*(undefined4 *)(unaff_EBP + -0x17c));
          if (iVar6 < 0) {
            FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          iVar6 = FUN_00402bc3(unaff_EBP + -0x188);
          if (iVar6 < 0) {
            FUN_00878dfb(iVar6);
          }
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x20;
          FUN_00403191(&DAT_00980690);
          piVar5 = *(int **)(unaff_EBP + -0x14);
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          if (piVar5 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar5 = *(int **)(unaff_EBP + -0x14);
          }
          iVar6 = *piVar5;
          *(int **)(unaff_EBP + -0x10) = piVar5;
          iVar3 = (**(code **)(iVar6 + 0x90))
                            (piVar5,iVar3,*(undefined4 *)(unaff_EBP + -0x20),
                             *(undefined4 *)(unaff_EBP + -0x108),*(undefined4 *)(unaff_EBP + -0x104)
                             ,*(undefined4 *)(unaff_EBP + -0x100),*(undefined4 *)(unaff_EBP + -0xfc)
                             ,*(undefined4 *)(unaff_EBP + -0x168),
                             *(undefined4 *)(unaff_EBP + -0x164),*(undefined4 *)(unaff_EBP + -0x160)
                             ,*(undefined4 *)(unaff_EBP + -0x15c));
          if (iVar3 < 0) {
            FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x20;
          iVar3 = FUN_00402bc3(unaff_EBP + -0x108);
          if (iVar3 < 0) {
            FUN_00878dfb(iVar3);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          iVar3 = FUN_00402bc3(unaff_EBP + -0x168);
          if (iVar3 < 0) {
            FUN_00878dfb(iVar3);
          }
          if (*(int *)(unaff_EBP + -0x14) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar5 = *(int **)(unaff_EBP + -0x14);
          iVar3 = (**(code **)(*piVar5 + 0x98))(piVar5,*(undefined4 *)(unaff_EBP + -0x18),5,5,0,5);
          if (iVar3 < 0) {
            FUN_00878e09(iVar3,piVar5,&DAT_00963de8);
          }
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x22;
          FUN_00403191(&DAT_00980690);
          piVar5 = *(int **)(unaff_EBP + -0x18);
          *(undefined1 *)(unaff_EBP + -4) = 0x23;
          if (piVar5 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar5 = *(int **)(unaff_EBP + -0x18);
          }
          iVar3 = *piVar5;
          *(int **)(unaff_EBP + -0x10) = piVar5;
          iVar3 = (**(code **)(iVar3 + 0x90))
                            (piVar5,0,0xfffffffb,*(undefined4 *)(unaff_EBP + -0x128),
                             *(undefined4 *)(unaff_EBP + -0x124),*(undefined4 *)(unaff_EBP + -0x120)
                             ,*(undefined4 *)(unaff_EBP + -0x11c),*(undefined4 *)(unaff_EBP + -0x98)
                             ,*(undefined4 *)(unaff_EBP + -0x94),*(undefined4 *)(unaff_EBP + -0x90),
                             *(undefined4 *)(unaff_EBP + -0x8c));
          if (iVar3 < 0) {
            FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x22;
          iVar3 = FUN_00402bc3(unaff_EBP + -0x128);
          if (iVar3 < 0) {
            FUN_00878dfb(iVar3);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          iVar3 = FUN_00402bc3(unaff_EBP + -0x98);
          if (iVar3 < 0) {
            FUN_00878dfb(iVar3);
          }
          FUN_004031b7(2000,3);
          piVar5 = *(int **)(unaff_EBP + -0x1c);
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          if (piVar5 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar5 = *(int **)(unaff_EBP + -0x1c);
          }
          iVar3 = *piVar5;
          *(int **)(unaff_EBP + -0x10) = piVar5;
          iVar3 = (**(code **)(iVar3 + 0xa0))
                            (piVar5,0,*(undefined4 *)(unaff_EBP + -0xb8),
                             *(undefined4 *)(unaff_EBP + -0xb4),*(undefined4 *)(unaff_EBP + -0xb0),
                             *(undefined4 *)(unaff_EBP + -0xac));
          if (iVar3 < 0) {
            FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          iVar3 = FUN_00402bc3(unaff_EBP + -0xb8);
          if (iVar3 < 0) {
            FUN_00878dfb(iVar3);
          }
          if (*(uint *)(unaff_EBP + 8) < *(uint *)(unaff_EBP + -0x28)) {
            FUN_00403191(&DAT_00980690);
            FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x30),1);
            bVar7 = DAT_0097c1ac == 0;
            *(undefined1 *)(unaff_EBP + -4) = 0x26;
            if (bVar7) {
              FUN_00878dfb(0x80004003);
            }
            puVar2 = (undefined4 *)
                     FUN_0042a39f(unaff_EBP + -0x4c,0,0,0,0,0,unaff_EBP + -0xd8,unaff_EBP + -0xf8);
            this = *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x40);
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar2);
            FUN_00412600();
            *(undefined1 *)(unaff_EBP + -4) = 0x25;
            iVar3 = FUN_00402bc3(unaff_EBP + -0xd8);
            if (iVar3 < 0) {
              FUN_00878dfb(iVar3);
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x1c;
            iVar3 = unaff_EBP + -0xf8;
          }
          else {
            FUN_00403191(&DAT_00980690);
            FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x3c),1);
            bVar7 = DAT_0097c1ac == 0;
            *(undefined1 *)(unaff_EBP + -4) = 0x28;
            if (bVar7) {
              FUN_00878dfb(0x80004003);
            }
            puVar2 = (undefined4 *)
                     FUN_0042a39f(unaff_EBP + -0x44,0,0,0,0,0,unaff_EBP + -0x118,unaff_EBP + -0x138)
            ;
            this = *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x40);
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar2);
            FUN_00412600();
            *(undefined1 *)(unaff_EBP + -4) = 0x27;
            iVar3 = FUN_00402bc3(unaff_EBP + -0x118);
            if (iVar3 < 0) {
              FUN_00878dfb(iVar3);
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x1c;
            iVar3 = unaff_EBP + -0x138;
          }
          iVar3 = FUN_00402bc3(iVar3);
          if (iVar3 < 0) {
            FUN_00878dfb(iVar3);
          }
          FUN_0040ee87(*(undefined4 *)(*(int *)(unaff_EBP + -0x48) + 0xd3c),1);
          iVar3 = *(int *)this;
          *(undefined1 *)(unaff_EBP + -4) = 0x29;
          if (iVar3 == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar5 = *(int **)this;
          iVar3 = *piVar5;
          *(int **)(unaff_EBP + -0x10) = piVar5;
          iVar3 = (**(code **)(iVar3 + 0xfc))
                            (piVar5,*(undefined4 *)(unaff_EBP + -0x158),
                             *(undefined4 *)(unaff_EBP + -0x154),*(undefined4 *)(unaff_EBP + -0x150)
                             ,*(undefined4 *)(unaff_EBP + -0x14c));
          if (iVar3 < 0) {
            FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963df8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          iVar3 = FUN_00402bc3(unaff_EBP + -0x158);
          if (iVar3 < 0) {
            FUN_00878dfb(iVar3);
          }
          if (*(int *)this == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar5 = *(int **)this;
          iVar3 = (**(code **)(*piVar5 + 0xb4))(piVar5,5);
          if (iVar3 < 0) {
            FUN_00878e09(iVar3,piVar5,&DAT_00963df8);
          }
          FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x14),1);
          iVar3 = *(int *)this;
          *(undefined1 *)(unaff_EBP + -4) = 0x2a;
          if (iVar3 == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar5 = *(int **)this;
          iVar3 = *piVar5;
          *(int **)(unaff_EBP + -0x10) = piVar5;
          iVar3 = (**(code **)(iVar3 + 100))
                            (piVar5,*(undefined4 *)(unaff_EBP + -0x178),
                             *(undefined4 *)(unaff_EBP + -0x174),*(undefined4 *)(unaff_EBP + -0x170)
                             ,*(undefined4 *)(unaff_EBP + -0x16c));
          if (iVar3 < 0) {
            FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          iVar3 = FUN_00402bc3(unaff_EBP + -0x178);
          if (iVar3 < 0) {
            FUN_00878dfb(iVar3);
          }
          if (*(int *)this == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar5 = *(int **)this;
          iVar3 = (**(code **)(*piVar5 + 0xe0))(piVar5,0xffffffff);
          if (iVar3 < 0) {
            FUN_00878e09(iVar3,piVar5,&DAT_00963df8);
          }
          FUN_004125d9();
          piVar5 = *(int **)(unaff_EBP + -0x18);
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 8))(piVar5);
          }
          piVar5 = *(int **)(unaff_EBP + -0x14);
          *(undefined1 *)(unaff_EBP + -4) = 0x14;
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 8))(piVar5);
          }
          *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
          *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x40) = this + 0x18;
        } while (*(uint *)(unaff_EBP + 8) < *(uint *)(unaff_EBP + -0x24));
      }
      piVar5 = *(int **)(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5);
      }
      piVar5 = *(int **)(unaff_EBP + -0x3c);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5);
      }
      piVar5 = *(int **)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x38) != 0) {
        FUN_00403384(*(int *)(unaff_EBP + -0x38) + -0xc);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x34) != 0) {
        FUN_00403384(*(int *)(unaff_EBP + -0x34) + -0xc);
      }
    }
  }
  else {
    *(undefined4 *)(extraout_ECX + 0x1df0) = *(undefined4 *)(unaff_EBP + 8);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


