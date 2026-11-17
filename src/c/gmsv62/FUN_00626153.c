/* FUN_00626153 - 0x00626153 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00626153(void)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 extraout_ECX;
  char *extraout_ECX_00;
  char *extraout_ECX_01;
  int unaff_EBP;
  uint uVar8;
  uint uStack_a4;
  undefined1 *puStack_a0;
  char *pcStack_9c;
  char *pcStack_98;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar3 = **(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((iVar3 != 0) && (*(int *)(iVar3 + -4) != 0)) {
    pcStack_98 = (char *)0x62618e;
    FUN_00414f8b();
  }
  pcStack_98 = (char *)0x62619c;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  pcStack_98 = (char *)0x6261a9;
  FUN_00403191();
  pcStack_98 = (char *)0x0;
  pcStack_9c = (char *)(unaff_EBP + -0x80);
  puStack_a0 = (undefined1 *)(unaff_EBP + -0x70);
  uStack_a4 = 0xc3f;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00679e4e(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_a4 = 0x6261da;
  uVar2 = FUN_00627c68();
  *(undefined4 *)(unaff_EBP + 8) = uVar2;
  uStack_a4 = (uint)*(ushort *)(*(int *)(unaff_EBP + -0x14) + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uVar2 = FUN_004091f9();
  FUN_0041354c(*(undefined4 *)(unaff_EBP + 8),uVar2);
  uStack_a4 = 0x626203;
  uVar2 = FUN_00411641();
  *(uint **)(unaff_EBP + 8) = &uStack_a4;
  FUN_004033a1(uVar2);
  iVar3 = unaff_EBP + -0x90;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  pcStack_9c = (char *)0x626238;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x5c) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  if (iVar3 != 0) {
    pcStack_98 = (char *)0x62624e;
    iVar3 = FUN_00404b30();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      pcStack_98 = (char *)0x62625f;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  pcStack_98 = (char *)0x62626f;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    pcStack_98 = (char *)0x62627a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (*(int *)(unaff_EBP + -0x58) != 0) {
    pcStack_98 = (char *)0x62628e;
    FUN_00403384();
  }
  FUN_00402fa6();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  pcStack_98 = (char *)0x6262a4;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    pcStack_98 = (char *)0x6262af;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  pcStack_98 = (char *)0x6262bc;
  pcVar6 = (char *)(unaff_EBP + -0x80);
  iVar3 = FUN_00402bc3();
  pcStack_98 = pcVar6;
  if (iVar3 < 0) {
    pcStack_98 = (char *)0x6262c7;
    FUN_00878dfb();
    pcStack_98 = extraout_ECX_00;
  }
  *(undefined4 *)(unaff_EBP + -0x38) = 0xffffffff;
  puStack_a0 = (undefined1 *)&pcStack_98;
  *(char ***)(unaff_EBP + 8) = &pcStack_98;
  pcStack_9c = (char *)0xc4c;
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  uStack_a4 = 0x6262e2;
  FUN_00679e4e();
  pcStack_9c = (char *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_a0 = (undefined1 *)0x6262f2;
  FUN_0040263d();
  puStack_a0 = (undefined1 *)0x6262f9;
  pcStack_98 = (char *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  pcStack_9c = (char *)0x626303;
  uVar2 = FUN_00412550();
  *(undefined4 *)(unaff_EBP + -0x2c) = uVar2;
  pcStack_9c = (char *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_a0 = (undefined1 *)0x626313;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    pcStack_98 = (char *)0x626320;
    FUN_00878dfb();
  }
  puStack_a0 = (undefined1 *)&pcStack_98;
  *(char ***)(unaff_EBP + 8) = &pcStack_98;
  pcStack_9c = (char *)0x65e;
  uStack_a4 = 0x626334;
  FUN_00679e4e();
  pcStack_9c = (char *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_a0 = (undefined1 *)0x626344;
  FUN_0040263d();
  puStack_a0 = (undefined1 *)0x62634b;
  pcStack_98 = (char *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  pcStack_9c = (char *)0x626355;
  uVar2 = FUN_00412550();
  *(undefined4 *)(unaff_EBP + -0x28) = uVar2;
  pcStack_9c = (char *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_a0 = (undefined1 *)0x626365;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    pcStack_98 = (char *)0x626372;
    FUN_00878dfb();
  }
  puStack_a0 = (undefined1 *)&pcStack_98;
  *(char ***)(unaff_EBP + 8) = &pcStack_98;
  pcStack_9c = (char *)0xc71;
  uStack_a4 = 0x626386;
  FUN_00679e4e();
  pcStack_9c = (char *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_a0 = (undefined1 *)0x626396;
  FUN_0040263d();
  puStack_a0 = (undefined1 *)0x62639d;
  pcStack_98 = (char *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  pcStack_9c = (char *)0x6263a7;
  uVar2 = FUN_00412550();
  *(undefined4 *)(unaff_EBP + -0x34) = uVar2;
  pcStack_9c = (char *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_a0 = (undefined1 *)0x6263b7;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    pcStack_98 = (char *)0x6263c4;
    FUN_00878dfb();
  }
  puStack_a0 = (undefined1 *)&pcStack_98;
  *(char ***)(unaff_EBP + 8) = &pcStack_98;
  pcStack_9c = (char *)0xd6b;
  uStack_a4 = 0x6263d8;
  FUN_00679e4e();
  pcStack_9c = (char *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_a0 = (undefined1 *)0x6263e8;
  FUN_0040263d();
  puStack_a0 = (undefined1 *)0x6263ef;
  pcStack_98 = (char *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  pcStack_9c = (char *)0x6263f9;
  uVar2 = FUN_00412550();
  *(undefined4 *)(unaff_EBP + -0x30) = uVar2;
  pcStack_9c = (char *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_a0 = (undefined1 *)0x626409;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    pcStack_98 = (char *)0x626416;
    FUN_00878dfb();
  }
  iVar3 = *(int *)(unaff_EBP + -0x14);
  if ((*(int *)(iVar3 + 0x24) == 0) || (*(int *)(*(int *)(iVar3 + 0x24) + -4) == 0)) {
    if (((0 < *(int *)(unaff_EBP + -0x2c)) ||
        ((((0 < *(int *)(unaff_EBP + -0x34) || (0 < *(int *)(unaff_EBP + -0x28))) ||
          (0 < *(int *)(unaff_EBP + -0x30))) ||
         ((*(int *)(iVar3 + 0x28) != 0 && (*(int *)(*(int *)(iVar3 + 0x28) + -4) != 0)))))) ||
       (((*(int *)(iVar3 + 0x1c) != 0 && (*(int *)(*(int *)(iVar3 + 0x1c) + -4) != 0)) ||
        ((*(int *)(iVar3 + 0x20) != 0 && (*(int *)(*(int *)(iVar3 + 0x20) + -4) != 0)))))) {
      puStack_a0 = (undefined1 *)&pcStack_98;
      *(char ***)(unaff_EBP + 8) = &pcStack_98;
      pcStack_9c = (char *)0xc72;
      uStack_a4 = 0x62647d;
      FUN_00679e4e();
      pcStack_9c = (char *)(unaff_EBP + -0x48);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      puStack_a0 = (undefined1 *)0x62648d;
      FUN_0040263d();
      puStack_a0 = (undefined1 *)0x626494;
      pcStack_98 = (char *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      pcStack_9c = (char *)0x62649e;
      iVar4 = FUN_00412550();
      *(char *)(unaff_EBP + 0xb) = '\x01' - (iVar4 != 0);
      pcStack_9c = (char *)(unaff_EBP + -0x48);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      puStack_a0 = (undefined1 *)0x6264b4;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        pcStack_98 = (char *)0x6264c1;
        FUN_00878dfb();
      }
      if (*(char *)(unaff_EBP + 0xb) != '\0') goto LAB_006264ca;
    }
  }
  else {
LAB_006264ca:
    pcStack_98 = (char *)0x6264d5;
    _strlen(&DAT_00968258);
    pcStack_98 = &DAT_00968258;
    pcStack_9c = (char *)0x6264e0;
    FUN_0045efbb();
    iVar3 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x24);
    if ((iVar3 != 0) && (*(int *)(iVar3 + -4) != 0)) {
      pcStack_98 = (char *)(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -0x54) = 1;
      pcStack_9c = (char *)0x62650e;
      piVar5 = (int *)FUN_00679e4e();
      iVar3 = *piVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      if (iVar3 == 0) {
        pcVar6 = (char *)0x0;
      }
      else {
        pcVar6 = (char *)FUN_00409205();
      }
      pcStack_98 = (char *)0x626529;
      _strlen(pcVar6);
      pcStack_9c = (char *)0x626534;
      pcStack_98 = pcVar6;
      FUN_0045efbb();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      FUN_00402fa6();
      for (uVar8 = 0;
          (iVar3 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x24), iVar3 != 0 &&
          (uVar8 < *(uint *)(iVar3 + -4))); uVar8 = uVar8 + 1) {
        pcStack_98 = (char *)(unaff_EBP + -0x20);
        pcStack_9c = (char *)0x626569;
        piVar5 = (int *)FUN_00679e4e();
        iVar3 = *piVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        if (iVar3 == 0) {
          uStack_a4 = 0;
        }
        else {
          uStack_a4 = FUN_00409205();
        }
        *(undefined4 *)(unaff_EBP + 8) = 0;
        pcStack_9c = *(char **)(*(int *)(*(int *)(unaff_EBP + -0x14) + 0x24) + uVar8 * 8);
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        puStack_a0 = (undefined1 *)uVar8;
        pcStack_98 = pcStack_9c;
        puVar7 = (undefined4 *)FUN_00434e21(unaff_EBP + 8);
        pcStack_98 = (char *)*puVar7;
        pcStack_9c = (char *)0x6265ba;
        FUN_0045efbb();
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (*(int *)(unaff_EBP + -0x20) != 0) {
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + -0x20) = 0;
        }
      }
    }
    iVar3 = *(int *)(unaff_EBP + -0x14);
    if (((((*(int *)(iVar3 + 0x1c) != 0) && (*(int *)(*(int *)(iVar3 + 0x1c) + -4) != 0)) ||
         ((*(int *)(iVar3 + 0x28) != 0 && (*(int *)(*(int *)(iVar3 + 0x28) + -4) != 0)))) ||
        ((((*(int *)(iVar3 + 0x20) != 0 && (*(int *)(*(int *)(iVar3 + 0x20) + -4) != 0)) ||
          (0 < *(int *)(unaff_EBP + -0x2c))) ||
         ((0 < *(int *)(unaff_EBP + -0x34) || (0 < *(int *)(unaff_EBP + -0x28))))))) ||
       (0 < *(int *)(unaff_EBP + -0x30))) {
      pcStack_98 = (char *)(unaff_EBP + 8);
      pcStack_9c = (char *)0x62662a;
      piVar5 = (int *)FUN_00679e4e();
      iVar3 = *piVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      if (iVar3 == 0) {
        pcVar6 = (char *)0x0;
      }
      else {
        pcVar6 = (char *)FUN_00409205();
      }
      pcStack_98 = (char *)0x626645;
      _strlen(pcVar6);
      pcStack_9c = (char *)0x626650;
      pcStack_98 = pcVar6;
      FUN_0045efbb();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (*(int *)(unaff_EBP + 8) != 0) {
        FUN_004030b1();
      }
    }
    iVar3 = *(int *)(unaff_EBP + -0x14);
    if ((*(int *)(iVar3 + 0x1c) != 0) && (*(int *)(*(int *)(iVar3 + 0x1c) + -4) != 0)) {
      for (uVar8 = 0;
          (iVar3 = *(int *)(iVar3 + 0x1c), iVar3 != 0 && (uVar8 < *(uint *)(iVar3 + -4)));
          uVar8 = uVar8 + 1) {
        if (0 < *(int *)(iVar3 + 4 + uVar8 * 8)) {
          pcStack_98 = (char *)(unaff_EBP + -0x20);
          pcStack_9c = (char *)0x6266a3;
          piVar5 = (int *)FUN_00679e4e();
          iVar3 = *piVar5;
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          if (iVar3 == 0) {
            puStack_a0 = (undefined1 *)0x0;
          }
          else {
            puStack_a0 = (undefined1 *)FUN_00409205();
          }
          *(undefined4 *)(unaff_EBP + 8) = 0;
          pcStack_9c = *(char **)(*(int *)(*(int *)(unaff_EBP + -0x14) + 0x1c) + uVar8 * 8);
          uStack_a4 = unaff_EBP + 8;
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          pcStack_98 = pcStack_9c;
          puVar7 = (undefined4 *)FUN_00434e21();
          pcStack_98 = (char *)*puVar7;
          pcStack_9c = (char *)0x6266f3;
          FUN_0045efbb();
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 8;
          if (*(int *)(unaff_EBP + -0x20) != 0) {
            FUN_004030b1();
            *(undefined4 *)(unaff_EBP + -0x20) = 0;
          }
        }
        iVar3 = *(int *)(unaff_EBP + -0x14);
      }
    }
    pcStack_98 = (char *)0x62672a;
    iVar3 = FUN_00455c59();
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar3 + 4);
    if (*(int *)(unaff_EBP + -0x3c) != 0) {
      pcStack_98 = (char *)0x62673e;
      FUN_0045e7c2();
      *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    }
    iVar3 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x28);
    if ((iVar3 != 0) && (*(int *)(iVar3 + -4) != 0)) {
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      *(undefined4 *)(unaff_EBP + 8) = 0;
      while ((iVar3 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x28), iVar3 != 0 &&
             (*(uint *)(unaff_EBP + -0x20) < *(uint *)(iVar3 + -4)))) {
        uVar8 = 0;
        piVar5 = (int *)(*(int *)(unaff_EBP + 8) + 0x10 +
                        *(int *)(*(int *)(unaff_EBP + -0x14) + 0x28));
        while( true ) {
          if ((*piVar5 == 0) || (*(uint *)(*piVar5 + -4) <= uVar8)) goto LAB_00626840;
          pcStack_98 = (char *)(*(int *)(unaff_EBP + -0x18) + 0x39);
          pcStack_9c = (char *)0x6267a9;
          sVar1 = FUN_0045f084();
          piVar5 = (int *)(*(int *)(unaff_EBP + 8) + 0x10 +
                          *(int *)(*(int *)(unaff_EBP + -0x14) + 0x28));
          if (*(int *)(*piVar5 + uVar8 * 4) == (int)sVar1) break;
          uVar8 = uVar8 + 1;
        }
        pcStack_98 = (char *)(unaff_EBP + -0x50);
        pcStack_9c = (char *)0x6267d5;
        piVar5 = (int *)FUN_00679e4e();
        iVar3 = *piVar5;
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        if (iVar3 == 0) {
          pcStack_9c = (char *)0x0;
        }
        else {
          pcStack_9c = (char *)FUN_00409205();
        }
        *(undefined4 *)(unaff_EBP + -0x4c) = 0;
        pcStack_98 = *(char **)(*(int *)(unaff_EBP + 8) +
                               *(int *)(*(int *)(unaff_EBP + -0x14) + 0x28));
        puStack_a0 = (undefined1 *)(unaff_EBP - 0x4c);
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        uStack_a4 = 0x626807;
        puVar7 = (undefined4 *)FUN_00434e21();
        pcStack_98 = (char *)*puVar7;
        pcStack_9c = (char *)0x626821;
        FUN_0045efbb();
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (*(int *)(unaff_EBP + -0x50) != 0) {
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + -0x50) = 0;
        }
LAB_00626840:
        *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 0x14;
      }
    }
    pcStack_98 = (char *)0x626857;
    _strlen(&DAT_00964314);
    pcStack_98 = &DAT_00964314;
    pcStack_9c = (char *)0x626862;
    FUN_0045efbb();
    if (0 < *(int *)(unaff_EBP + -0x34)) {
      pcStack_98 = (char *)(unaff_EBP + -0x18);
      pcStack_9c = (char *)0x626877;
      piVar5 = (int *)FUN_00679e4e();
      iVar3 = *piVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      if (iVar3 == 0) {
        pcStack_98 = (char *)0x0;
      }
      else {
        pcStack_98 = (char *)FUN_00409205();
      }
      *(undefined4 *)(unaff_EBP + 8) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      pcStack_9c = (char *)(unaff_EBP + 8);
      puStack_a0 = (undefined1 *)0x62689e;
      puVar7 = (undefined4 *)FUN_00434e21();
      pcStack_98 = (char *)*puVar7;
      pcStack_9c = (char *)0x6268b8;
      FUN_0045efbb();
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        FUN_004030b1();
      }
    }
    if (0 < *(int *)(unaff_EBP + -0x28)) {
      pcStack_98 = (char *)(unaff_EBP + -0x18);
      pcStack_9c = (char *)0x6268e9;
      piVar5 = (int *)FUN_00679e4e();
      iVar3 = *piVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      if (iVar3 == 0) {
        pcStack_98 = (char *)0x0;
      }
      else {
        pcStack_98 = (char *)FUN_00409205();
      }
      *(undefined4 *)(unaff_EBP + 8) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      pcStack_9c = (char *)(unaff_EBP + 8);
      puStack_a0 = (undefined1 *)0x626910;
      puVar7 = (undefined4 *)FUN_00434e21();
      pcStack_98 = (char *)*puVar7;
      pcStack_9c = (char *)0x62692a;
      FUN_0045efbb();
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        FUN_004030b1();
      }
    }
    if (0 < *(int *)(unaff_EBP + -0x2c)) {
      pcStack_98 = (char *)(unaff_EBP + -0x18);
      pcStack_9c = (char *)0x62695b;
      piVar5 = (int *)FUN_00679e4e();
      iVar3 = *piVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      if (iVar3 == 0) {
        pcStack_98 = (char *)0x0;
      }
      else {
        pcStack_98 = (char *)FUN_00409205();
      }
      *(undefined4 *)(unaff_EBP + 8) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      pcStack_9c = (char *)(unaff_EBP + 8);
      puStack_a0 = (undefined1 *)0x626982;
      puVar7 = (undefined4 *)FUN_00434e21();
      pcStack_98 = (char *)*puVar7;
      pcStack_9c = (char *)0x62699c;
      FUN_0045efbb();
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        FUN_004030b1();
      }
    }
    if (0 < *(int *)(unaff_EBP + -0x30)) {
      pcStack_98 = (char *)(unaff_EBP + -0x18);
      pcStack_9c = (char *)0x6269cd;
      piVar5 = (int *)FUN_00679e4e();
      iVar3 = *piVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      if (iVar3 == 0) {
        pcStack_98 = (char *)0x0;
      }
      else {
        pcStack_98 = (char *)FUN_00409205();
      }
      *(undefined4 *)(unaff_EBP + 8) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      pcStack_9c = (char *)(unaff_EBP + 8);
      puStack_a0 = (undefined1 *)0x6269f4;
      puVar7 = (undefined4 *)FUN_00434e21();
      pcStack_98 = (char *)*puVar7;
      pcStack_9c = (char *)0x626a0e;
      FUN_0045efbb();
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        FUN_004030b1();
      }
    }
    if ((((0 < *(int *)(unaff_EBP + -0x2c)) || (0 < *(int *)(unaff_EBP + -0x34))) ||
        (0 < *(int *)(unaff_EBP + -0x28))) || (0 < *(int *)(unaff_EBP + -0x30))) {
      pcStack_98 = (char *)0x626a44;
      _strlen(&DAT_00964314);
      pcStack_98 = &DAT_00964314;
      pcStack_9c = (char *)0x626a4f;
      FUN_0045efbb();
    }
    iVar3 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x20);
    if ((iVar3 != 0) && (*(int *)(iVar3 + -4) != 0)) {
      pcStack_98 = (char *)(unaff_EBP + 8);
      pcStack_9c = (char *)0x626a6e;
      piVar5 = (int *)FUN_00679e4e();
      iVar3 = *piVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      if (iVar3 == 0) {
        pcVar6 = (char *)0x0;
      }
      else {
        pcVar6 = (char *)FUN_00409205();
      }
      pcStack_98 = (char *)0x626a89;
      _strlen(pcVar6);
      pcStack_9c = (char *)0x626a94;
      pcStack_98 = pcVar6;
      FUN_0045efbb();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (*(int *)(unaff_EBP + 8) != 0) {
        FUN_004030b1();
      }
    }
    pcStack_98 = (char *)0x626aaf;
    _strlen(&DAT_00968258);
    pcStack_98 = &DAT_00968258;
    pcStack_9c = (char *)0x626aba;
    FUN_0045efbb();
    iVar3 = *(int *)(unaff_EBP + -0x14);
  }
  if ((*(char **)(unaff_EBP + -0x10) == (char *)0x0) || (**(char **)(unaff_EBP + -0x10) == '\0'))
  goto LAB_00626bd1;
  pcStack_98 = (char *)0x626adf;
  iVar4 = FUN_004029b9();
  *(int *)(unaff_EBP + 8) = iVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_007e62e9();
  }
  uVar8 = -(uint)(iVar4 != 0) & iVar4 + 8U;
  *(uint *)(unaff_EBP + -0x18) = -(uint)(uVar8 != 0) & uVar8 - 8;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_004c26c4();
  pcStack_98 = (char *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  if (*(int *)(unaff_EBP + -0x54) == 0) {
    puStack_a0 = (undefined1 *)(unaff_EBP + -0x10);
    *(char ***)(unaff_EBP + 8) = &pcStack_9c;
    uStack_a4 = 0x626b81;
    FUN_00450368();
    puStack_a0 = *(undefined1 **)(iVar3 + 0x10);
    uStack_a4 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    FUN_004c2677();
    FUN_007eddac();
    pcStack_98 = (char *)0x0;
    pcStack_9c = (char *)0x626ba2;
    FUN_007edf11();
    FUN_007e6e3c();
    iVar3 = FUN_004bc6a2();
    if ((iVar3 != 0x2001) && (iVar3 != 1)) goto LAB_00626bbe;
  }
  else {
    puStack_a0 = (undefined1 *)(unaff_EBP + -0x10);
    *(char ***)(unaff_EBP + 8) = &pcStack_9c;
    uStack_a4 = 0x626b32;
    pcStack_9c = extraout_ECX_01;
    FUN_00450368();
    puStack_a0 = *(undefined1 **)(iVar3 + 0x10);
    uStack_a4 = 4;
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    FUN_004c2677();
    FUN_007eddac();
    FUN_007ee0f6();
    FUN_007e6e3c();
    iVar3 = FUN_004bc6a2();
    if (iVar3 == 1) {
      *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0xd8);
    }
    else {
LAB_00626bbe:
      *(undefined4 *)(unaff_EBP + -0x38) = 0x7fffffff;
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_004c26e1();
LAB_00626bd1:
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
    pcStack_98 = (char *)0x626be1;
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x38);
}


