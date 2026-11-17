/* FUN_00700926 - 0x00700926 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00700926(void)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  uint uVar6;
  int unaff_EBP;
  int iVar7;
  int *piVar8;
  int iStack_18c;
  undefined *puStack_188;
  int *piStack_184;
  int iStack_180;
  int *piStack_17c;
  undefined4 *puStack_178;
  int *piStack_174;
  undefined1 *puStack_170;
  int iStack_16c;
  char *pcStack_168;
  ushort *puStack_164;
  
  FUN_00879bb8();
  iVar7 = 0;
  *(int *)(unaff_EBP + -0x30) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  puStack_164 = (ushort *)0x70094b;
  FUN_0081622a();
  puStack_164 = (ushort *)0x700956;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00426311();
  iVar3 = *(int *)(*(int *)(extraout_ECX + 0x584) + 0x38);
  iVar4 = *(int *)(extraout_ECX + 0x59c);
  *(int *)(unaff_EBP + -100) = iVar3;
  if (iVar4 != iVar3) {
    *(int *)(extraout_ECX + 0x59c) = iVar3;
    while( true ) {
      iVar4 = 0;
      if (*(int *)(DAT_0097926c + 0x80) != 0) {
        iVar4 = *(int *)(*(int *)(DAT_0097926c + 0x80) + -4);
      }
      if (iVar4 <= iVar7) break;
      puStack_164 = *(ushort **)(extraout_ECX + 0x588);
      pcStack_168 = (char *)0x7009a8;
      FUN_00701f6d();
      iVar7 = iVar7 + 1;
    }
  }
  iVar4 = *(int *)(extraout_ECX + 0x5cc + *(int *)(extraout_ECX + 0x588) * 4);
  iVar7 = 0;
  if (iVar4 != 0) {
    iVar7 = *(int *)(iVar4 + -4);
  }
  *(int *)(unaff_EBP + -0x38) = iVar7 - iVar3;
  if (8 < iVar7 - iVar3) {
    *(undefined4 *)(unaff_EBP + -0x38) = 9;
  }
  if (*(int *)(unaff_EBP + -0x38) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    puStack_164 = (ushort *)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    pcStack_168 = (char *)0x7009f6;
    puVar2 = (undefined4 *)FUN_00679d86();
    puStack_164 = (ushort *)*puVar2;
    pcStack_168 = (char *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_16c = 0x700a0c;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      puStack_164 = (ushort *)0x700a23;
      FUN_00403384();
    }
    puStack_164 = (ushort *)0x700a35;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    puStack_164 = (ushort *)0x700a45;
    FUN_00403191();
    puStack_164 = (ushort *)0x0;
    pcStack_168 = (char *)(unaff_EBP + -0xd8);
    iStack_16c = unaff_EBP + -200;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puStack_170 = (undefined1 *)0x700a61;
    piStack_174 = (int *)FUN_00411641();
    *(undefined1 ***)(unaff_EBP + -0x40) = &puStack_170;
    puStack_178 = (undefined4 *)0x700a6d;
    FUN_004033a1();
    piStack_174 = (int *)(unaff_EBP + -0xe8);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puStack_178 = (undefined4 *)0x700a7d;
    FUN_00405a1d();
    puStack_178 = (undefined4 *)0x700a84;
    FUN_00402660();
    puStack_178 = (undefined4 *)0x700a8b;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    pcStack_168 = (char *)0x700a96;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x24) = iVar3;
    *(undefined4 *)(unaff_EBP + 8) = 0;
    if (iVar3 != 0) {
      puStack_164 = (ushort *)0x700aac;
      iVar3 = FUN_0041a581();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        puStack_164 = (ushort *)0x700abd;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    puStack_164 = (ushort *)0x700acd;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_164 = (ushort *)0x700ad8;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_164 = (ushort *)0x700ae8;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_164 = (ushort *)0x700af3;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puStack_164 = (ushort *)0x700b03;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_164 = (ushort *)0x700b0e;
      FUN_00878dfb();
    }
    puStack_164 = (ushort *)0xff;
    pcStack_168 = (char *)0x700b20;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (*(int *)(unaff_EBP + 8) == 0) {
      puStack_164 = (ushort *)0x700b34;
      FUN_00878dfb();
      if (*(int *)(unaff_EBP + 8) == 0) {
        puStack_164 = (ushort *)0x700b3f;
        FUN_00878dfb();
      }
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_164 = (ushort *)0x700b4e;
      FUN_00878dfb();
    }
    piVar8 = *(int **)(unaff_EBP + -0x10);
    *(int **)(unaff_EBP + -0x1c) = piVar8;
    *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + 8);
    iVar3 = FUN_0040e53d();
    *(uint *)(unaff_EBP + -0x14) = (0xcaU - iVar3 >> 1) + 0x32;
    iVar3 = FUN_0040e48b();
    puStack_170 = *(undefined1 **)(unaff_EBP + -0x20);
    piStack_174 = *(int **)(unaff_EBP + -0x14);
    iStack_16c = *(int *)(unaff_EBP + -0xa8);
    pcStack_168 = *(char **)(unaff_EBP + -0xa4);
    puStack_178 = (undefined4 *)((0xd2U - iVar3 >> 1) - 2);
    puStack_164 = *(ushort **)(unaff_EBP + -0xa0);
    piStack_17c = *(int **)(unaff_EBP + -0x1c);
    iStack_180 = 0x700ba5;
    iVar3 = (**(code **)(*piVar8 + 0x80))();
    if (iVar3 < 0) {
      puStack_164 = *(ushort **)(unaff_EBP + -0x1c);
      iStack_16c = 0x700bb7;
      pcStack_168 = (char *)iVar3;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puStack_164 = (ushort *)0x700bc7;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      puStack_164 = (ushort *)0x700bd2;
      FUN_00878dfb();
    }
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      puStack_164 = (ushort *)0x700bee;
      FUN_00403384();
    }
  }
  puStack_164 = (ushort *)(unaff_EBP + -0x48);
  pcStack_168 = (char *)0x700bfa;
  FUN_007d4a9a();
  iStack_16c = unaff_EBP + -0x4c;
  pcStack_168 = (char *)0x1e;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  puStack_170 = (undefined1 *)0x700c09;
  FUN_007d4a9a();
  iVar4 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  iVar3 = extraout_ECX;
  if (0 < *(int *)(unaff_EBP + -0x38)) {
    do {
      iVar5 = 0;
      iVar4 = iVar4 + *(int *)(unaff_EBP + -100);
      iVar7 = *(int *)(iVar3 + 0x5cc + *(int *)(iVar3 + 0x588) * 4);
      *(int *)(unaff_EBP + -0x44) = iVar4;
      *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(iVar7 + iVar4 * 8 + 4);
      FUN_00705dac();
      iVar4 = *(int *)(DAT_0097926c + 0x80);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar4 + -4);
      }
      puStack_164 = *(ushort **)(unaff_EBP + -0x28);
      if ((int)(uint)*puStack_164 < iVar4) {
        *(uint *)(unaff_EBP + -0x14) = (uint)*puStack_164;
        puStack_164 = (ushort *)(unaff_EBP + -0x24);
        pcStack_168 = (char *)0x700c86;
        FUN_0062aea5();
        puStack_164 = (ushort *)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        pcStack_168 = (char *)0x700c9a;
        FUN_00705d33();
        iStack_16c = unaff_EBP + -0x24;
        puStack_164 = *(ushort **)(unaff_EBP + -0x24);
        pcStack_168 = s__s___d__0096b480;
        puStack_170 = (undefined1 *)0x700cad;
        FUN_00434e21();
        piVar8 = *(int **)(unaff_EBP + -0x10);
        if (piVar8 == (int *)0x0) {
          puStack_164 = (ushort *)0x700cc1;
          FUN_00878dfb();
          piVar8 = *(int **)(unaff_EBP + -0x10);
        }
        iVar4 = *piVar8;
        iVar7 = *(int *)(unaff_EBP + -0x20) * 0x16;
        puStack_164 = (ushort *)0x13;
        pcStack_168 = (char *)0xd0;
        iStack_16c = iVar7 + 0x31;
        puStack_170 = (undefined1 *)0xa;
        *(int **)(unaff_EBP + 8) = piVar8;
        puStack_178 = (undefined4 *)0x700ce8;
        piStack_174 = piVar8;
        iVar4 = (**(code **)(iVar4 + 0x8c))();
        if (iVar4 < 0) {
          puStack_178 = (undefined4 *)&DAT_00963cc8;
          piStack_17c = *(int **)(unaff_EBP + 8);
          piStack_184 = (int *)0x700cfa;
          iStack_180 = iVar4;
          FUN_00878e09();
        }
        puStack_178 = &DAT_00980690;
        piStack_17c = (int *)0x700d0a;
        FUN_00403191();
        puStack_178 = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        piStack_17c = (int *)0x700d1e;
        FUN_00403191();
        puStack_178 = (undefined4 *)(unaff_EBP + -0x15c);
        piStack_17c = (int *)(unaff_EBP + -0x14c);
        piStack_184 = (int *)(unaff_EBP + -0x6c);
        iStack_180 = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        puStack_188 = (undefined *)0x700d3a;
        FUN_007d4a9a();
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        pcStack_168 = (char *)0x700d47;
        pcStack_168 = (char *)FUN_00449749();
        iStack_16c = 0x700d50;
        puStack_170 = (undefined1 *)FUN_00449713();
        *(int **)(unaff_EBP + 8) = &iStack_16c;
        piStack_174 = (int *)0x700d5c;
        iStack_16c = extraout_ECX_00;
        FUN_00448a17();
        puStack_170 = (undefined1 *)(iVar7 + 0x35);
        piStack_174 = (int *)0x1e;
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        puStack_178 = (undefined4 *)0x700d6e;
        FUN_004115d9();
        puStack_178 = (undefined4 *)0x700d75;
        FUN_00448e3a();
        FUN_004497b5();
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        puStack_164 = (ushort *)0x700d8d;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          puStack_164 = (ushort *)0x700d98;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        puStack_164 = (ushort *)0x700da8;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          puStack_164 = (ushort *)0x700db3;
          FUN_00878dfb();
        }
        puStack_164 = *(ushort **)(iVar3 + 0x588);
        pcStack_168 = (char *)0x700dc3;
        iVar5 = FUN_00701f1e();
        iVar4 = *(int *)(iVar3 + 0x588);
        if (iVar5 == 0) {
          if (*(int *)(*(int *)(iVar3 + 0x5e0 + iVar4 * 4) + 4 + *(int *)(unaff_EBP + -0x14) * 8) ==
              0) {
            *(int *)(unaff_EBP + 8) = iVar4 + (*(int *)(unaff_EBP + -0x14) + 1000) * 3;
            *(undefined4 *)(unaff_EBP + -0xac) = 0;
            *(undefined4 *)(unaff_EBP + -0xb8) = 1;
            *(undefined4 *)(unaff_EBP + -0xb4) = 0;
            *(undefined4 *)(unaff_EBP + -0xb0) = 0;
            puStack_164 = (ushort *)(unaff_EBP + -0x78);
            *(undefined1 *)(unaff_EBP + -4) = 0x17;
            pcStack_168 = (char *)0x700f1f;
            FUN_00679d86();
            *(undefined1 *)(unaff_EBP + -4) = 0x18;
            puStack_164 = (ushort *)0x700f2f;
            FUN_00419192();
            *(undefined1 *)(unaff_EBP + -4) = 0x17;
            FUN_00402676();
            puStack_164 = (ushort *)0x700f4a;
            iVar4 = FUN_004029b9();
            *(int *)(unaff_EBP + -0x44) = iVar4;
            *(undefined1 *)(unaff_EBP + -4) = 0x19;
            if (iVar4 != 0) {
              FUN_0044f3fa();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x17;
            puStack_164 = (ushort *)0x700f7d;
            FUN_00450382();
            puStack_164 = (ushort *)0x0;
            pcStack_168 = (char *)(iVar7 + 0x34);
            iStack_16c = 0xd;
            puStack_170 = *(undefined1 **)(unaff_EBP + 8);
            puStack_178 = (undefined4 *)0x700fa8;
            piStack_174 = (int *)iVar3;
            (**(code **)(**(int **)(*(int *)(iVar3 + 0x5e0 + *(int *)(iVar3 + 0x588) * 4) + 4 +
                                   *(int *)(unaff_EBP + -0x14) * 8) + 0x20))();
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            if (*(int *)(unaff_EBP + -0xac) != 0) {
              puStack_164 = (ushort *)0x700fbf;
              FUN_00403384();
            }
          }
        }
        else if (*(int *)(*(int *)(iVar3 + 0x5ec + iVar4 * 4) + 4 + *(int *)(unaff_EBP + -0x14) * 8)
                 == 0) {
          *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + -0x14) * 3 + 4000 + iVar4;
          *(undefined4 *)(unaff_EBP + -0x8c) = 0;
          *(undefined4 *)(unaff_EBP + -0x98) = 1;
          *(undefined4 *)(unaff_EBP + -0x94) = 0;
          *(undefined4 *)(unaff_EBP + -0x90) = 0;
          puStack_164 = (ushort *)(unaff_EBP + -0x70);
          *(undefined1 *)(unaff_EBP + -4) = 0x14;
          pcStack_168 = (char *)0x700e25;
          FUN_00679d86();
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          puStack_164 = (ushort *)0x700e35;
          FUN_00419192();
          *(undefined1 *)(unaff_EBP + -4) = 0x14;
          if (*(int *)(unaff_EBP + -0x70) != 0) {
            puStack_164 = (ushort *)0x700e49;
            FUN_00403384();
          }
          puStack_164 = (ushort *)0x700e59;
          iVar4 = FUN_004029b9();
          *(int *)(unaff_EBP + -0x44) = iVar4;
          *(undefined1 *)(unaff_EBP + -4) = 0x16;
          if (iVar4 != 0) {
            FUN_0044f3fa();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x14;
          puStack_164 = (ushort *)0x700e8c;
          FUN_00450382();
          puStack_164 = (ushort *)0x0;
          pcStack_168 = (char *)(iVar7 + 0x34);
          iStack_16c = 0xd;
          puStack_170 = *(undefined1 **)(unaff_EBP + 8);
          puStack_178 = (undefined4 *)0x700eb7;
          piStack_174 = (int *)iVar3;
          (**(code **)(**(int **)(*(int *)(iVar3 + 0x5ec + *(int *)(iVar3 + 0x588) * 4) + 4 +
                                 *(int *)(unaff_EBP + -0x14) * 8) + 0x20))();
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          FUN_00402676();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        if (*(int *)(unaff_EBP + -0x28) != 0) {
          puStack_164 = (ushort *)0x700fe2;
          FUN_00705e5b();
          *(undefined4 *)(unaff_EBP + -0x28) = 0;
        }
      }
      else {
        iVar4 = *(int *)(puStack_164 + 2);
        if (((iVar4 == 2) || (iVar4 == 3)) || (iVar4 == 5)) {
          *(undefined4 *)(unaff_EBP + 8) = 0;
          iVar4 = *(int *)(puStack_164 + 2);
          *(undefined1 *)(unaff_EBP + -4) = 0x23;
          if (iVar4 == 2) {
            for (uVar6 = 0;
                (iVar4 = *(int *)(DAT_0097bdc4 + 0x578), iVar4 != 0 &&
                (uVar6 < *(uint *)(iVar4 + -4))); uVar6 = uVar6 + 1) {
              if (*(uint *)(iVar4 + uVar6 * 4) == (uint)*puStack_164) {
                puStack_164 = (ushort *)(unaff_EBP + -0x84);
                pcStack_168 = (char *)0x7012cd;
                FUN_00679d86();
                *(undefined1 *)(unaff_EBP + -4) = 0x24;
                puStack_164 = (ushort *)0x7012da;
                FUN_00419192();
                *(undefined1 *)(unaff_EBP + -4) = 0x23;
                goto LAB_00701374;
              }
            }
            puStack_164 = (ushort *)(unaff_EBP + -0x50);
            pcStack_168 = (char *)0x7012fc;
            FUN_00679d86();
            *(undefined1 *)(unaff_EBP + -4) = 0x25;
            puStack_164 = (ushort *)0x701309;
            FUN_00419192();
            *(undefined1 *)(unaff_EBP + -4) = 0x23;
LAB_00701374:
            FUN_00402676();
            *(undefined4 *)(unaff_EBP + -0x1c) = 4;
          }
          else if (iVar4 == 3) {
            puStack_164 = (ushort *)(unaff_EBP + -0x7c);
            pcStack_168 = (char *)0x70132a;
            FUN_00679d86();
            *(undefined1 *)(unaff_EBP + -4) = 0x26;
            puStack_164 = (ushort *)0x701337;
            FUN_00419192();
            *(undefined1 *)(unaff_EBP + -4) = 0x23;
            FUN_00402676();
            *(undefined4 *)(unaff_EBP + -0x1c) = 2;
          }
          else if (iVar4 == 5) {
            puStack_164 = (ushort *)(unaff_EBP + -0x74);
            pcStack_168 = (char *)0x701360;
            FUN_00679d86();
            *(undefined1 *)(unaff_EBP + -4) = 0x27;
            puStack_164 = (ushort *)0x70136d;
            FUN_00419192();
            *(undefined1 *)(unaff_EBP + -4) = 0x23;
            goto LAB_00701374;
          }
          if (*(int *)(iVar3 + 0x5c8) != 0) {
            iVar5 = *(int *)(*(int *)(iVar3 + 0x5c8) + -4);
          }
          puStack_164 = (ushort *)0x0;
          pcStack_168 = (char *)(iVar5 + 1);
          piVar8 = (int *)(*(int *)(unaff_EBP + -0x30) + 0x5c8);
          iStack_16c = 0x7013a9;
          FUN_0042634d();
          puStack_164 = (ushort *)0xff;
          pcStack_168 = (char *)0x1;
          puStack_170 = (undefined1 *)&iStack_16c;
          *(int **)(unaff_EBP + -0x34) = &iStack_16c;
          piStack_174 = (int *)0x7013c0;
          FUN_004489f5();
          iVar3 = *(int *)(unaff_EBP + -0x20) * 0x16;
          puStack_170 = (undefined1 *)(iVar3 + 0x32 + *(int *)(unaff_EBP + -0x1c));
          piStack_174 = (int *)0xb;
          puStack_178 = (undefined4 *)(unaff_EBP + -0x68);
          *(undefined1 *)(unaff_EBP + -4) = 0x28;
          piStack_17c = (int *)0x7013e0;
          FUN_004489f5();
          piStack_17c = (int *)&puStack_178;
          *(undefined4 ***)(unaff_EBP + -0x10c) = &puStack_178;
          *(undefined1 *)(unaff_EBP + -4) = 0x29;
          iStack_180 = 0x7013f5;
          FUN_00424e27();
          iStack_180 = 0x7013fc;
          FUN_0042fb5e();
          piStack_17c = (int *)0x0;
          *(undefined1 *)(unaff_EBP + -4) = 0x2b;
          iStack_180 = 0x70140a;
          iStack_180 = FUN_00411641();
          piStack_184 = (int *)(unaff_EBP + -0x60);
          puStack_188 = (undefined *)0x701414;
          puVar2 = (undefined4 *)FUN_0042e3f0();
          puStack_164 = (ushort *)0x701425;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar5 * 4 + *piVar8),
                     (IBinding *)*puVar2);
          if (*(int **)(unaff_EBP + -0x60) != (int *)0x0) {
            puStack_164 = (ushort *)0x701432;
            (**(code **)(**(int **)(unaff_EBP + -0x60) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x23;
          if (*(int **)(unaff_EBP + -0x68) != (int *)0x0) {
            puStack_164 = (ushort *)0x701443;
            (**(code **)(**(int **)(unaff_EBP + -0x68) + 8))();
          }
          puStack_164 = (ushort *)0x701450;
          VariantInit((VARIANTARG *)(unaff_EBP + -300));
          puStack_164 = (ushort *)(unaff_EBP + -300);
          pcStack_168 = (char *)0x701461;
          iVar4 = FUN_00402e32();
          if (iVar4 < 0) {
            puStack_164 = (ushort *)0x70146d;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2c;
          puStack_164 = (ushort *)0x70147e;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x108));
          puStack_164 = (ushort *)(unaff_EBP + -0x108);
          pcStack_168 = (char *)0x70148f;
          iVar4 = FUN_00402e32();
          if (iVar4 < 0) {
            puStack_164 = (ushort *)0x70149b;
            FUN_00878dfb();
          }
          piVar8 = (int *)(iVar5 * 4 + *piVar8);
          *(undefined1 *)(unaff_EBP + -4) = 0x2d;
          if (*piVar8 == 0) {
            puStack_164 = (ushort *)0x7014b0;
            FUN_00878dfb();
          }
          piStack_184 = (int *)*piVar8;
          iStack_16c = *(int *)(unaff_EBP + -300);
          pcStack_168 = *(char **)(unaff_EBP + -0x128);
          iVar4 = *piStack_184;
          puStack_164 = *(ushort **)(unaff_EBP + -0x124);
          piStack_17c = *(int **)(unaff_EBP + -0x108);
          puStack_178 = *(undefined4 **)(unaff_EBP + -0x104);
          piStack_174 = *(int **)(unaff_EBP + -0x100);
          iStack_180 = 0x20;
          *(int **)(unaff_EBP + -0x34) = piStack_184;
          puStack_170 = *(undefined1 **)(unaff_EBP + -0xfc);
          puStack_188 = (undefined *)0x7014de;
          iVar4 = (**(code **)(iVar4 + 0x110))();
          if (iVar4 < 0) {
            puStack_188 = &DAT_00963df8;
            iStack_18c = *(int *)(unaff_EBP + -0x34);
            FUN_00878e09(iVar4);
          }
          puStack_188 = (undefined *)(unaff_EBP + -0x108);
          *(undefined1 *)(unaff_EBP + -4) = 0x2c;
          iStack_18c = 0x701500;
          puStack_188 = (undefined *)FUN_00402bc3();
          if ((int)puStack_188 < 0) {
            iStack_18c = 0x70150b;
            FUN_00878dfb();
          }
          puStack_188 = (undefined *)(unaff_EBP + -300);
          *(undefined1 *)(unaff_EBP + -4) = 0x23;
          iStack_18c = 0x70151b;
          puStack_188 = (undefined *)FUN_00402bc3();
          if ((int)puStack_188 < 0) {
            iStack_18c = 0x701526;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          puStack_188 = (undefined *)0x701532;
          FUN_00402676();
        }
        else {
          pcStack_168 = (char *)0x701016;
          iVar4 = FUN_0070610a();
          if ((iVar4 == 0) && (*(int *)(iVar3 + 0x588) != 2)) {
            if (*(int *)(iVar3 + 0x5c8) != 0) {
              iVar5 = *(int *)(*(int *)(iVar3 + 0x5c8) + -4);
            }
            puStack_164 = (ushort *)0x0;
            pcStack_168 = (char *)(iVar5 + 1);
            piVar8 = (int *)(*(int *)(unaff_EBP + -0x30) + 0x5c8);
            iStack_16c = 0x701053;
            FUN_0042634d();
            puStack_164 = (ushort *)0xff;
            pcStack_168 = (char *)0x1;
            puStack_170 = (undefined1 *)&iStack_16c;
            *(int **)(unaff_EBP + 8) = &iStack_16c;
            piStack_174 = (int *)0x70106a;
            FUN_004489f5();
            iVar3 = *(int *)(unaff_EBP + -0x20) * 0x16;
            puStack_170 = (undefined1 *)(iVar3 + 0x34);
            piStack_174 = (int *)0xb;
            puStack_178 = (undefined4 *)(unaff_EBP + -0x88);
            *(undefined1 *)(unaff_EBP + -4) = 0x1b;
            piStack_17c = (int *)0x701089;
            FUN_004489f5();
            piStack_17c = (int *)&puStack_178;
            *(undefined4 ***)(unaff_EBP + -0x34) = &puStack_178;
            *(undefined1 *)(unaff_EBP + -4) = 0x1c;
            iStack_180 = 0x70109b;
            FUN_00424e27();
            iStack_180 = 0x7010a2;
            FUN_0042fb5e();
            piStack_17c = (int *)0x76c;
            iStack_180 = unaff_EBP + -0x5c;
            *(undefined1 *)(unaff_EBP + -4) = 0x1d;
            piStack_184 = (int *)0x7010b9;
            FUN_00679d86();
            piStack_17c = (int *)0x0;
            *(undefined1 *)(unaff_EBP + -4) = 0x20;
            iStack_180 = 0x7010c6;
            iStack_180 = FUN_00411641();
            piStack_184 = (int *)(unaff_EBP + -0x80);
            puStack_188 = (undefined *)0x7010d0;
            puVar2 = (undefined4 *)FUN_0042e3f0();
            puStack_164 = (ushort *)0x7010e1;
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                      ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar5 * 4 + *piVar8),
                       (IBinding *)*puVar2);
            if (*(int **)(unaff_EBP + -0x80) != (int *)0x0) {
              puStack_164 = (ushort *)0x7010ee;
              (**(code **)(**(int **)(unaff_EBP + -0x80) + 8))();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x1f;
            FUN_00402676();
            *(undefined1 *)(unaff_EBP + -4) = 0xe;
            if (*(int **)(unaff_EBP + -0x88) != (int *)0x0) {
              puStack_164 = (ushort *)0x70110e;
              (**(code **)(**(int **)(unaff_EBP + -0x88) + 8))();
            }
            puStack_164 = (ushort *)0x70111b;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x13c));
            puStack_164 = (ushort *)(unaff_EBP + -0x13c);
            pcStack_168 = (char *)0x70112c;
            iVar4 = FUN_00402e32();
            if (iVar4 < 0) {
              puStack_164 = (ushort *)0x701138;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x21;
            puStack_164 = (ushort *)0x701149;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x11c));
            puStack_164 = (ushort *)(unaff_EBP + -0x11c);
            pcStack_168 = (char *)0x70115a;
            iVar4 = FUN_00402e32();
            if (iVar4 < 0) {
              puStack_164 = (ushort *)0x701166;
              FUN_00878dfb();
            }
            piVar8 = (int *)(iVar5 * 4 + *piVar8);
            *(undefined1 *)(unaff_EBP + -4) = 0x22;
            if (*piVar8 == 0) {
              puStack_164 = (ushort *)0x70117b;
              FUN_00878dfb();
            }
            piStack_184 = (int *)*piVar8;
            iStack_16c = *(int *)(unaff_EBP + -0x13c);
            pcStack_168 = *(char **)(unaff_EBP + -0x138);
            iVar4 = *piStack_184;
            puStack_164 = *(ushort **)(unaff_EBP + -0x134);
            piStack_17c = *(int **)(unaff_EBP + -0x11c);
            puStack_178 = *(undefined4 **)(unaff_EBP + -0x118);
            piStack_174 = *(int **)(unaff_EBP + -0x114);
            iStack_180 = 0x20;
            *(int **)(unaff_EBP + 8) = piStack_184;
            puStack_170 = *(undefined1 **)(unaff_EBP + -0x110);
            puStack_188 = (undefined *)0x7011a9;
            iVar4 = (**(code **)(iVar4 + 0x110))();
            if (iVar4 < 0) {
              puStack_188 = &DAT_00963df8;
              iStack_18c = *(int *)(unaff_EBP + 8);
              FUN_00878e09(iVar4);
            }
            puStack_188 = (undefined *)(unaff_EBP + -0x11c);
            *(undefined1 *)(unaff_EBP + -4) = 0x21;
            iStack_18c = 0x7011cb;
            puStack_188 = (undefined *)FUN_00402bc3();
            if ((int)puStack_188 < 0) {
              iStack_18c = 0x7011d6;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xe;
            puStack_188 = (undefined *)(unaff_EBP + -0x13c);
          }
          else {
            puStack_164 = (ushort *)0xff;
            pcStack_168 = (char *)0x70120c;
            FUN_004031b7();
            iVar4 = *(int *)(*(int *)(unaff_EBP + -0x28) + 4);
            *(undefined1 *)(unaff_EBP + -4) = 0x1a;
            if (iVar4 == 4) {
              iVar4 = 3;
            }
            *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(iVar3 + 0x5a4 + iVar4 * 4);
            piVar8 = *(int **)(unaff_EBP + -0x10);
            if (piVar8 == (int *)0x0) {
              puStack_164 = (ushort *)0x701239;
              FUN_00878dfb();
              piVar8 = *(int **)(unaff_EBP + -0x10);
            }
            iVar4 = *piVar8;
            iVar3 = *(int *)(unaff_EBP + -0x20) * 0x16;
            puStack_170 = *(undefined1 **)(unaff_EBP + 8);
            iStack_16c = *(int *)(unaff_EBP + -0xe8);
            pcStack_168 = *(char **)(unaff_EBP + -0xe4);
            piStack_174 = (int *)(iVar3 + 0x34);
            puStack_164 = *(ushort **)(unaff_EBP + -0xe0);
            puStack_178 = (undefined4 *)0xb;
            *(int **)(unaff_EBP + -0x34) = piVar8;
            iStack_180 = 0x701266;
            piStack_17c = piVar8;
            iVar4 = (**(code **)(iVar4 + 0x80))();
            if (iVar4 < 0) {
              puStack_188 = &DAT_00963cc8;
              iStack_18c = *(int *)(unaff_EBP + -0x34);
              FUN_00878e09(iVar4);
            }
            *(undefined1 *)(unaff_EBP + -4) = 0xe;
            puStack_188 = (undefined *)(unaff_EBP + -0xe8);
          }
          iStack_18c = 0x7011e6;
          puStack_188 = (undefined *)FUN_00402bc3();
          if ((int)puStack_188 < 0) {
            iStack_18c = 0x7011f5;
            FUN_00878dfb();
          }
        }
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        puStack_188 = (undefined *)(*(int *)(unaff_EBP + -0x28) + 0xc);
        iStack_18c = 0x701545;
        FUN_00414f8b();
        puStack_188 = (undefined *)0xc0;
        *(int **)(unaff_EBP + 8) = &iStack_18c;
        *(undefined1 *)(unaff_EBP + -4) = 0x2e;
        FUN_007d4a9a(&iStack_18c,0);
        FUN_007d3a22(unaff_EBP + -0x18);
        if (*(int *)(*(int *)(unaff_EBP + -0x30) + 0x58c) == *(int *)(unaff_EBP + -0x44)) {
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            puStack_188 = (undefined *)0x80004003;
            iStack_18c = 0x70158d;
            FUN_00878dfb();
          }
          piVar8 = *(int **)(unaff_EBP + -0x10);
          puStack_188 = (undefined *)0xff396093;
          iStack_18c = 0x13;
          iVar4 = (**(code **)(*piVar8 + 0x8c))(piVar8,0x1c,iVar3 + 0x32,0xc0);
          if (iVar4 < 0) {
            FUN_00878e09(iVar4,piVar8,&DAT_00963cc8);
          }
          VariantInit((VARIANTARG *)(unaff_EBP + -0xa8));
          iVar4 = FUN_00402e32(unaff_EBP + -0xa8,&DAT_00980690);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2f;
          VariantInit((VARIANTARG *)(unaff_EBP + -0xf8));
          iVar4 = FUN_00402e32(unaff_EBP + -0xf8,&DAT_00980690);
          if (iVar4 < 0) {
            FUN_00878dfb(iVar4);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x30;
          FUN_007d4a9a(unaff_EBP + -0x40,0,unaff_EBP + -0xf8,unaff_EBP + -0xa8);
          *(undefined1 *)(unaff_EBP + -4) = 0x31;
          pcStack_168 = (char *)0x701634;
          pcStack_168 = (char *)FUN_00449749();
          iStack_16c = 0x70163d;
          puStack_170 = (undefined1 *)FUN_00449713();
          *(int **)(unaff_EBP + 8) = &iStack_16c;
          piStack_174 = (int *)0x701649;
          iStack_16c = extraout_ECX_01;
          FUN_00448a17();
          puStack_170 = (undefined1 *)(iVar3 + 0x34);
          piStack_174 = (int *)0x1e;
          *(undefined1 *)(unaff_EBP + -4) = 0x31;
          puStack_178 = (undefined4 *)0x70165b;
          FUN_004115d9();
          puStack_178 = (undefined4 *)0x701662;
          FUN_00448e3a();
          *(undefined1 *)(unaff_EBP + -4) = 0x30;
          if (*(int **)(unaff_EBP + -0x40) != (int *)0x0) {
            puStack_164 = (ushort *)0x701673;
            (**(code **)(**(int **)(unaff_EBP + -0x40) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2f;
          puStack_164 = (ushort *)0x701683;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            puStack_164 = (ushort *)0x70168e;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2e;
        }
        else {
          puStack_188 = (undefined *)(unaff_EBP + -0x58);
          iStack_18c = 0x7016ac;
          iVar4 = FUN_00455c59();
          puStack_188 = *(undefined **)(*(int *)(iVar4 + 4) + 0x35);
          iStack_18c = *(int *)(iVar4 + 4) + 0x33;
          *(undefined1 *)(unaff_EBP + -4) = 0x33;
          uVar1 = FUN_0045f03e();
          *(undefined1 *)(unaff_EBP + 0xb) = uVar1;
          puStack_188 = (undefined *)
                        CONCAT22((short)((uint)*(undefined2 **)(unaff_EBP + -0x28) >> 0x10),
                                 **(undefined2 **)(unaff_EBP + -0x28));
          iStack_18c = 0x7016d8;
          FUN_006fc790();
          *(undefined1 *)(unaff_EBP + -4) = 0x2e;
          if (*(int *)(unaff_EBP + -0x54) != 0) {
            puStack_188 = (undefined *)0x0;
            iStack_18c = 0x7016fb;
            FUN_0045e7c2();
            *(undefined4 *)(unaff_EBP + -0x54) = 0;
          }
          puStack_188 = &DAT_008f0560;
          iStack_18c = CONCAT22((short)((uint)*(undefined2 **)(unaff_EBP + -0x28) >> 0x10),
                                **(undefined2 **)(unaff_EBP + -0x28));
          iStack_18c = FUN_006fc790();
          iStack_18c = iStack_18c + 0x38;
          (*DAT_0097b4ac)();
          puStack_164 = (ushort *)0x701745;
          VariantInit((VARIANTARG *)(unaff_EBP + -200));
          puStack_164 = (ushort *)(unaff_EBP + -200);
          pcStack_168 = (char *)0x701756;
          iVar4 = FUN_00402e32();
          if (iVar4 < 0) {
            puStack_164 = (ushort *)0x701762;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x34;
          puStack_164 = (ushort *)0x70176f;
          VariantInit((VARIANTARG *)(unaff_EBP + -0xd8));
          puStack_164 = (ushort *)(unaff_EBP + -0xd8);
          pcStack_168 = (char *)0x701780;
          iVar4 = FUN_00402e32();
          if (iVar4 < 0) {
            puStack_164 = (ushort *)0x70178c;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x35;
          puStack_164 = (ushort *)(unaff_EBP + -0xd8);
          pcStack_168 = (char *)0x7017ad;
          pcStack_168 = (char *)FUN_00449749();
          iStack_16c = 0x7017b6;
          FUN_00705b3e();
          iStack_16c = 0x7017c0;
          puStack_170 = (undefined1 *)FUN_00449713();
          *(int **)(unaff_EBP + 8) = &iStack_16c;
          piStack_174 = (int *)0x7017cc;
          iStack_16c = extraout_ECX_02;
          FUN_00448a17();
          puStack_170 = (undefined1 *)(iVar3 + 0x34);
          piStack_174 = (int *)0x1e;
          *(undefined1 *)(unaff_EBP + -4) = 0x35;
          puStack_178 = (undefined4 *)0x7017de;
          FUN_004115d9();
          puStack_178 = (undefined4 *)0x7017e5;
          FUN_00448e3a();
          *(undefined1 *)(unaff_EBP + -4) = 0x34;
          puStack_164 = (ushort *)0x7017f5;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            puStack_164 = (ushort *)0x701800;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2e;
        }
        puStack_164 = (ushort *)0x701810;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          puStack_164 = (ushort *)0x70181b;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        if (*(int *)(unaff_EBP + -0x28) != 0) {
          puStack_164 = (ushort *)0x70183b;
          FUN_00705e5b();
          *(undefined4 *)(unaff_EBP + -0x28) = 0;
        }
      }
      iVar4 = *(int *)(unaff_EBP + -0x20) + 1;
      *(int *)(unaff_EBP + -0x20) = iVar4;
      if (*(int *)(unaff_EBP + -0x38) <= iVar4) break;
      iVar3 = *(int *)(unaff_EBP + -0x30);
    } while( true );
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (*(int **)(unaff_EBP + -0x4c) != (int *)0x0) {
    puStack_164 = (ushort *)0x701860;
    (**(code **)(**(int **)(unaff_EBP + -0x4c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x48) != (int *)0x0) {
    puStack_164 = (ushort *)0x701871;
    (**(code **)(**(int **)(unaff_EBP + -0x48) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    puStack_164 = (ushort *)0x701882;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


