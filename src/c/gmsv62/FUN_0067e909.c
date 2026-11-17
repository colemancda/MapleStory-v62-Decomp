/* FUN_0067e909 - 0x0067e909 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0067e909(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  wchar_t *pwVar6;
  short *psVar7;
  undefined4 *puVar8;
  int iVar9;
  wchar_t *extraout_ECX;
  int extraout_ECX_00;
  wchar_t *extraout_ECX_01;
  wchar_t *extraout_ECX_02;
  wchar_t *extraout_ECX_03;
  int extraout_ECX_04;
  wchar_t *extraout_ECX_05;
  wchar_t *extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  int extraout_ECX_09;
  int extraout_ECX_10;
  int extraout_ECX_11;
  int extraout_ECX_12;
  int extraout_ECX_13;
  int unaff_EBP;
  wchar_t *pwStack_e4;
  int iStack_e0;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0;
  *(uint *)(unaff_EBP + -100) = *(int *)(unaff_EBP + 0xc) * 2 | *(uint *)(unaff_EBP + 0x10);
  iStack_e0 = unaff_EBP + -100;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  pwStack_e4 = L"삅蔏ই";
  iVar2 = FUN_0067f8e6();
  if (iVar2 == 0) {
    iStack_e0 = *(int *)(unaff_EBP + 0xc);
    pwStack_e4 = (wchar_t *)(unaff_EBP + -0x2c);
    FUN_0040e564();
    if (*(int *)(unaff_EBP + -0x2c) == 0) {
      iVar4 = *(int *)(unaff_EBP + 8);
      *(undefined4 *)(iVar4 + 4) = 0;
      *(undefined4 *)(unaff_EBP + -0x3c) = 1;
    }
    else {
      iStack_e0 = 0x67e98e;
      FUN_0040810c();
      iStack_e0 = 0;
      *(wchar_t ***)(unaff_EBP + -0x10) = &pwStack_e4;
      FUN_004059fd(unaff_EBP + -0x20);
      iVar2 = unaff_EBP + -0xd8;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_0040263d(iVar2);
      FUN_004048a4(iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      pwStack_e4 = (wchar_t *)0x67e9c4;
      iVar2 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x7c) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      if (iVar2 != 0) {
        iStack_e0 = 0x67e9df;
        iVar2 = FUN_00404b30();
        if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
          iStack_e0 = 0x67e9ed;
          FUN_00878dfb();
        }
      }
      pwVar6 = (wchar_t *)(unaff_EBP + -0xd8);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_e0 = 0x67e9fd;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_e0 = 0x67ea08;
        FUN_00878dfb();
        pwVar6 = extraout_ECX;
      }
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        iStack_e0 = 0;
        *(wchar_t ***)(unaff_EBP + -0x10) = &pwStack_e4;
        pwStack_e4 = pwVar6;
        FUN_00679e4e(&pwStack_e4,0x3b4);
        iVar2 = unaff_EBP + -0x98;
        *(undefined1 *)(unaff_EBP + -4) = 7;
        FUN_0040263d(iVar2);
        FUN_004048a4(iVar2);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        pwStack_e4 = 
        L"옻薉ｸ\xffff疉琐贝碅\xffff僿䶍\xe810悐￘옻੽윻ٴ\xe850ꍍ\x1f薍ｨ\xffff왐ﱅ\xe80b䄅￘옻絙倆㋨ᾣ贀\xe44d疉\xe8e8୑"
        ;
        iVar2 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x88) = iVar2;
        *(undefined4 *)(unaff_EBP + 0x10) = 0;
        if (iVar2 != 0) {
          iStack_e0 = 0x67eaa0;
          iVar2 = FUN_00404b30();
          if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
            iStack_e0 = 0x67eaae;
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        iStack_e0 = 0x67eabe;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          iStack_e0 = 0x67eac9;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        FUN_0067f625();
        *(int **)(unaff_EBP + -0x10) = &iStack_e0;
        pwStack_e4 = (wchar_t *)0x658;
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        FUN_00679e4e(&iStack_e0);
        pwStack_e4 = (wchar_t *)(unaff_EBP + -0x74);
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        FUN_0040263d();
        iStack_e0 = FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        pwStack_e4 = L"奙䶍诤\xe8f8શ";
        uVar3 = FUN_00412550();
        iVar2 = FUN_0067f5d0();
        *(undefined4 *)(iVar2 + 0x18) = uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        iStack_e0 = 0x67eb2a;
        iVar2 = unaff_EBP + -0x74;
        iVar4 = FUN_00402bc3();
        iStack_e0 = iVar2;
        if (iVar4 < 0) {
          iStack_e0 = 0x67eb35;
          FUN_00878dfb();
          iStack_e0 = extraout_ECX_00;
        }
        *(int **)(unaff_EBP + -0x10) = &iStack_e0;
        pwStack_e4 = (wchar_t *)0x65a;
        FUN_00679e4e(&iStack_e0);
        pwStack_e4 = (wchar_t *)(unaff_EBP + -0x74);
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        FUN_0040263d();
        iStack_e0 = FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        pwStack_e4 = L"奙䶍诤\xe8f8ਖ਼";
        uVar3 = FUN_00412550();
        iVar2 = FUN_0067f5d0();
        *(undefined4 *)(iVar2 + 0x1c) = uVar3;
        pwVar6 = (wchar_t *)(unaff_EBP + -0x74);
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        iStack_e0 = 0x67eb87;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          iStack_e0 = 0x67eb92;
          FUN_00878dfb();
          pwVar6 = extraout_ECX_01;
        }
        iStack_e0 = 0;
        *(wchar_t ***)(unaff_EBP + -0x10) = &pwStack_e4;
        pwStack_e4 = pwVar6;
        FUN_00679e4e(&pwStack_e4,0x66c);
        iVar2 = unaff_EBP + -200;
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        FUN_0040263d(iVar2);
        FUN_004048a4(iVar2);
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        pwStack_e4 = (wchar_t *)0x67ebcc;
        iVar2 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x78) = iVar2;
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
        if (iVar2 != 0) {
          iStack_e0 = 0x67ebe2;
          iVar2 = FUN_00404b30();
          if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
            iStack_e0 = 0x67ebf3;
            FUN_00878dfb();
          }
        }
        pwVar6 = (wchar_t *)(unaff_EBP + -200);
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        iStack_e0 = 0x67ec03;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          iStack_e0 = 0x67ec0e;
          FUN_00878dfb();
          pwVar6 = extraout_ECX_02;
        }
        iStack_e0 = 0;
        *(wchar_t ***)(unaff_EBP + -0x10) = &pwStack_e4;
        pwStack_e4 = pwVar6;
        FUN_00679e4e(&pwStack_e4,0x672);
        iVar2 = unaff_EBP + -0xa8;
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        FUN_0040263d(iVar2);
        FUN_004048a4(iVar2);
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        pwStack_e4 = (wchar_t *)0x67ec48;
        iVar2 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x84) = iVar2;
        *(undefined4 *)(unaff_EBP + -0x30) = 0;
        if (iVar2 != 0) {
          iStack_e0 = 0x67ec64;
          iVar2 = FUN_0041a4e5();
          if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
            iStack_e0 = 0x67ec75;
            FUN_00878dfb();
          }
        }
        pwVar6 = (wchar_t *)(unaff_EBP + -0xa8);
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        iStack_e0 = 0x67ec85;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          iStack_e0 = 0x67ec90;
          FUN_00878dfb();
          pwVar6 = extraout_ECX_03;
        }
        if (*(int *)(unaff_EBP + -0x30) != 0) {
          iStack_e0 = 0x67eca6;
          FUN_00403191();
          *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
          *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + -0x18);
          piVar5 = *(int **)(unaff_EBP + -0x30);
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          if (piVar5 == (int *)0x0) {
            iStack_e0 = 0x67ecc4;
            FUN_00878dfb();
            piVar5 = *(int **)(unaff_EBP + -0x30);
          }
          iVar2 = *piVar5;
          pwStack_e4 = *(wchar_t **)(unaff_EBP + -0x70);
          iStack_e0 = *(int *)(unaff_EBP + -0x6c);
          *(int **)(unaff_EBP + -0x38) = piVar5;
          pwVar6 = (wchar_t *)
                   (**(code **)(iVar2 + 0x8c))
                             (piVar5,*(int *)(unaff_EBP + -0x48) + 0x2c,
                              *(int *)(unaff_EBP + -0x14) + 0x30,0,0,0,0,0,0,
                              *(undefined4 *)(unaff_EBP + -0x74));
          if ((int)pwVar6 < 0) {
            iStack_e0 = *(int *)(unaff_EBP + -0x38);
            pwStack_e4 = pwVar6;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          iStack_e0 = 0x67ed14;
          iVar2 = unaff_EBP + -0x74;
          iVar4 = FUN_00402bc3();
          iStack_e0 = iVar2;
          if (iVar4 < 0) {
            iStack_e0 = 0x67ed1f;
            FUN_00878dfb();
            iStack_e0 = extraout_ECX_04;
          }
          *(int **)(unaff_EBP + -0x10) = &iStack_e0;
          pwStack_e4 = (wchar_t *)0x673;
          FUN_00679e4e(&iStack_e0);
          pwStack_e4 = (wchar_t *)(unaff_EBP + -0x74);
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          FUN_0040263d();
          iStack_e0 = FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          pwStack_e4 = L"奙䶍诤\xe8f0࡯";
          uVar3 = FUN_00412550();
          iVar2 = FUN_0067f5d0();
          *(undefined4 *)(iVar2 + 0x34) = uVar3;
          pwVar6 = (wchar_t *)(unaff_EBP + -0x74);
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          iStack_e0 = 0x67ed71;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            iStack_e0 = 0x67ed7c;
            FUN_00878dfb();
            pwVar6 = extraout_ECX_05;
          }
        }
        iStack_e0 = 0;
        *(wchar_t ***)(unaff_EBP + -0x10) = &pwStack_e4;
        pwStack_e4 = pwVar6;
        FUN_00679e4e(&pwStack_e4,0x3ba);
        iVar2 = unaff_EBP + -0x74;
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        FUN_0040263d(iVar2);
        FUN_004048a4(iVar2);
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        pwStack_e4 = 
        L"윻䖉览챽ᵴ䖍僈䶍\xe8cc뜚￙윻ൽȽ@璀倆Ῠᾠ贀豅왐ﱅ\xe81f㷚￘윻絙倆ߨᾠ圀兗쒋斉棰λ"
        ;
        iVar2 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x38) = iVar2;
        *(undefined4 *)(unaff_EBP + -0x34) = 0;
        if (iVar2 != 0) {
          iStack_e0 = 0x67edcb;
          iVar2 = FUN_0041a4e5();
          if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
            iStack_e0 = 0x67eddc;
            FUN_00878dfb();
          }
        }
        pwVar6 = (wchar_t *)(unaff_EBP + -0x74);
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        iStack_e0 = 0x67ede9;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          iStack_e0 = 0x67edf4;
          FUN_00878dfb();
          pwVar6 = extraout_ECX_06;
        }
        iStack_e0 = 0;
        *(wchar_t ***)(unaff_EBP + -0x10) = &pwStack_e4;
        pwStack_e4 = pwVar6;
        FUN_00679e4e(&pwStack_e4,0x3bb);
        iVar2 = unaff_EBP + -0xb8;
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        FUN_0040263d(iVar2);
        FUN_004048a4(iVar2);
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        pwStack_e4 = (wchar_t *)0x67ee2e;
        iVar2 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x48) = iVar2;
        *(undefined4 *)(unaff_EBP + -0x40) = 0;
        if (iVar2 != 0) {
          iStack_e0 = 0x67ee44;
          iVar2 = FUN_0041a4e5();
          if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
            iStack_e0 = 0x67ee55;
            FUN_00878dfb();
          }
        }
        iVar2 = unaff_EBP + -0xb8;
        *(undefined1 *)(unaff_EBP + -4) = 0x23;
        iStack_e0 = 0x67ee65;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          iStack_e0 = 0x67ee70;
          FUN_00878dfb();
          iVar2 = extraout_ECX_07;
        }
        iVar4 = *(int *)(unaff_EBP + -0x34);
        if (iVar4 != 0) {
          iVar2 = 0;
          if (*(int *)(unaff_EBP + -0x40) != 0) {
            iVar2 = *(int *)(unaff_EBP + -0x18);
            *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x40);
            *(int *)(unaff_EBP + -0x80) = iVar4;
            *(int *)(unaff_EBP + -0x10) = iVar4;
            FUN_00404abb();
            iStack_e0 = 0x67ee98;
            iStack_e0 = FUN_00404a94();
            pwStack_e4 = (wchar_t *)0x67eea1;
            pwStack_e4 = (wchar_t *)FUN_00404abb();
            uVar3 = FUN_00404a94();
            FUN_004114f3(iVar2 + 0x38,uVar3);
            iVar2 = extraout_ECX_08;
          }
        }
        *(int **)(unaff_EBP + -0x10) = &iStack_e0;
        pwStack_e4 = (wchar_t *)0x66d;
        iStack_e0 = iVar2;
        FUN_00679e4e(&iStack_e0);
        pwStack_e4 = (wchar_t *)(unaff_EBP + -0x58);
        *(undefined1 *)(unaff_EBP + -4) = 0x23;
        FUN_0040263d();
        iStack_e0 = FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x25;
        pwStack_e4 = L"奙䶍诤\xe8f0ۗ";
        uVar3 = FUN_00412550();
        iVar2 = FUN_0067f5d0();
        *(undefined4 *)(iVar2 + 0x24) = uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0x23;
        iStack_e0 = 0x67ef09;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          iStack_e0 = 0x67ef14;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x44) = 0;
        pwStack_e4 = (wchar_t *)&stack0xffffff24;
        *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff24;
        iStack_e0 = 0x674;
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        FUN_00679e4e();
        iStack_e0 = unaff_EBP + -0x58;
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        pwStack_e4 = (wchar_t *)0x67ef3e;
        FUN_0040263d();
        pwStack_e4 = (wchar_t *)0x67ef45;
        psVar7 = (short *)FUN_004048a4();
        sVar1 = *psVar7;
        iStack_e0 = 0x67ef51;
        iVar2 = unaff_EBP + -0x58;
        iVar4 = FUN_00402bc3();
        iStack_e0 = iVar2;
        if (iVar4 < 0) {
          iStack_e0 = 0x67ef5c;
          FUN_00878dfb();
          iStack_e0 = extraout_ECX_09;
        }
        if (sVar1 != 0) {
          iStack_e0 = unaff_EBP + -0x10;
          pwStack_e4 = (wchar_t *)0x67ef83;
          puVar8 = (undefined4 *)FUN_00679d86();
          uVar3 = *puVar8;
          iStack_e0 = *(int *)(unaff_EBP + 0xc);
          pwStack_e4 = (wchar_t *)(iStack_e0 / 10000);
          *(undefined1 *)(unaff_EBP + -4) = 0x28;
          FUN_0041354c(unaff_EBP + -0x44,uVar3);
          iStack_e0 = 0x67efab;
          FUN_00402e8e();
          iVar2 = *(int *)(unaff_EBP + -0x18);
          FUN_00408b49();
          FUN_00402fa6();
          *(undefined4 *)(iVar2 + 0x68) = *(undefined4 *)(unaff_EBP + -0x14);
          if (*(int *)(unaff_EBP + -0x14) != 0) {
            FUN_004030b1();
            *(undefined4 *)(unaff_EBP + -0x14) = 0;
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x26;
          FUN_00402676();
          iStack_e0 = extraout_ECX_10;
        }
        *(int **)(unaff_EBP + -0x10) = &iStack_e0;
        pwStack_e4 = (wchar_t *)0x67c;
        FUN_00679e4e(&iStack_e0);
        pwStack_e4 = (wchar_t *)(unaff_EBP + -0x58);
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        FUN_0040263d();
        iStack_e0 = FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x2a;
        pwStack_e4 = L"奙䶍诤\xe8f0֭";
        uVar3 = FUN_00412550();
        iVar2 = FUN_0067f5d0();
        *(undefined4 *)(iVar2 + 0x6c) = uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        iStack_e0 = 0x67f033;
        iVar2 = unaff_EBP + -0x58;
        iVar4 = FUN_00402bc3();
        iStack_e0 = iVar2;
        if (iVar4 < 0) {
          iStack_e0 = 0x67f03e;
          FUN_00878dfb();
          iStack_e0 = extraout_ECX_11;
        }
        *(int **)(unaff_EBP + -0x10) = &iStack_e0;
        pwStack_e4 = (wchar_t *)0x67b;
        FUN_00679e4e(&iStack_e0);
        pwStack_e4 = (wchar_t *)(unaff_EBP + -0x58);
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        FUN_0040263d();
        iStack_e0 = FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        pwStack_e4 = L"奙䶍诤\xe8f0Ր";
        uVar3 = FUN_00412550();
        iVar2 = FUN_0067f5d0();
        *(undefined4 *)(iVar2 + 0x70) = uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        iStack_e0 = 0x67f090;
        iVar2 = unaff_EBP + -0x58;
        iVar4 = FUN_00402bc3();
        iStack_e0 = iVar2;
        if (iVar4 < 0) {
          iStack_e0 = 0x67f09b;
          FUN_00878dfb();
          iStack_e0 = extraout_ECX_12;
        }
        *(int **)(unaff_EBP + -0x10) = &iStack_e0;
        pwStack_e4 = u_priority_0096a614;
        FUN_004033a1();
        pwStack_e4 = (wchar_t *)(unaff_EBP + -0x58);
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        FUN_0040263d();
        iStack_e0 = FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x2e;
        pwStack_e4 = L"奙䶍诤\xe8f0Ӷ";
        uVar3 = FUN_00412550();
        iVar2 = FUN_0067f5d0();
        *(undefined4 *)(iVar2 + 0x74) = uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        iStack_e0 = 0x67f0ea;
        iVar2 = unaff_EBP + -0x58;
        iVar4 = FUN_00402bc3();
        iStack_e0 = iVar2;
        if (iVar4 < 0) {
          iStack_e0 = 0x67f0f5;
          FUN_00878dfb();
          iStack_e0 = extraout_ECX_13;
        }
        *(int **)(unaff_EBP + -0x10) = &iStack_e0;
        pwStack_e4 = (wchar_t *)0xabf;
        FUN_00679e4e(&iStack_e0);
        pwStack_e4 = (wchar_t *)(unaff_EBP + -0x58);
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        FUN_0040263d();
        iStack_e0 = FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x30;
        pwStack_e4 = L"奙䶍诤\xe8f0ҙ";
        uVar3 = FUN_00412550();
        iVar2 = FUN_0067f5d0();
        *(undefined4 *)(iVar2 + 0x7c) = uVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        iStack_e0 = 0x67f147;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          iStack_e0 = 0x67f152;
          FUN_00878dfb();
        }
        pwStack_e4 = (wchar_t *)&stack0xffffff24;
        *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff24;
        iStack_e0 = 0x420;
        FUN_00679e4e();
        iStack_e0 = unaff_EBP + -0x58;
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        pwStack_e4 = (wchar_t *)0x67f175;
        FUN_0040263d();
        pwStack_e4 = L"警贰ꡅ\xe850㨻￘삅絙倆棨ᾜ昀\xf685萏\x82";
        psVar7 = (short *)FUN_004048a4();
        sVar1 = *psVar7;
        iStack_e0 = 0x67f188;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          iStack_e0 = 0x67f193;
          FUN_00878dfb();
        }
        if (sVar1 != 0) {
          iStack_e0 = unaff_EBP + -0x10;
          pwStack_e4 = (wchar_t *)0x67f1b9;
          puVar8 = (undefined4 *)FUN_00679d86();
          uVar3 = *puVar8;
          iStack_e0 = *(int *)(unaff_EBP + 0xc);
          pwStack_e4 = (wchar_t *)(iStack_e0 / 10000);
          *(undefined1 *)(unaff_EBP + -4) = 0x32;
          FUN_0041354c(unaff_EBP + -0x44,uVar3);
          iStack_e0 = 0x67f1df;
          FUN_00402e8e();
          iVar2 = *(int *)(unaff_EBP + -0x18);
          if (*(int *)(unaff_EBP + -0x14) != 0) {
            iStack_e0 = 0x67f1f6;
            InterlockedIncrement((LONG *)(*(int *)(unaff_EBP + -0x14) + 8));
          }
          FUN_00402fa6();
          *(undefined4 *)(iVar2 + 0x78) = *(undefined4 *)(unaff_EBP + -0x14);
          if (*(int *)(unaff_EBP + -0x14) != 0) {
            FUN_004030b1();
            *(undefined4 *)(unaff_EBP + -0x14) = 0;
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x26;
          FUN_00402676();
        }
        iStack_e0 = unaff_EBP + -100;
        pwStack_e4 = (wchar_t *)0x67f230;
        FUN_0067f93a();
        *(undefined1 *)(unaff_EBP + -4) = 0x23;
        FUN_00402676();
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        if (*(int **)(unaff_EBP + -0x40) != (int *)0x0) {
          iStack_e0 = 0x67f24f;
          (**(code **)(**(int **)(unaff_EBP + -0x40) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
          iStack_e0 = 0x67f260;
          (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
          iStack_e0 = 0x67f271;
          (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
          iStack_e0 = 0x67f282;
          (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          iStack_e0 = 0x67f294;
          FUN_0067f663();
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
          iStack_e0 = 0x67f2a8;
          (**(code **)(**(int **)(unaff_EBP + 0x10) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
          iStack_e0 = 0x67f2b9;
          (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
        }
        if (*(int *)(unaff_EBP + -0x20) != 0) {
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + -0x20) = 0;
        }
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
          iStack_e0 = 0x67f2d9;
          (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
        }
        goto LAB_0067f2d9;
      }
      iVar4 = *(int *)(unaff_EBP + 8);
      *(undefined4 *)(iVar4 + 4) = 0;
      *(undefined4 *)(unaff_EBP + -0x3c) = 1;
      FUN_004027eb();
      FUN_00402fa6();
    }
    FUN_004027eb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0067f64d();
  }
  else {
LAB_0067f2d9:
    iVar2 = *(int *)(unaff_EBP + -0x5c);
    iVar4 = *(int *)(unaff_EBP + 8);
    *(int *)(iVar4 + 4) = iVar2;
    iVar9 = 0;
    if (iVar2 != 0) {
      iStack_e0 = 0x67f2f0;
      InterlockedIncrement((LONG *)(iVar2 + 4));
      iVar9 = *(int *)(unaff_EBP + -0x5c);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 1;
    if (iVar9 != 0) {
      iStack_e0 = 0x67f30c;
      FUN_0067f663();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar4;
}


