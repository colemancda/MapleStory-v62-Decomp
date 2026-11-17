/* FUN_00781162 - 0x00781162 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00781162(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  long lVar5;
  int iVar6;
  ushort *puVar7;
  undefined4 uVar8;
  short *psVar9;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar10;
  undefined4 uStack_238;
  undefined4 uStack_234;
  int iStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  int iStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  int iStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  ushort *puVar11;
  
  FUN_00879bb8();
  iVar6 = DAT_00978368;
  bVar10 = DAT_00978368 == 0;
  *(int *)(unaff_EBP + -0x28) = extraout_ECX;
  if (bVar10) goto LAB_00781e05;
  iVar1 = *(int *)(unaff_EBP + 8);
  if (iVar1 == 0) {
    iVar1 = FUN_00782386();
    if (iVar1 != 0) {
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      *(undefined4 *)(unaff_EBP + 8) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_004dee9b();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      (*DAT_0097b4c8)();
      FUN_0087a1b0();
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe28;
      FUN_004dee9b();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      (*DAT_0097b4c8)();
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar6 + 0x2cac);
      *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(iVar6 + 0x2048);
      puVar7 = (ushort *)FUN_0041903e();
      bVar10 = (bool)FUN_00781e1c();
      uStack_210 = 0x7819fb;
      lVar5 = WzSoap_GetArticleTitle
                        ((uchar)*(undefined4 *)(unaff_EBP + -0x1c),*(int *)(unaff_EBP + -0x14),
                         *(ushort **)(unaff_EBP + -0x10),*(uchar *)(extraout_ECX + 0x628),
                         *(int *)(extraout_ECX + 0x62c),bVar10,puVar7);
      *(long *)(unaff_EBP + -0x10) = lVar5;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + -0x44) != 0) {
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x48) != 0) {
        FUN_00434e38();
      }
      FUN_004190dc();
      if (-1 < *(int *)(unaff_EBP + -0x10)) {
        uVar8 = FUN_0041903e();
        *(undefined4 *)(unaff_EBP + -0x14) = uVar8;
        puVar4 = (undefined4 *)FUN_0078111f();
        puVar7 = (ushort *)*puVar4;
        puVar11 = *(ushort **)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        bVar10 = (bool)FUN_00781e1c();
        lVar5 = WzSoap_GetArticleContent
                          (*(uchar *)(extraout_ECX + 0x628),*(int *)(extraout_ECX + 0x62c),bVar10,
                           puVar7,puVar11);
        *(long *)(unaff_EBP + -0x10) = lVar5;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (*(int *)(unaff_EBP + -0x50) != 0) {
          FUN_00403384();
        }
        psVar9 = *(short **)(unaff_EBP + -0x14);
        iVar6 = 0;
        do {
          if (*psVar9 == 0) break;
          if (*psVar9 == 10) {
            *psVar9 = 0xd;
          }
          iVar6 = iVar6 + 1;
          psVar9 = psVar9 + 1;
        } while (iVar6 < 0x400);
        FUN_004190dc();
        if (-1 < *(int *)(unaff_EBP + -0x10)) {
          iVar6 = FUN_004029b9();
          *(int *)(unaff_EBP + -0x1c) = iVar6;
          *(undefined1 *)(unaff_EBP + -4) = 5;
          if (iVar6 == 0) {
            iVar1 = 0;
            iVar6 = extraout_ECX;
          }
          else {
            uStack_210 = 0;
            uStack_214 = 0x781b02;
            (*DAT_0097b4cc)();
            uStack_214 = 0x781b0d;
            FUN_0087a1b0();
            *(undefined4 **)(unaff_EBP + -0x10) = &uStack_210;
            uStack_214 = 0;
            iStack_218 = 0;
            uStack_21c = 0;
            uStack_220 = 0;
            iStack_224 = 0xffffffff;
            uStack_228 = *(undefined4 *)(unaff_EBP + -0x20);
            uStack_22c = 0;
            iStack_230 = 0;
            uStack_234 = 0x781b20;
            (*DAT_0097b4cc)();
            FUN_0087a1b0();
            *(undefined1 **)(unaff_EBP + -0x14) = &stack0xfffffe10;
            FUN_00411641();
            FUN_0045010e();
            *(undefined1 **)(unaff_EBP + -0x34) = &stack0xfffffe0c;
            FUN_00414edd();
            *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe08;
            *(undefined1 *)(unaff_EBP + -4) = 6;
            *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe08;
            FUN_00411641();
            FUN_0045010e();
            FUN_0045f0f3();
            *(undefined1 *)(unaff_EBP + -4) = 5;
            iVar1 = FUN_006a34d3();
            iVar6 = *(int *)(unaff_EBP + -0x28);
          }
          uVar2 = -(uint)(iVar1 != 0) & iVar1 + 8U;
          *(uint *)(unaff_EBP + -0x2c) = -(uint)(uVar2 != 0) & uVar2 - 8;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          FUN_00782436();
          *(undefined1 *)(unaff_EBP + -4) = 7;
          iVar1 = FUN_004bc6a2();
          if (iVar1 == 1) {
            *(undefined4 *)(unaff_EBP + -0x18) = 0;
            *(undefined4 *)(unaff_EBP + -0x24) = 0;
            *(undefined1 *)(unaff_EBP + -4) = 9;
            FUN_006a3cb5();
            (*DAT_0097b4c8)();
            FUN_0087a1b0();
            *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffdf8;
            uStack_210 = 0;
            uStack_214 = 0xffffffff;
            iStack_218 = *(int *)(unaff_EBP + -0x18);
            uStack_21c = 0;
            uStack_220 = 0;
            iStack_224 = 0x781c12;
            (*DAT_0097b4c8)();
            iStack_224 = 0x781c1f;
            FUN_0087a1b0();
            iStack_224 = unaff_EBP + -0x58;
            *(undefined4 **)(unaff_EBP + -0x14) = &uStack_220;
            uStack_228 = 0x781c2d;
            puVar4 = (undefined4 *)FUN_0078111f();
            uVar8 = *puVar4;
            iStack_224 = 0x3fffffff;
            uStack_228 = *(undefined4 *)(unaff_EBP + -0x10);
            *(undefined1 *)(unaff_EBP + -4) = 10;
            uStack_22c = 0xffffffff;
            iStack_230 = *(int *)(unaff_EBP + -0x24);
            *(undefined4 *)(unaff_EBP + -0x1c) = uVar8;
            uStack_234 = 0;
            uStack_238 = 0;
            (*DAT_0097b4c8)();
            (*DAT_0097b4c8)(0,0,*(undefined4 *)(unaff_EBP + -0x18),0xffffffff,
                            *(undefined4 *)(unaff_EBP + -0x14),0x3fffffff);
            puVar7 = (ushort *)(unaff_EBP + -0x120);
            puVar11 = *(ushort **)(unaff_EBP + -0x1c);
            bVar10 = (bool)FUN_00781e1c();
            uStack_210 = 0x781c88;
            lVar5 = WzSoap_ModifyArticle
                              (*(uchar *)(iVar6 + 0x628),*(int *)(iVar6 + 0x62c),
                               *(ushort **)(unaff_EBP + -0x14),*(ushort **)(unaff_EBP + -0x10),
                               bVar10,puVar11,puVar7);
            *(undefined1 *)(unaff_EBP + -4) = 9;
            if (*(int *)(unaff_EBP + -0x58) != 0) {
              FUN_00403384();
            }
            if (-1 < lVar5) {
              *(undefined4 *)(unaff_EBP + -0x14) = 0;
              FUN_004184ca();
              if (*(int *)(unaff_EBP + -0x14) == 0) {
                uVar2 = 0;
              }
              else {
                uVar2 = *(uint *)(*(int *)(unaff_EBP + -0x14) + -4) >> 1;
              }
              if (uVar2 == 0) {
                *(undefined4 *)(unaff_EBP + -0x10) = 0;
                *(undefined1 *)(unaff_EBP + -4) = 0xc;
                FUN_00781143();
                *(undefined1 *)(unaff_EBP + -4) = 0xd;
                FUN_00679d86();
                *(undefined1 *)(unaff_EBP + -4) = 0xe;
                FUN_0041354c();
                *(undefined1 *)(unaff_EBP + -4) = 0xd;
                if (*(int *)(unaff_EBP + -0x60) != 0) {
                  FUN_00403384();
                }
                *(undefined1 *)(unaff_EBP + -4) = 0xc;
                if (*(int *)(unaff_EBP + -0x68) != 0) {
                  FUN_00403384();
                }
                FUN_0080cd3b();
                *(undefined1 *)(unaff_EBP + -4) = 0xb;
                if (*(int *)(unaff_EBP + -0x10) != 0) {
                  FUN_00403384();
                }
              }
              *(undefined1 *)(unaff_EBP + -4) = 9;
              if (*(int *)(unaff_EBP + -0x14) != 0) {
                FUN_00403384();
              }
            }
            *(undefined1 *)(unaff_EBP + -4) = 8;
            if (*(int *)(unaff_EBP + -0x24) != 0) {
              FUN_00434e38();
            }
            *(undefined1 *)(unaff_EBP + -4) = 7;
            if (*(int *)(unaff_EBP + -0x18) != 0) {
              FUN_00434e38();
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
          FUN_00782453();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + 8) != 0) {
        FUN_00403384();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x20) != 0) {
        FUN_00403384();
      }
      goto LAB_00781e05;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        if (0 < *(int *)(extraout_ECX + 0x62c)) {
          iVar1 = FUN_004029b9();
          *(int *)(unaff_EBP + 8) = iVar1;
          *(undefined4 *)(unaff_EBP + -4) = 0x1f;
          if (iVar1 == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = FUN_006a3cdc();
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          uVar2 = -(uint)(iVar1 != 0) & iVar1 + 8U;
          *(uint *)(unaff_EBP + -0x38) = -(uint)(uVar2 != 0) & uVar2 - 8;
          FUN_00782469();
          *(undefined4 *)(unaff_EBP + -4) = 0x20;
          iVar1 = FUN_004bc6a2();
          if (iVar1 == 1) {
            *(undefined4 *)(unaff_EBP + -0x34) = 0;
            *(undefined1 *)(unaff_EBP + -4) = 0x21;
            FUN_006a4106();
            (*DAT_0097b4c8)();
            FUN_0087a1b0();
            *(undefined1 **)(unaff_EBP + 8) = &stack0xfffffe28;
            (*DAT_0097b4c8)();
            *(undefined4 *)(unaff_EBP + -0x10) = 0;
            FUN_004184ca();
            *(undefined1 *)(unaff_EBP + -4) = 0x22;
            (*DAT_0097b4c8)();
            FUN_0087a1b0();
            iStack_218 = *(int *)(iVar6 + 0x2098);
            *(undefined1 **)(unaff_EBP + 8) = &stack0xfffffdf8;
            if (iStack_218 == 0) {
              iStack_218 = 0;
            }
            else {
              iStack_218 = iStack_218 + 4;
            }
            uStack_210 = *(undefined4 *)(unaff_EBP + 8);
            uStack_214 = 0xffffffff;
            uStack_21c = 0;
            uStack_220 = 0;
            iStack_224 = 0x78160c;
            (*DAT_0097b4c8)();
            iStack_224 = 0xffffffff;
            uStack_228 = *(undefined4 *)(unaff_EBP + 8);
            *(undefined4 *)(unaff_EBP + -0x14) = 0;
            uStack_22c = 0x78161c;
            FUN_004184ca();
            iStack_224 = unaff_EBP + -0x6c;
            *(undefined1 *)(unaff_EBP + -4) = 0x23;
            uStack_228 = 0x78162b;
            piVar3 = (int *)FUN_004dee9b();
            iStack_230 = *piVar3;
            iStack_224 = 0;
            uStack_228 = 0;
            uStack_22c = 0xffffffff;
            uStack_234 = 0;
            uStack_238 = 0;
            *(undefined1 *)(unaff_EBP + -4) = 0x24;
            (*DAT_0097b4c8)();
            FUN_0087a1b0();
            *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(iVar6 + 0x2088);
            *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x14);
            *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x10);
            *(undefined4 **)(unaff_EBP + 8) = &uStack_238;
            puVar4 = (undefined4 *)FUN_004dee9b(unaff_EBP + -0x4c);
            uVar8 = *puVar4;
            *(undefined1 *)(unaff_EBP + -4) = 0x25;
            (*DAT_0097b4c8)(0,0,uVar8,0xffffffff,*(undefined4 *)(unaff_EBP + 8),0x3fffffff);
            uVar8 = *(undefined4 *)(iVar6 + 0x2048);
            *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(iVar6 + 0x2cac);
            puVar7 = (ushort *)(unaff_EBP + -0x1c0);
            bVar10 = (bool)FUN_00781e1c();
            lVar5 = WzSoap_CommentArticle
                              ((uchar)uVar8,*(int *)(unaff_EBP + -0x24),*(ushort **)(unaff_EBP + 8),
                               *(uchar *)(extraout_ECX + 0x628),*(int *)(extraout_ECX + 0x62c),
                               *(ushort **)(unaff_EBP + -0x18),*(ushort **)(unaff_EBP + -0x28),
                               *(int *)(unaff_EBP + -0x1c),bVar10,puVar7);
            *(undefined1 *)(unaff_EBP + -4) = 0x24;
            FUN_00414ebb();
            *(undefined1 *)(unaff_EBP + -4) = 0x23;
            FUN_00414ebb();
            if (-1 < lVar5) {
              *(undefined4 *)(unaff_EBP + -0x1c) = 0;
              FUN_004184ca();
              if (*(int *)(unaff_EBP + -0x1c) == 0) {
                uVar2 = 0;
              }
              else {
                uVar2 = *(uint *)(*(int *)(unaff_EBP + -0x1c) + -4) >> 1;
              }
              if (uVar2 == 0) {
                *(undefined4 *)(unaff_EBP + -0x28) = 0;
                *(undefined1 *)(unaff_EBP + -4) = 0x27;
                FUN_00781143();
                *(undefined1 *)(unaff_EBP + -4) = 0x28;
                FUN_00679d86();
                *(undefined1 *)(unaff_EBP + -4) = 0x29;
                FUN_0041354c();
                *(undefined1 *)(unaff_EBP + -4) = 0x28;
                FUN_00402676();
                *(undefined1 *)(unaff_EBP + -4) = 0x27;
                FUN_00402676();
                FUN_0080cd3b();
                *(undefined1 *)(unaff_EBP + -4) = 0x26;
                FUN_00402676();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x23;
              FUN_00402676();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x22;
            FUN_00402676();
            *(undefined1 *)(unaff_EBP + -4) = 0x21;
            FUN_00402676();
            *(undefined1 *)(unaff_EBP + -4) = 0x20;
            FUN_00414ebb();
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_00782486();
        }
      }
      else if (iVar1 == 3) {
        if ((0 < *(int *)(extraout_ECX + 0x628)) && (*(int *)(extraout_ECX + 0x628) < 3)) {
          iVar1 = FUN_004029b9();
          *(int *)(unaff_EBP + -0x10) = iVar1;
          *(undefined4 *)(unaff_EBP + -4) = 0xf;
          if (iVar1 == 0) {
            iVar1 = 0;
          }
          else {
            *(undefined1 **)(unaff_EBP + -0x14) = &stack0xfffffe3c;
            FUN_00414edd();
            *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xfffffe38;
            *(undefined1 *)(unaff_EBP + -4) = 0x10;
            FUN_0045f0f3();
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            iVar1 = FUN_006a34d3();
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          uVar2 = -(uint)(iVar1 != 0) & iVar1 + 8U;
          *(uint *)(unaff_EBP + -0x2c) = -(uint)(uVar2 != 0) & uVar2 - 8;
          FUN_00782436();
          *(undefined4 *)(unaff_EBP + -4) = 0x11;
          iVar1 = FUN_004bc6a2();
          if (iVar1 == 1) {
            *(undefined4 *)(unaff_EBP + -0x20) = 0;
            *(undefined4 *)(unaff_EBP + 8) = 0;
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            FUN_006a3cb5();
            (*DAT_0097b4c8)();
            FUN_0087a1b0();
            *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe28;
            (*DAT_0097b4c8)();
            FUN_0087a1b0();
            *(undefined1 **)(unaff_EBP + -0x14) = &stack0xfffffe10;
            (*DAT_0097b4c8)();
            FUN_0087a1b0();
            *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xfffffdf8;
            uStack_210 = 0x78131a;
            piVar3 = (int *)FUN_004dee9b();
            iStack_218 = *piVar3;
            uStack_210 = 0;
            uStack_214 = 0xffffffff;
            uStack_21c = 0;
            uStack_220 = 0;
            *(undefined1 *)(unaff_EBP + -4) = 0x14;
            iStack_224 = 0x78132d;
            (*DAT_0097b4c8)();
            iStack_224 = 0x78133a;
            FUN_0087a1b0();
            *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar6 + 0x2088);
            iStack_230 = *(int *)(iVar6 + 0x2098);
            *(undefined4 **)(unaff_EBP + -0x28) = &uStack_220;
            if (iStack_230 == 0) {
              iStack_230 = 0;
            }
            else {
              iStack_230 = iStack_230 + 4;
            }
            iStack_224 = 0x3fffffff;
            uStack_228 = *(undefined4 *)(unaff_EBP + -0x10);
            uStack_22c = 0xffffffff;
            uStack_234 = 0;
            uStack_238 = 0;
            (*DAT_0097b4c8)();
            (*DAT_0097b4c8)(0,0,*(undefined4 *)(unaff_EBP + 8),0xffffffff,
                            *(undefined4 *)(unaff_EBP + -0x14),0x3fffffff);
            (*DAT_0097b4c8)(0,0,*(undefined4 *)(unaff_EBP + -0x20),0xffffffff,
                            *(undefined4 *)(unaff_EBP + -0x1c),0x3fffffff);
            puVar4 = (undefined4 *)FUN_004dee9b(unaff_EBP + -0x54);
            uVar8 = *puVar4;
            *(undefined1 *)(unaff_EBP + -4) = 0x15;
            (*DAT_0097b4c8)(0,0,uVar8,0xffffffff,*(undefined4 *)(unaff_EBP + -0x28),0x3fffffff);
            uVar8 = *(undefined4 *)(iVar6 + 0x2048);
            *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(iVar6 + 0x2cac);
            puVar7 = (ushort *)(unaff_EBP + -0x120);
            bVar10 = (bool)FUN_00781e1c();
            lVar5 = WzSoap_WriteArticle((uchar)uVar8,*(int *)(unaff_EBP + -0x24),
                                        *(ushort **)(unaff_EBP + -0x28),
                                        *(uchar *)(extraout_ECX + 0x628),
                                        *(ushort **)(unaff_EBP + -0x1c),
                                        *(ushort **)(unaff_EBP + -0x14),
                                        *(ushort **)(unaff_EBP + -0x10),*(int *)(unaff_EBP + -0x18),
                                        (ushort *)0x0,(ushort *)0x0,bVar10,puVar7);
            *(undefined1 *)(unaff_EBP + -4) = 0x14;
            FUN_00414ebb();
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            FUN_00414ebb();
            if (-1 < lVar5) {
              *(undefined4 *)(unaff_EBP + -0x24) = 0;
              FUN_004184ca();
              if (*(int *)(unaff_EBP + -0x24) == 0) {
                uVar2 = 0;
              }
              else {
                uVar2 = *(uint *)(*(int *)(unaff_EBP + -0x24) + -4) >> 1;
              }
              if (uVar2 == 0) {
                *(undefined4 *)(unaff_EBP + -0x18) = 0;
                *(undefined1 *)(unaff_EBP + -4) = 0x17;
                FUN_00781143();
                *(undefined1 *)(unaff_EBP + -4) = 0x18;
                FUN_00679d86();
                *(undefined1 *)(unaff_EBP + -4) = 0x19;
                FUN_0041354c();
                *(undefined1 *)(unaff_EBP + -4) = 0x18;
                FUN_00402676();
                *(undefined1 *)(unaff_EBP + -4) = 0x17;
                FUN_00402676();
                FUN_0080cd3b();
                *(undefined1 *)(unaff_EBP + -4) = 0x16;
                FUN_00402676();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x13;
              FUN_00402676();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x12;
            FUN_00414ebb();
            *(undefined1 *)(unaff_EBP + -4) = 0x11;
            FUN_00414ebb();
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_00782453();
        }
      }
      else if (((iVar1 == 1000) && (DAT_0097befc != 0)) && (FUN_00815de9(), DAT_0097befc != 0)) {
        (*(code *)**(undefined4 **)(DAT_0097befc + 8))();
      }
      goto LAB_00781e05;
    }
    iVar1 = FUN_00782386();
    if (iVar1 != 0) {
      if (((*(int *)(extraout_ECX + 0x630) == *(int *)(iVar6 + 0x2088)) ||
          ((*(int *)(iVar6 + 0x2cac) != 0 &&
           (**(int **)(iVar6 + 0x2cb8) == *(int *)(iVar6 + 0x2088))))) ||
         (iVar6 = FUN_004ea83d(), iVar6 == 2)) {
        *(undefined1 **)(unaff_EBP + 8) = &stack0xfffffe2c;
        FUN_0045f0f3();
        iVar6 = FUN_007db791();
        if (iVar6 == 6) {
          puVar4 = (undefined4 *)FUN_0078111f();
          puVar11 = (ushort *)*puVar4;
          puVar7 = (ushort *)(unaff_EBP + -0x120);
          *(undefined4 *)(unaff_EBP + -4) = 0x1a;
          bVar10 = (bool)FUN_00781e1c();
          lVar5 = WzSoap_DeleteArticle
                            (*(uchar *)(extraout_ECX + 0x628),*(int *)(extraout_ECX + 0x62c),bVar10,
                             puVar11,puVar7);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_00402676();
          if (-1 < lVar5) {
            *(undefined4 *)(unaff_EBP + -0x18) = 0;
            FUN_004184ca();
            *(undefined4 *)(unaff_EBP + -4) = 0x1b;
            if (*(int *)(unaff_EBP + -0x18) == 0) {
              uVar2 = 0;
            }
            else {
              uVar2 = *(uint *)(*(int *)(unaff_EBP + -0x18) + -4) >> 1;
            }
            if (uVar2 == 0) {
              *(undefined4 *)(unaff_EBP + 8) = 0;
              *(undefined1 *)(unaff_EBP + -4) = 0x1c;
              FUN_00781143();
              *(undefined1 *)(unaff_EBP + -4) = 0x1d;
              FUN_00679d86();
              *(undefined1 *)(unaff_EBP + -4) = 0x1e;
              FUN_0041354c();
              *(undefined1 *)(unaff_EBP + -4) = 0x1d;
              FUN_00402676();
              *(undefined1 *)(unaff_EBP + -4) = 0x1c;
              FUN_00402676();
              FUN_0080cd3b();
              *(undefined1 *)(unaff_EBP + -4) = 0x1b;
              FUN_00402676();
            }
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            FUN_00402676();
          }
        }
      }
      goto LAB_00781e05;
    }
  }
  *(undefined1 **)(unaff_EBP + 8) = &stack0xfffffe2c;
  FUN_0045f0f3();
  FUN_007db3ad();
LAB_00781e05:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


