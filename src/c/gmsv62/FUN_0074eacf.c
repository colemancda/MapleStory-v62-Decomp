/* FUN_0074eacf - 0x0074eacf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0074eacf(void)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  char *pcVar11;
  undefined4 uVar12;
  int extraout_ECX;
  uint uVar13;
  int extraout_ECX_00;
  char *extraout_ECX_01;
  char *extraout_ECX_02;
  char *extraout_ECX_03;
  int unaff_EBP;
  uint uVar14;
  bool bVar15;
  undefined4 uVar16;
  int iStack_a0;
  char *pcStack_9c;
  char *pcStack_98;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  pcStack_98 = (char *)0x74eaf8;
  cVar4 = FUN_00433bfa();
  if (((cVar4 == '\0') && (*(int *)(extraout_ECX + 0x14) == *(int *)(unaff_EBP + 8))) &&
     (*(int *)(extraout_ECX + 0x18) == *(int *)(unaff_EBP + 0xc))) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0052e143();
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + 0x10) + 0xc;
    FUN_0045e2eb();
    pcStack_98 = (char *)0x74eb40;
    iVar5 = FUN_0055416a();
    if (iVar5 != 0) {
      pcStack_98 = (char *)(unaff_EBP + -0x24);
      pcStack_9c = (char *)0x74eb57;
      FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      pcStack_98 = (char *)0x74eb64;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        pcStack_98 = (char *)0x74eb78;
        FUN_00434e38();
      }
    }
    FUN_0045e2eb();
    pcStack_98 = (char *)0x74eb8f;
    iVar5 = FUN_0055443a();
    if (iVar5 != 0) {
      if ((*(char **)(unaff_EBP + -0x28) == (char *)0x0) || (**(char **)(unaff_EBP + -0x28) == '\0')
         ) {
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
        *(undefined4 *)(unaff_EBP + -0x10) = 1;
        *(undefined1 *)(unaff_EBP + -4) = 3;
      }
      else {
        pcStack_98 = &DAT_00965738;
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        pcStack_9c = (char *)0x74ebc9;
        FUN_00414edd();
        *(undefined4 *)(unaff_EBP + -0x10) = 2;
        *(undefined4 *)(unaff_EBP + -4) = 4;
      }
      pcStack_98 = (char *)(unaff_EBP + -0x1c);
      pcStack_9c = (char *)0x74ebed;
      FUN_00679d22();
      pcStack_98 = (char *)(unaff_EBP + -0x3c);
      *(undefined4 *)(unaff_EBP + -4) = 5;
      pcStack_9c = (char *)0x74ec00;
      puVar6 = (undefined4 *)FUN_0045e02d();
      pcStack_98 = (char *)*puVar6;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      pcStack_9c = (char *)0x74ec1b;
      FUN_0045efbb();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (*(int *)(unaff_EBP + -0x3c) != 0) {
        pcStack_98 = (char *)0x74ec2f;
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        pcStack_98 = (char *)0x74ec44;
        FUN_00434e38();
      }
      *(undefined4 *)(unaff_EBP + -4) = 3;
      if (((*(byte *)(unaff_EBP + -0x10) & 2) != 0) &&
         (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd,
         *(int *)(unaff_EBP + -0x18) != 0)) {
        pcStack_98 = (char *)0x74ec66;
        FUN_00434e38();
      }
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (((*(byte *)(unaff_EBP + -0x10) & 1) != 0) &&
         (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe,
         *(int *)(unaff_EBP + -0x24) != 0)) {
        pcStack_98 = (char *)0x74ec88;
        FUN_00434e38();
      }
    }
    FUN_0045e2eb();
    pcStack_98 = (char *)0x74ec9f;
    iVar5 = FUN_005544ee();
    if (iVar5 != 0) {
      if ((*(char **)(unaff_EBP + -0x28) == (char *)0x0) || (**(char **)(unaff_EBP + -0x28) == '\0')
         ) {
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 4;
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 7;
      }
      else {
        pcStack_98 = &DAT_00965738;
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        pcStack_9c = (char *)0x74ecd1;
        FUN_00414edd();
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 8;
        *(undefined4 *)(unaff_EBP + -4) = 8;
      }
      pcStack_98 = (char *)(unaff_EBP + -0x3c);
      pcStack_9c = (char *)0x74ecf0;
      FUN_00679d22();
      pcStack_98 = (char *)(unaff_EBP + -0x1c);
      *(undefined4 *)(unaff_EBP + -4) = 9;
      pcStack_9c = (char *)0x74ed03;
      puVar6 = (undefined4 *)FUN_0045e02d();
      pcStack_98 = (char *)*puVar6;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      pcStack_9c = (char *)0x74ed1e;
      FUN_0045efbb();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        pcStack_98 = (char *)0x74ed32;
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (*(int *)(unaff_EBP + -0x3c) != 0) {
        pcStack_98 = (char *)0x74ed47;
        FUN_00434e38();
      }
      *(undefined4 *)(unaff_EBP + -4) = 7;
      if (((*(byte *)(unaff_EBP + -0x10) & 8) != 0) &&
         (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffff7,
         *(int *)(unaff_EBP + -0x18) != 0)) {
        pcStack_98 = (char *)0x74ed69;
        FUN_00434e38();
      }
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (((*(byte *)(unaff_EBP + -0x10) & 4) != 0) &&
         (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffb,
         *(int *)(unaff_EBP + -0x24) != 0)) {
        pcStack_98 = (char *)0x74ed8b;
        FUN_00434e38();
      }
    }
    FUN_0045e2eb();
    pcStack_98 = (char *)0x74eda2;
    iVar5 = FUN_005542d2();
    if (iVar5 != 0) {
      if ((*(char **)(unaff_EBP + -0x28) == (char *)0x0) || (**(char **)(unaff_EBP + -0x28) == '\0')
         ) {
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 0x10;
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
      }
      else {
        pcStack_98 = &DAT_00965738;
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        pcStack_9c = (char *)0x74edd4;
        FUN_00414edd();
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 0x20;
        *(undefined4 *)(unaff_EBP + -4) = 0xc;
      }
      pcStack_98 = (char *)(unaff_EBP + -0x3c);
      pcStack_9c = (char *)0x74edf5;
      FUN_00679d22();
      pcStack_98 = (char *)(unaff_EBP + -0x1c);
      *(undefined4 *)(unaff_EBP + -4) = 0xd;
      pcStack_9c = (char *)0x74ee08;
      puVar6 = (undefined4 *)FUN_0045e02d();
      pcStack_98 = (char *)*puVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      pcStack_9c = (char *)0x74ee23;
      FUN_0045efbb();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        pcStack_98 = (char *)0x74ee37;
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      if (*(int *)(unaff_EBP + -0x3c) != 0) {
        pcStack_98 = (char *)0x74ee4c;
        FUN_00434e38();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xb;
      if (((*(byte *)(unaff_EBP + -0x10) & 0x20) != 0) &&
         (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xffffffdf,
         *(int *)(unaff_EBP + -0x18) != 0)) {
        pcStack_98 = (char *)0x74ee6e;
        FUN_00434e38();
      }
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (((*(byte *)(unaff_EBP + -0x10) & 0x10) != 0) && (*(int *)(unaff_EBP + -0x24) != 0)) {
        pcStack_98 = (char *)0x74ee8c;
        FUN_00434e38();
      }
    }
    if ((*(char **)(unaff_EBP + -0x28) == (char *)0x0) || (**(char **)(unaff_EBP + -0x28) == '\0'))
    {
      bVar3 = 1;
    }
    else {
      bVar3 = 0;
    }
    *(uint *)(unaff_EBP + -0x18) = (-(uint)bVar3 & 0xffffffed) + 0x13;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
    *(undefined4 *)(unaff_EBP + -0x5c) = 0;
    pcVar11 = *(char **)(unaff_EBP + 0x10);
    iVar5 = *(int *)(pcVar11 + 0x18);
    iVar7 = *(int *)(pcVar11 + 0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    pcStack_98 = (char *)(uint)(iVar5 != 0 || iVar7 != 0);
    pcStack_9c = (char *)(unaff_EBP + -0x50);
    iStack_a0 = *(int *)(unaff_EBP + 0x14);
    FUN_007511e2(pcVar11 + 0x20);
    if ((*(char **)(unaff_EBP + -0x50) != (char *)0x0) && (**(char **)(unaff_EBP + -0x50) != '\0'))
    {
      pcStack_98 = (char *)0xffffffff;
      pcStack_9c = (char *)0x74eefe;
      FUN_004655d4();
      pcStack_98 = (char *)0x74ef05;
      FUN_00414f8b();
    }
    if ((*(char **)(unaff_EBP + 0x18) != (char *)0x0) && (**(char **)(unaff_EBP + 0x18) != '\0')) {
      pcStack_98 = (char *)(unaff_EBP + 0x14);
      pcStack_9c = (char *)0x74ef24;
      puVar6 = (undefined4 *)FUN_00679d22();
      pcStack_98 = (char *)*puVar6;
      pcStack_9c = (char *)(unaff_EBP + -0x5c);
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      iStack_a0 = 0x74ef35;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      FUN_00414ebb();
      pcStack_98 = (char *)0xffffffff;
      pcStack_9c = (char *)0x74ef52;
      FUN_004655d4();
      pcStack_98 = (char *)0x74ef59;
      FUN_00414f8b();
    }
    pcStack_98 = pcVar11 + 0xbc;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    pcStack_9c = (char *)0x74ef6d;
    FUN_00414edd();
    if ((*(char **)(unaff_EBP + -0x4c) == (char *)0x0) || (**(char **)(unaff_EBP + -0x4c) == '\0'))
    {
      bVar3 = 1;
    }
    else {
      bVar3 = 0;
    }
    *(uint *)(unaff_EBP + -0x24) = (-(uint)bVar3 & 0xffffffed) + 0x13;
    if ((*(int *)(unaff_EBP + 0x1c) == 0) ||
       (*(undefined4 *)(unaff_EBP + 0x14) = 0x23,
       *(int *)(unaff_EBP + 0x1c) == *(int *)(unaff_EBP + 0x20))) {
      *(undefined4 *)(unaff_EBP + 0x14) = 0;
    }
    *(int *)(unaff_EBP + 0x14) =
         *(int *)(unaff_EBP + 0x14) + (-(uint)(*(int *)(unaff_EBP + 0x28) != 0) & 0x23);
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    if (*(int *)(unaff_EBP + 0x30) != 0) {
      pcStack_98 = *(char **)(unaff_EBP + 0x30);
      pcStack_9c = (char *)0x74efcb;
      FUN_00414edd();
      pcStack_98 = (char *)(unaff_EBP + 0x18);
      pcStack_9c = (char *)0x74efd5;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      pcStack_98 = (char *)0x74efe8;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      pcStack_98 = (char *)0x74eff8;
      pcStack_9c = (char *)FUN_00449713();
      *(char ***)(unaff_EBP + -0x1c) = &pcStack_98;
      iStack_a0 = 0x74f004;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      pcStack_9c = (char *)0x74f010;
      FUN_0044974c();
      pcStack_9c = (char *)0x74f017;
      iVar5 = FUN_00448ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      pcStack_98 = (char *)0x74f026;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        pcStack_98 = (char *)0x74f031;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x14) + (iVar5 / 0xde) * 0x10;
      if (*(int **)(unaff_EBP + 0x18) != (int *)0x0) {
        pcStack_98 = (char *)0x74f052;
        (**(code **)(**(int **)(unaff_EBP + 0x18) + 8))();
      }
    }
    if ((*(int *)(unaff_EBP + 0x38) != 0) && (0 < *(int *)(*(int *)(unaff_EBP + 0x38) + 0x10))) {
      *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x14) + 0x40;
    }
    if (*(int *)(unaff_EBP + -0x40) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(unaff_EBP + -0x40) + -4);
    }
    pcStack_98 = (char *)(iVar5 * 0x10 + *(int *)(unaff_EBP + 0x14) + *(int *)(unaff_EBP + -0x24) +
                          0x8e + *(int *)(unaff_EBP + -0x18));
    pcStack_9c = (char *)0xec;
    iStack_a0 = 4;
    FUN_0074d72a();
    *(undefined4 *)(unaff_EBP + -0x54) = 0;
    pcStack_98 = (char *)(unaff_EBP + -0x54);
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_a0 = 0x74f0b0;
    pcStack_9c = pcVar11;
    FUN_007518a4();
    pcStack_98 = (char *)0x74f0b9;
    FUN_00751b98();
    FUN_0045e2eb();
    pcStack_98 = (char *)(unaff_EBP + -0x34);
    pcStack_9c = (char *)0x74f0d3;
    FUN_0075572d();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iVar5 = FUN_0045e2eb();
    if ((iVar5 / 100 == 0x2b70) && (iVar5 != 0x10f7c0)) {
      pcStack_98 = (char *)0x74f10d;
      iVar5 = FUN_00455c59();
      iVar5 = *(int *)(iVar5 + 4);
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        pcStack_98 = (char *)0x74f11e;
        FUN_0045e7c2();
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      }
      uVar13 = *(uint *)(iVar5 + 0x483);
      while (uVar14 = uVar13, uVar14 != 0) {
        iVar5 = *(int *)((-(uint)(uVar14 != 0) & uVar14 - 0x10) + 4);
        uVar13 = -(uint)(iVar5 != 0) & iVar5 + 0x10U;
        if ((*(int *)(uVar14 + 0x11) == *(int *)(*(int *)(unaff_EBP + 0x10) + 0x18)) &&
           (*(int *)(uVar14 + 0x15) == *(int *)(*(int *)(unaff_EBP + 0x10) + 0x1c))) {
          *(undefined4 *)(unaff_EBP + 0x18) = 0;
          pcStack_98 = (char *)(unaff_EBP + -0x1c);
          *(undefined1 *)(unaff_EBP + -4) = 0x1a;
          pcStack_9c = (char *)0x74f179;
          puVar6 = (undefined4 *)FUN_00679d22();
          pcStack_98 = (char *)*puVar6;
          pcStack_9c = (char *)(unaff_EBP + 0x18);
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          iStack_a0 = 0x74f18d;
          FUN_00434e21();
          *(undefined1 *)(unaff_EBP + -4) = 0x1a;
          FUN_00414ebb();
          pcStack_98 = (char *)0x74f1a8;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          FUN_00414ebb();
        }
      }
    }
    iVar5 = FUN_0045e2eb();
    if ((iVar5 / 100 == 0x2b78) && (iVar5 % 10 < 3)) {
      pcStack_98 = (char *)0x74f1f4;
      iVar5 = FUN_00455c59();
      iVar5 = *(int *)(iVar5 + 4);
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        pcStack_98 = (char *)0x74f205;
        FUN_0045e7c2();
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      }
      uVar13 = *(uint *)(iVar5 + 0x497);
      while (uVar14 = uVar13, uVar14 != 0) {
        iVar5 = *(int *)((-(uint)(uVar14 != 0) & uVar14 - 0x10) + 4);
        uVar13 = -(uint)(iVar5 != 0) & iVar5 + 0x10U;
        if ((*(int *)(uVar14 + 0x11) == *(int *)(*(int *)(unaff_EBP + 0x10) + 0x18)) &&
           (*(int *)(uVar14 + 0x15) == *(int *)(*(int *)(unaff_EBP + 0x10) + 0x1c))) {
          *(undefined4 *)(unaff_EBP + 0x18) = 0;
          pcStack_98 = (char *)(unaff_EBP + -0x1c);
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          pcStack_9c = (char *)0x74f260;
          puVar6 = (undefined4 *)FUN_00679d22();
          pcStack_98 = (char *)*puVar6;
          pcStack_9c = (char *)(unaff_EBP + 0x18);
          *(undefined1 *)(unaff_EBP + -4) = 0x1d;
          iStack_a0 = 0x74f274;
          FUN_00434e21();
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          FUN_00414ebb();
          pcStack_98 = (char *)0x74f28f;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          FUN_00414ebb();
        }
      }
    }
    iVar5 = FUN_0045e2eb();
    if ((((iVar5 == 0x10fae3) || (iVar5 == 0x10fae6)) || (iVar5 == 0x10fae7)) || (iVar5 == 0x10fae9)
       ) {
      pcStack_98 = (char *)0x74f2d9;
      iVar5 = FUN_00455c59();
      iVar5 = *(int *)(iVar5 + 4);
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        pcStack_98 = (char *)0x74f2ea;
        FUN_0045e7c2();
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      }
      if (*(int *)(iVar5 + 0x4a7) != 0) {
        *(undefined4 *)(unaff_EBP + 0x18) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        pcStack_98 = (char *)(unaff_EBP + -0x1c);
        pcStack_9c = (char *)0x74f323;
        puVar6 = (undefined4 *)FUN_00679d22();
        pcStack_98 = (char *)*puVar6;
        pcStack_9c = (char *)(unaff_EBP + 0x18);
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        iStack_a0 = 0x74f334;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        FUN_00414ebb();
        pcStack_98 = (char *)0x74f34f;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        FUN_00414ebb();
      }
    }
    if ((*(char **)(unaff_EBP + -0x34) != (char *)0x0) && (**(char **)(unaff_EBP + -0x34) != '\0'))
    {
      iVar5 = *(int *)(unaff_EBP + -0x14);
      pcStack_98 = (char *)0x0;
      *(char ***)(unaff_EBP + 0x18) = &pcStack_9c;
      iStack_a0 = 7;
      FUN_00756efd(&pcStack_9c);
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      iStack_a0 = 0x74f38d;
      iStack_a0 = FUN_00449713();
      iVar7 = FUN_00757d85(10,0xdd,0);
      piVar10 = (int *)(iVar5 + 8);
      *piVar10 = *piVar10 + iVar7;
      *(int *)(unaff_EBP + -0x10) = iVar7;
    }
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    pcStack_98 = (char *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    pcStack_9c = (char *)0x74f3b5;
    FUN_00750398();
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    iVar5 = 0;
    *(undefined4 *)(unaff_EBP + 0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    bVar15 = DAT_00979114 != 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    if ((bVar15) &&
       ((iVar7 = FUN_0045e2eb(), iVar7 == 0x1bcd30 || (iVar7 = FUN_0045e2eb(), iVar7 == 0x1bf440))))
    {
      iVar5 = *(int *)(*(int *)(DAT_00979114 + 0x1744) + 4);
      iVar7 = FUN_0045e2eb();
      if ((iVar7 == 0x1bcd30) && ((iVar5 != 0 && (*(int *)(*(int *)(iVar5 + 0x78) + 0x10) != 0)))) {
        pcStack_98 = (char *)(unaff_EBP + -0x1c);
        pcStack_9c = (char *)0x74f430;
        puVar6 = (undefined4 *)FUN_0045a1d8();
        pcStack_98 = (char *)*puVar6;
        pcStack_9c = (char *)(unaff_EBP + 0x18);
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        iStack_a0 = 0x74f449;
        puVar6 = (undefined4 *)FUN_0074faaf();
        pcStack_98 = (char *)0x74f453;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x48),
                   (IBinding *)*puVar6);
        if (*(int **)(unaff_EBP + 0x18) != (int *)0x0) {
          pcStack_98 = (char *)0x74f460;
          (**(code **)(**(int **)(unaff_EBP + 0x18) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x23;
        FUN_00414ebb();
        if (*(int *)(unaff_EBP + -0x48) == 0) {
          pcStack_98 = (char *)0x74f47b;
          FUN_00878dfb();
        }
        iVar5 = FUN_0040e53d();
        iVar5 = iVar5 + 5;
        *(undefined4 *)(unaff_EBP + 0x18) = 1;
      }
      else {
        iVar7 = FUN_0045e2eb();
        if ((iVar7 == 0x1bf440) && ((iVar5 != 0 && (*(int *)(*(int *)(iVar5 + 0x78) + 0x14) != 0))))
        {
          pcStack_98 = (char *)(unaff_EBP + 0x18);
          pcStack_9c = (char *)0x74f4c2;
          FUN_00679d22();
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
          pcStack_98 = (char *)0x74f4cf;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 0x23;
          FUN_00414ebb();
          pcStack_98 = (char *)0x0;
          *(char ***)(unaff_EBP + 0x18) = &pcStack_9c;
          iStack_a0 = 0xb;
          FUN_00756efd(&pcStack_9c);
          *(undefined1 *)(unaff_EBP + -4) = 0x23;
          iStack_a0 = 0x74f4fa;
          iStack_a0 = FUN_00449713();
          iVar5 = FUN_00757d85(10,0xdd,0);
          iVar5 = iVar5 + 5;
          *(undefined4 *)(unaff_EBP + 0x18) = 2;
        }
        else {
          pcStack_98 = (char *)(unaff_EBP + -0x1c);
          pcStack_9c = (char *)0x74f526;
          FUN_00679d22();
          *(undefined1 *)(unaff_EBP + -4) = 0x27;
          pcStack_98 = (char *)0x74f533;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 0x23;
          FUN_00414ebb();
          pcStack_98 = (char *)0x0;
          *(char ***)(unaff_EBP + -0x1c) = &pcStack_9c;
          iStack_a0 = 0xb;
          FUN_00756efd(&pcStack_9c);
          *(undefined1 *)(unaff_EBP + -4) = 0x23;
          iStack_a0 = 0x74f55e;
          iStack_a0 = FUN_00449713();
          iVar5 = FUN_00757d85(10,0xdd,0);
          iVar5 = iVar5 + 5;
        }
      }
    }
    piVar10 = (int *)(*(int *)(unaff_EBP + -0x14) + 8);
    *piVar10 = *piVar10 + iVar5;
    pcStack_98 = (char *)0x0;
    pcStack_9c = (char *)0x1;
    iStack_a0 = *(int *)(unaff_EBP + 0xc);
    FUN_0075699b(unaff_EBP + -0x44,*(undefined4 *)(unaff_EBP + 8));
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    if (iVar5 != 0) {
      if (*(int *)(unaff_EBP + 0x18) == 1) {
        pcStack_98 = (char *)0xff;
        pcStack_9c = (char *)0x74f60d;
        FUN_004031b7();
        *(undefined1 *)(unaff_EBP + -4) = 0x2a;
        if (*(int *)(unaff_EBP + -0x30) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(*(int *)(unaff_EBP + -0x30) + -4);
        }
        if (*(int *)(unaff_EBP + -0x48) == 0) {
          pcStack_98 = (char *)0x74f62f;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x44) == 0) {
          pcStack_98 = (char *)0x74f63f;
          FUN_00878dfb();
        }
        iVar8 = *(int *)(unaff_EBP + -0x14);
        *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x44);
        iVar1 = *(int *)(iVar8 + 8);
        iVar2 = *(int *)(unaff_EBP + -0x10);
        *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + -0x48);
        iVar9 = FUN_0040e48b();
        iStack_a0 = *(int *)(unaff_EBP + -0x6c);
        pcStack_9c = *(char **)(unaff_EBP + -0x68);
        pcStack_98 = *(char **)(unaff_EBP + -100);
        pcVar11 = (char *)(**(code **)(**(int **)(unaff_EBP + 0xc) + 0x80))
                                    (*(undefined4 *)(unaff_EBP + 0xc),
                                     (uint)(*(int *)(iVar8 + 0xc) - iVar9) >> 1,
                                     (((iVar1 + iVar7 * -0x10) - iVar5) - iVar2) + -3,
                                     *(undefined4 *)(unaff_EBP + 8));
        if ((int)pcVar11 < 0) {
          pcStack_98 = *(char **)(unaff_EBP + 0xc);
          iStack_a0 = 0x74f69f;
          pcStack_9c = pcVar11;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x29;
        pcStack_98 = (char *)0x74f6ac;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          pcStack_98 = (char *)0x74f6b7;
          FUN_00878dfb();
        }
      }
      else {
        pcStack_98 = (char *)0x1;
        if (*(int *)(unaff_EBP + 0x18) == 2) {
          iVar7 = *(int *)(unaff_EBP + -0x14);
          *(char ***)(unaff_EBP + 0xc) = &pcStack_9c;
          iStack_a0 = 0xb;
          FUN_00756efd(&pcStack_9c);
        }
        else {
          iVar7 = *(int *)(unaff_EBP + -0x14);
          *(char ***)(unaff_EBP + 0xc) = &pcStack_9c;
          iStack_a0 = 10;
          FUN_00756efd(&pcStack_9c);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x29;
        iStack_a0 = 0x74f5bf;
        iStack_a0 = FUN_00449713();
        iVar8 = FUN_006a7cca();
        FUN_00757d85(10,0xdd,(((*(int *)(iVar7 + 8) + iVar8 * -0x10) - iVar5) -
                             *(int *)(unaff_EBP + -0x10)) + -3);
      }
    }
    pcStack_98 = *(char **)(unaff_EBP + -0x4c);
    if ((pcStack_98 == (char *)0x0) || (*pcStack_98 == '\0')) {
      iVar5 = *(int *)(unaff_EBP + -0x14);
    }
    else {
      iVar5 = *(int *)(unaff_EBP + -0x14);
      pcStack_9c = (char *)0xa;
      iStack_a0 = 0x74f6d4;
      FUN_007588fb();
    }
    pcStack_9c = &stack0xffffff6c;
    *(undefined1 **)(unaff_EBP + 0xc) = &stack0xffffff6c;
    pcStack_98 = *(char **)(unaff_EBP + -0x70);
    iStack_a0 = 0x74f6ea;
    FUN_00756efd();
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    pcStack_98 = (char *)0x74f6f6;
    pcStack_98 = (char *)FUN_00449713();
    iVar7 = *(int *)(unaff_EBP + -0x24);
    pcStack_9c = (char *)(iVar7 + 10);
    iStack_a0 = 0x74f705;
    FUN_00758757();
    if ((*(char **)(unaff_EBP + -0x28) != (char *)0x0) && (**(char **)(unaff_EBP + -0x28) != '\0'))
    {
      *(undefined1 **)(unaff_EBP + 0xc) = &stack0xffffff6c;
      pcStack_98 = (char *)0xb;
      iStack_a0 = 0x74f721;
      pcStack_9c = &stack0xffffff6c;
      FUN_00756efd();
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      pcStack_98 = (char *)0x74f72d;
      pcStack_98 = (char *)FUN_00449713();
      pcStack_9c = (char *)(iVar7 + 0x1f);
      iStack_a0 = 0x74f739;
      FUN_007585ac();
    }
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    *(int *)(unaff_EBP + 8) = iVar7 + 0x1d + *(int *)(unaff_EBP + -0x18);
    while (iVar8 = *(int *)(unaff_EBP + -0x40), iVar8 != 0) {
      if (*(uint *)(iVar8 + -4) <= *(uint *)(unaff_EBP + 0xc)) {
        if (iVar8 != 0) {
          iVar8 = *(int *)(iVar8 + -4);
          goto LAB_0074f8e3;
        }
        break;
      }
      pcStack_98 = (char *)0xff;
      pcStack_9c = (char *)0x74f76f;
      FUN_004031b7();
      *(undefined4 *)(unaff_EBP + 0x18) = *(undefined4 *)(iVar5 + 0x4dc);
      piVar10 = *(int **)(unaff_EBP + -0x44);
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      if (piVar10 == (int *)0x0) {
        pcStack_98 = (char *)0x74f78d;
        FUN_00878dfb();
        piVar10 = *(int **)(unaff_EBP + -0x44);
      }
      iVar7 = *piVar10;
      iStack_a0 = *(int *)(unaff_EBP + -0x90);
      pcStack_9c = *(char **)(unaff_EBP + -0x8c);
      pcStack_98 = *(char **)(unaff_EBP + -0x88);
      *(int **)(unaff_EBP + -0x1c) = piVar10;
      pcVar11 = (char *)(**(code **)(iVar7 + 0x80))
                                  (piVar10,10,*(int *)(unaff_EBP + 8) + 4,
                                   *(undefined4 *)(unaff_EBP + 0x18));
      if ((int)pcVar11 < 0) {
        pcStack_98 = *(char **)(unaff_EBP + -0x1c);
        iStack_a0 = 0x74f7c9;
        pcStack_9c = pcVar11;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      pcStack_98 = (char *)0x74f7d9;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        pcStack_98 = (char *)0x74f7e4;
        FUN_00878dfb();
      }
      pcStack_98 = (char *)0x74f7f0;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x6c));
      pcStack_98 = (char *)(unaff_EBP + -0x6c);
      pcStack_9c = (char *)0x74f7ff;
      iVar7 = FUN_00402e32();
      if (iVar7 < 0) {
        pcStack_98 = (char *)0x74f80b;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      pcStack_98 = (char *)0x74f815;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x80));
      pcStack_98 = (char *)(unaff_EBP + -0x80);
      pcStack_9c = (char *)0x74f81f;
      iVar7 = FUN_00402e32();
      if (iVar7 < 0) {
        pcStack_98 = (char *)0x74f82b;
        FUN_00878dfb();
      }
      pcStack_98 = (char *)(unaff_EBP + -0x80);
      pcStack_9c = (char *)0xe;
      iStack_a0 = unaff_EBP + -0x3c;
      *(undefined1 *)(unaff_EBP + -4) = 0x31;
      FUN_00756efd();
      *(undefined1 *)(unaff_EBP + -4) = 0x32;
      pcStack_9c = (char *)0x74f84f;
      pcStack_9c = (char *)FUN_00449749();
      iStack_a0 = *(int *)(unaff_EBP + 0xc);
      FUN_0075bcb4();
      iStack_a0 = 0x74f862;
      uVar12 = FUN_00449713();
      *(int **)(unaff_EBP + 0x18) = &iStack_a0;
      iStack_a0 = extraout_ECX_00;
      FUN_00448a17(uVar12);
      uVar12 = *(undefined4 *)(unaff_EBP + 8);
      uVar16 = 0x10;
      *(undefined1 *)(unaff_EBP + -4) = 0x32;
      FUN_004115d9(0x10,uVar12);
      FUN_00448e3a(uVar16,uVar12);
      *(undefined1 *)(unaff_EBP + -4) = 0x31;
      if (*(int **)(unaff_EBP + -0x3c) != (int *)0x0) {
        pcStack_98 = (char *)0x74f897;
        (**(code **)(**(int **)(unaff_EBP + -0x3c) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      pcStack_98 = (char *)0x74f8a4;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        pcStack_98 = (char *)0x74f8af;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      pcStack_98 = (char *)0x74f8bc;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        pcStack_98 = (char *)0x74f8c7;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 0x10;
      iVar7 = *(int *)(unaff_EBP + -0x24);
    }
    iVar8 = 0;
LAB_0074f8e3:
    pcStack_98 = (char *)(iVar8 * 0x10 + iVar7 + *(int *)(unaff_EBP + -0x18));
    pcStack_9c = (char *)0x74f8f6;
    FUN_007520ff();
    pcStack_98 = (char *)0x74f914;
    FUN_00757413();
    if ((*(char **)(unaff_EBP + -0x34) != (char *)0x0) && (**(char **)(unaff_EBP + -0x34) != '\0'))
    {
      pcStack_98 = (char *)0x1;
      *(char ***)(unaff_EBP + 0x10) = &pcStack_9c;
      iStack_a0 = 7;
      pcStack_9c = extraout_ECX_01;
      FUN_00756efd(&pcStack_9c);
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      iStack_a0 = 0x74f93f;
      iStack_a0 = FUN_00449713();
      iVar7 = FUN_006a7cca();
      FUN_00757d85(10,0xdd,((*(int *)(iVar5 + 8) + iVar7 * -0x10) - *(int *)(unaff_EBP + -0x10)) +
                           -5);
    }
    pcVar11 = *(char **)(unaff_EBP + 0x1c);
    if ((pcVar11 != (char *)0x0) && (pcVar11 != *(char **)(unaff_EBP + 0x20))) {
      if (*(int *)(unaff_EBP + -0x30) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(*(int *)(unaff_EBP + -0x30) + -4);
      }
      pcStack_9c = (char *)(((*(int *)(iVar5 + 8) + iVar7 * -0x10) - *(int *)(unaff_EBP + -0x10)) +
                           -0x27);
      iStack_a0 = 0x74f999;
      pcStack_98 = pcVar11;
      FUN_00759249();
      pcVar11 = extraout_ECX_02;
    }
    if (*(int *)(unaff_EBP + 0x24) != 0) {
      if (*(int *)(unaff_EBP + -0x30) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(*(int *)(unaff_EBP + -0x30) + -4);
      }
      pcStack_98 = (char *)(*(int *)(iVar5 + 8) + iVar7 * -0x10);
      pcStack_9c = (char *)0x74f9c0;
      FUN_007509d5();
      pcVar11 = extraout_ECX_03;
    }
    if (*(int *)(unaff_EBP + 0x28) != 0) {
      iStack_a0 = unaff_EBP + 0x34;
      *(char ***)(unaff_EBP + 0x10) = &pcStack_9c;
      pcStack_9c = pcVar11;
      pcStack_98 = pcVar11;
      FUN_0052e0fe();
      iStack_a0 = *(int *)(unaff_EBP + 0x30);
      FUN_0075a959((*(int *)(iVar5 + 8) - *(int *)(unaff_EBP + 0x14)) - *(int *)(unaff_EBP + -0x10),
                   *(undefined4 *)(unaff_EBP + 0x28),*(undefined4 *)(unaff_EBP + 0x2c));
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    if (*(int **)(unaff_EBP + -0x44) != (int *)0x0) {
      pcStack_98 = (char *)0x74fa03;
      (**(code **)(**(int **)(unaff_EBP + -0x44) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    if (*(int **)(unaff_EBP + -0x48) != (int *)0x0) {
      pcStack_98 = (char *)0x74fa20;
      (**(code **)(**(int **)(unaff_EBP + -0x48) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    FUN_0045f10c();
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_0045f10c();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + 0x38) != 0) {
      pcStack_98 = (char *)0x74fa9e;
      FUN_0048ba7b();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


