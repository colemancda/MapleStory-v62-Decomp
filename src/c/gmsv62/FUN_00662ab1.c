/* FUN_00662ab1 - 0x00662ab1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00662ab1(void)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int iVar10;
  int unaff_EBP;
  int *piVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  
  FUN_00879bb8();
  iVar5 = *(int *)(unaff_EBP + 8);
  iStack_54 = *(undefined4 *)(iVar5 + 0x35);
  *(uint *)(unaff_EBP + -0x40) = (uint)*(byte *)(iVar5 + 0x11);
  iStack_58 = iVar5 + 0x33;
  iStack_5c = 0x662ad7;
  uVar2 = FUN_0045f03e();
  iStack_5c = *(int *)(iVar5 + 0x3d);
  *(uint *)(unaff_EBP + -0x3c) = uVar2 & 0xff;
  sVar1 = FUN_0045f084(iVar5 + 0x39);
  uVar4 = *(undefined4 *)(iVar5 + 0x45);
  *(int *)(unaff_EBP + -0x38) = (int)sVar1;
  uVar3 = FUN_0045f084(iVar5 + 0x41,uVar4);
  uVar4 = *(undefined4 *)(iVar5 + 0x4d);
  *(undefined4 *)(unaff_EBP + 8) = uVar3;
  uVar3 = FUN_0045f084(iVar5 + 0x49,uVar4);
  uVar4 = *(undefined4 *)(iVar5 + 0x55);
  *(undefined4 *)(unaff_EBP + -0x2c) = uVar3;
  uVar3 = FUN_0045f084(iVar5 + 0x51,uVar4);
  uVar4 = *(undefined4 *)(iVar5 + 0x5d);
  *(undefined4 *)(unaff_EBP + -0x30) = uVar3;
  uVar3 = FUN_0045f084(iVar5 + 0x59,uVar4);
  uVar4 = *(undefined4 *)(iVar5 + 0xa1);
  *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
  sVar1 = FUN_0045f084(iVar5 + 0x9d,uVar4);
  uVar4 = *(undefined4 *)(iVar5 + 0x45);
  *(int *)(unaff_EBP + -0x28) = (int)sVar1;
  sVar1 = FUN_0045f084(iVar5 + 0x41,uVar4);
  iVar12 = *(int *)(unaff_EBP + 0x18);
  iStack_54 = *(undefined4 *)(iVar5 + 0x55);
  *(int *)(unaff_EBP + -0x34) = (sVar1 * iVar12) / 100 + (int)*(short *)(unaff_EBP + 8);
  iStack_58 = iVar5 + 0x51;
  iStack_5c = 0x662b73;
  sVar1 = FUN_0045f084();
  iStack_5c = *(int *)(iVar5 + 0x4d);
  *(int *)(unaff_EBP + -0x30) = (sVar1 * iVar12) / 100 + (int)*(short *)(unaff_EBP + -0x30);
  sVar1 = FUN_0045f084(iVar5 + 0x49);
  iVar10 = (sVar1 * iVar12) / 100 + (int)*(short *)(unaff_EBP + -0x2c);
  sVar1 = FUN_0045f084(iVar5 + 0x59,*(undefined4 *)(iVar5 + 0x5d));
  *(int *)(unaff_EBP + -0x2c) = (sVar1 * iVar12) / 100 + (int)*(short *)(unaff_EBP + -0x24);
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + 0x18) = 0;
  iStack_54 = 0x662bdf;
  FUN_0046575e();
  iStack_54 = 0x662be7;
  FUN_0052e11f();
  iVar5 = *(int *)(unaff_EBP + 0x10);
  iStack_54 = 0x662bf1;
  FUN_0046575e();
  *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(*(int *)(unaff_EBP + 0x14) + 4);
  iStack_54 = -1;
  piVar11 = (int *)(iVar5 + 0xc);
  *(undefined4 *)(unaff_EBP + 8) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x1c) = 1;
  *(int **)(unaff_EBP + -0x24) = piVar11;
  while( true ) {
    if ((iStack_54 == *(int *)(unaff_EBP + 0x1c)) || (iStack_54 == *(int *)(unaff_EBP + 0x20))) {
      iStack_54 = 0x662d02;
      FUN_0046575e();
    }
    else {
      iStack_58 = 1;
      iStack_5c = unaff_EBP + -0x50;
      uVar4 = FUN_00458c4f();
      *(undefined4 *)(unaff_EBP + -0x44) = uVar4;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iStack_54 = 0x662c40;
      FUN_0052e11f();
      iStack_54 = 0x662c48;
      FUN_0046575e();
      iVar5 = *(int *)(*(int *)(unaff_EBP + -0x44) + 4);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *piVar11 = iVar5;
      iStack_54 = 0x662c5c;
      FUN_0046575e();
      iVar5 = *piVar11;
      if ((((iVar5 != 0) && (iVar12 = *(int *)(unaff_EBP + -0x1c), iVar12 != 0x1e)) &&
          (iVar12 != 0x26)) && (((iVar12 == 0xe || (iVar12 < 0x15)) || (0x30 < iVar12)))) {
        iStack_54 = *(undefined4 *)(iVar5 + 0x38);
        iStack_58 = iVar5 + 0x34;
        iStack_5c = 0x662c8a;
        sVar1 = FUN_0045f084();
        iStack_5c = *(int *)(iVar5 + 0x40);
        *(int *)(unaff_EBP + 0x18) = *(int *)(unaff_EBP + 0x18) + (int)sVar1;
        sVar1 = FUN_0045f084(iVar5 + 0x3c);
        uVar4 = *(undefined4 *)(iVar5 + 0x48);
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + (int)sVar1;
        sVar1 = FUN_0045f084(iVar5 + 0x44,uVar4);
        uVar4 = *(undefined4 *)(iVar5 + 0x50);
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + (int)sVar1;
        sVar1 = FUN_0045f084(iVar5 + 0x4c,uVar4);
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + (int)sVar1;
      }
      piVar11 = *(int **)(unaff_EBP + -0x24);
    }
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + -1;
    piVar11 = piVar11 + 2;
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
    *(int **)(unaff_EBP + -0x24) = piVar11;
    if (0x30 < *(int *)(unaff_EBP + -0x1c)) break;
    iStack_54 = *(int *)(unaff_EBP + 8);
  }
  *(undefined4 *)(unaff_EBP + 8) = 0xffffff9b;
  *(undefined4 *)(unaff_EBP + -0x24) = 1;
  *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + 0x14) + 8;
  do {
    iStack_54 = *(int *)(unaff_EBP + 8);
    if ((iStack_54 == *(int *)(unaff_EBP + 0x1c)) || (iStack_54 == *(int *)(unaff_EBP + 0x20))) {
      iStack_54 = 0x662dbb;
      FUN_0046575e();
    }
    else {
      iStack_58 = 1;
      iStack_5c = unaff_EBP + -0x50;
      iStack_54 = FUN_00458c4f();
      *(undefined4 *)(unaff_EBP + -4) = 1;
      iVar5 = *(int *)(unaff_EBP + -0x1c);
      iStack_58 = 0x662d37;
      FUN_004653ef();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_54 = 0x662d43;
      FUN_0046575e();
      iVar5 = *(int *)(iVar5 + 4);
      if ((((iVar5 != 0) && (iVar12 = *(int *)(unaff_EBP + -0x24), iVar12 != 0x1e)) &&
          (iVar12 != 0x26)) && (((iVar12 == 0xe || (iVar12 < 0x15)) || (0x30 < iVar12)))) {
        iStack_54 = *(undefined4 *)(iVar5 + 0x38);
        iStack_58 = iVar5 + 0x34;
        iStack_5c = 0x662d72;
        sVar1 = FUN_0045f084();
        iStack_5c = *(int *)(iVar5 + 0x40);
        *(int *)(unaff_EBP + 0x18) = *(int *)(unaff_EBP + 0x18) + (int)sVar1;
        sVar1 = FUN_0045f084(iVar5 + 0x3c);
        uVar4 = *(undefined4 *)(iVar5 + 0x48);
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + (int)sVar1;
        sVar1 = FUN_0045f084(iVar5 + 0x44,uVar4);
        uVar4 = *(undefined4 *)(iVar5 + 0x50);
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + (int)sVar1;
        sVar1 = FUN_0045f084(iVar5 + 0x4c,uVar4);
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + (int)sVar1;
      }
    }
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + -1;
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 8;
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
  } while (*(int *)(unaff_EBP + -0x24) < 0x31);
  do {
    *(undefined4 *)(unaff_EBP + 8) = 1;
    do {
      iVar12 = *(int *)(unaff_EBP + 8) * 8;
      iVar5 = *(int *)(iVar12 + 4 + *(int *)(unaff_EBP + 0x10));
      *(int *)(unaff_EBP + 0x1c) = iVar12;
      iVar12 = iVar12 + *(int *)(unaff_EBP + 0x10);
      if (iVar5 != 0) {
        *(undefined4 *)(unaff_EBP + -0x44) = 0;
        *(undefined4 *)(unaff_EBP + -4) = 2;
        if (*(int *)(unaff_EBP + 8) == 0xe) {
          iStack_54 = *(undefined4 *)(unaff_EBP + 0xc);
          iStack_58 = 0x662e0e;
          FUN_004c2596();
LAB_00662f0d:
          iStack_54 = 0x662f15;
          iStack_54 = FUN_0045e2eb();
          *(int **)(unaff_EBP + 0x20) = &iStack_5c;
          iStack_5c = extraout_ECX_00;
          iStack_58 = extraout_ECX_00;
          FUN_004c2575(unaff_EBP + -0x48);
          uVar4 = *(undefined4 *)(unaff_EBP + -0x28);
          *(undefined1 *)(unaff_EBP + -4) = 2;
          sVar1 = FUN_0067176d(uVar4);
          iVar6 = (*(int *)(unaff_EBP + -0x18) - (int)sVar1) + *(int *)(unaff_EBP + -0x2c);
          sVar1 = FUN_0067175e(iVar6);
          iVar7 = (*(int *)(unaff_EBP + -0x10) - (int)sVar1) + *(int *)(unaff_EBP + -0x30);
          sVar1 = FUN_0067174f(iVar7);
          iVar8 = (*(int *)(unaff_EBP + -0x14) - (int)sVar1) + iVar10;
          sVar1 = FUN_00671740(iVar8);
          iVar9 = (*(int *)(unaff_EBP + 0x18) - (int)sVar1) + *(int *)(unaff_EBP + -0x34);
          uVar3 = *(undefined4 *)(unaff_EBP + -0x38);
          uVar14 = *(undefined4 *)(unaff_EBP + -0x3c);
          uVar13 = *(undefined4 *)(unaff_EBP + -0x40);
          FUN_0048b97b(uVar13,uVar14,uVar3,iVar9);
          iVar6 = FUN_004c216d(uVar13,uVar14,uVar3,iVar9,iVar8,iVar7,iVar6,uVar4);
          if (iVar6 == 0) {
            iStack_54 = *(undefined4 *)(iVar5 + 0x38);
            iStack_58 = iVar5 + 0x34;
            iStack_5c = 0x66316a;
            sVar1 = FUN_0045f084();
            iStack_5c = *(int *)(iVar5 + 0x48);
            *(int *)(unaff_EBP + 0x18) = *(int *)(unaff_EBP + 0x18) - (int)sVar1;
            sVar1 = FUN_0045f084(iVar5 + 0x44);
            uVar4 = *(undefined4 *)(iVar5 + 0x40);
            *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) - (int)sVar1;
            sVar1 = FUN_0045f084(iVar5 + 0x3c,uVar4);
            uVar4 = *(undefined4 *)(iVar5 + 0x50);
            *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) - (int)sVar1;
            sVar1 = FUN_0045f084(iVar5 + 0x4c,uVar4);
            *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) - (int)sVar1;
LAB_006631ab:
            if (*(int *)(iVar12 + 4) != 0) {
              iStack_54 = 0;
              iStack_58 = 0x6631b8;
              FUN_00449913();
              *(undefined4 *)(iVar12 + 4) = 0;
            }
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            if (*(int *)(unaff_EBP + -0x44) != 0) {
              iStack_54 = 0;
              iStack_58 = 0x6631d1;
              FUN_004c26f7();
              *(undefined4 *)(unaff_EBP + -0x44) = 0;
            }
            break;
          }
        }
        else {
          if (*(int *)(unaff_EBP + 8) == 0x1e) {
            iStack_54 = *(int *)(unaff_EBP + 0xc) + 8;
            iStack_58 = 0x662e2c;
            FUN_004c2596();
          }
          else {
            if (*(int *)(unaff_EBP + 8) == 0x26) {
              iStack_54 = *(int *)(unaff_EBP + 0xc) + 0x10;
              iStack_58 = 0x662ef3;
              FUN_004c2596();
              if (*(int *)(unaff_EBP + 8) == 0x26) goto LAB_00662e2c;
            }
            if ((*(int *)(unaff_EBP + 8) < 0x15) || (0x30 < *(int *)(unaff_EBP + 8)))
            goto LAB_00662f0d;
          }
LAB_00662e2c:
          iStack_54 = 0x662e34;
          iStack_54 = FUN_0045e2eb();
          *(int **)(unaff_EBP + 0x20) = &iStack_5c;
          iStack_5c = extraout_ECX;
          iStack_58 = extraout_ECX;
          FUN_004c2575(unaff_EBP + -0x48);
          uVar4 = *(undefined4 *)(unaff_EBP + -0x28);
          iVar5 = *(int *)(unaff_EBP + -0x18) + *(int *)(unaff_EBP + -0x2c);
          iVar6 = *(int *)(unaff_EBP + -0x10) + *(int *)(unaff_EBP + -0x30);
          iVar7 = *(int *)(unaff_EBP + -0x14) + iVar10;
          iVar8 = *(int *)(unaff_EBP + 0x18) + *(int *)(unaff_EBP + -0x34);
          uVar3 = *(undefined4 *)(unaff_EBP + -0x38);
          *(undefined1 *)(unaff_EBP + -4) = 2;
          uVar14 = *(undefined4 *)(unaff_EBP + -0x3c);
          uVar13 = *(undefined4 *)(unaff_EBP + -0x40);
          FUN_0048b97b(uVar13,uVar14,uVar3,iVar8,iVar7,iVar6,iVar5,uVar4);
          iVar5 = FUN_004c216d(uVar13,uVar14,uVar3,iVar8,iVar7,iVar6,iVar5,uVar4);
          if (iVar5 == 0) goto LAB_006631ab;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x44) != 0) {
          iStack_54 = 0;
          iStack_58 = 0x662ea0;
          FUN_004c26f7();
          *(undefined4 *)(unaff_EBP + -0x44) = 0;
        }
      }
      iVar12 = *(int *)(*(int *)(unaff_EBP + 0x1c) + 4 + *(int *)(unaff_EBP + 0x14));
      iVar5 = *(int *)(unaff_EBP + 0x1c) + *(int *)(unaff_EBP + 0x14);
      if (iVar12 != 0) {
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        *(undefined4 *)(unaff_EBP + -4) = 5;
        if (*(int *)(unaff_EBP + 8) == 0xe) {
          iStack_54 = *(undefined4 *)(unaff_EBP + 0xc);
          iStack_58 = 0x662ed9;
          FUN_004c2596();
LAB_0066306a:
          iStack_54 = 0x663072;
          iStack_54 = FUN_0045e2eb();
          *(int **)(unaff_EBP + 0x1c) = &iStack_5c;
          iStack_5c = extraout_ECX_02;
          iStack_58 = extraout_ECX_02;
          FUN_004c2575(unaff_EBP + -0x20);
          uVar4 = *(undefined4 *)(unaff_EBP + -0x28);
          *(undefined1 *)(unaff_EBP + -4) = 5;
          sVar1 = FUN_0067176d(uVar4);
          iVar6 = (*(int *)(unaff_EBP + -0x18) - (int)sVar1) + *(int *)(unaff_EBP + -0x2c);
          sVar1 = FUN_0067175e(iVar6);
          iVar7 = (*(int *)(unaff_EBP + -0x10) - (int)sVar1) + *(int *)(unaff_EBP + -0x30);
          sVar1 = FUN_0067174f(iVar7);
          iVar8 = (*(int *)(unaff_EBP + -0x14) - (int)sVar1) + iVar10;
          sVar1 = FUN_00671740(iVar8);
          iVar9 = (*(int *)(unaff_EBP + 0x18) - (int)sVar1) + *(int *)(unaff_EBP + -0x34);
          uVar3 = *(undefined4 *)(unaff_EBP + -0x38);
          uVar14 = *(undefined4 *)(unaff_EBP + -0x3c);
          uVar13 = *(undefined4 *)(unaff_EBP + -0x40);
          FUN_0048b97b(uVar13,uVar14,uVar3,iVar9);
          iVar6 = FUN_004c216d(uVar13,uVar14,uVar3,iVar9,iVar8,iVar7,iVar6,uVar4);
          if (iVar6 != 0) {
            if (*(int *)(unaff_EBP + 8) == 0xb) {
              iStack_54 = 0x663103;
              iVar6 = FUN_0045e2eb();
              if (iVar6 / 100000 != 0x11) goto LAB_00663011;
              if (*(int *)(*(int *)(unaff_EBP + 0x10) + 0x5c) == 0) goto LAB_006631d6;
            }
            if (*(int *)(unaff_EBP + 8) == 10) {
              *(undefined4 *)(unaff_EBP + 0x1c) = DAT_00973a94;
              iStack_54 = 0x66313f;
              iStack_54 = FUN_0045e2eb();
              iStack_58 = 0x663148;
              iVar6 = FUN_005540b6();
              if ((iVar6 != 0) && (*(int *)(*(int *)(unaff_EBP + 0x10) + 0x54) == 0))
              goto LAB_006631d6;
            }
LAB_00663011:
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            if (*(int *)(unaff_EBP + -0x1c) != 0) {
              iStack_54 = 0;
              iStack_58 = 0x663025;
              FUN_004c26f7();
              *(undefined4 *)(unaff_EBP + -0x1c) = 0;
            }
            goto LAB_00663029;
          }
LAB_006631d6:
          iStack_54 = *(undefined4 *)(iVar12 + 0x38);
          iStack_58 = iVar12 + 0x34;
          iStack_5c = 0x6631e2;
          sVar1 = FUN_0045f084();
          iStack_5c = *(int *)(iVar12 + 0x48);
          *(int *)(unaff_EBP + 0x18) = *(int *)(unaff_EBP + 0x18) - (int)sVar1;
          sVar1 = FUN_0045f084(iVar12 + 0x44);
          uVar4 = *(undefined4 *)(iVar12 + 0x40);
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) - (int)sVar1;
          sVar1 = FUN_0045f084(iVar12 + 0x3c,uVar4);
          uVar4 = *(undefined4 *)(iVar12 + 0x50);
          *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) - (int)sVar1;
          sVar1 = FUN_0045f084(iVar12 + 0x4c,uVar4);
          *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) - (int)sVar1;
        }
        else {
          if (*(int *)(unaff_EBP + 8) == 0x1e) {
            iStack_54 = *(int *)(unaff_EBP + 0xc) + 8;
            iStack_58 = 0x662fb3;
            FUN_004c2596();
          }
          else {
            if (*(int *)(unaff_EBP + 8) == 0x26) {
              iStack_54 = *(int *)(unaff_EBP + 0xc) + 0x10;
              iStack_58 = 0x663050;
              FUN_004c2596();
              if (*(int *)(unaff_EBP + 8) == 0x26) goto LAB_00662fb3;
            }
            if ((*(int *)(unaff_EBP + 8) < 0x15) || (0x30 < *(int *)(unaff_EBP + 8)))
            goto LAB_0066306a;
          }
LAB_00662fb3:
          iStack_54 = 0x662fbb;
          iStack_54 = FUN_0045e2eb();
          *(int **)(unaff_EBP + 0x1c) = &iStack_5c;
          iStack_5c = extraout_ECX_01;
          iStack_58 = extraout_ECX_01;
          FUN_004c2575(unaff_EBP + -0x20);
          uVar4 = *(undefined4 *)(unaff_EBP + -0x28);
          iVar12 = *(int *)(unaff_EBP + -0x18) + *(int *)(unaff_EBP + -0x2c);
          iVar6 = *(int *)(unaff_EBP + -0x10) + *(int *)(unaff_EBP + -0x30);
          iVar7 = *(int *)(unaff_EBP + -0x14) + iVar10;
          iVar8 = *(int *)(unaff_EBP + 0x18) + *(int *)(unaff_EBP + -0x34);
          uVar3 = *(undefined4 *)(unaff_EBP + -0x38);
          *(undefined1 *)(unaff_EBP + -4) = 5;
          uVar14 = *(undefined4 *)(unaff_EBP + -0x3c);
          uVar13 = *(undefined4 *)(unaff_EBP + -0x40);
          FUN_0048b97b(uVar13,uVar14,uVar3,iVar8,iVar7,iVar6,iVar12,uVar4);
          iVar12 = FUN_004c216d(uVar13,uVar14,uVar3,iVar8,iVar7,iVar6,iVar12,uVar4);
          if (iVar12 != 0) goto LAB_00663011;
        }
        if (*(int *)(iVar5 + 4) != 0) {
          iStack_54 = 0;
          iStack_58 = 0x663230;
          FUN_00449913();
          *(undefined4 *)(iVar5 + 4) = 0;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x1c) != 0) {
          iStack_54 = 0;
          iStack_58 = 0x663245;
          FUN_004c26f7();
          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        }
        break;
      }
LAB_00663029:
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    } while (*(int *)(unaff_EBP + 8) < 0x31);
    if (0x30 < *(int *)(unaff_EBP + 8)) {
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
  } while( true );
}


