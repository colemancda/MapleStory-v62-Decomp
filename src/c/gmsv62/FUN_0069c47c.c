/* FUN_0069c47c - 0x0069c47c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0069c47c(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int unaff_EBP;
  undefined4 uVar3;
  int aiStack_34 [4];
  undefined *puStack_24;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (*(int *)(unaff_EBP + 8) != 1) {
LAB_0069c7db:
    if (*(int *)(extraout_ECX + 0x68) == 0) {
      *(undefined4 *)(extraout_ECX + 100) = *(undefined4 *)(unaff_EBP + 8);
      *(undefined4 *)(extraout_ECX + 0x68) = 1;
      if (*(int *)(extraout_ECX + 0x14) != 0) {
        puStack_24 = (undefined *)0x69c7f5;
        FUN_00815de9();
      }
    }
    goto LAB_0069c7f5;
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar2 = *(int *)(extraout_ECX + 0xa4);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 == 0) {
    puStack_24 = (undefined *)(unaff_EBP + -0x20);
    aiStack_34[3] = 0x69c4ce;
    puStack_24 = (undefined *)FUN_0045b90e();
    *(undefined4 *)(unaff_EBP + -0x1c) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 3;
  }
  else {
    puStack_24 = (undefined *)(extraout_ECX + 0x9c);
  }
  aiStack_34[3] = 0x69c4de;
  FUN_00414f8b();
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if (((*(byte *)(unaff_EBP + -0x1c) & 1) != 0) && (*(int *)(unaff_EBP + -0x20) != 0)) {
    puStack_24 = (undefined *)(*(int *)(unaff_EBP + -0x20) + -0xc);
    aiStack_34[3] = 0x69c4fb;
    FUN_00434e38();
  }
  puStack_24 = (undefined *)(unaff_EBP + -0x20);
  aiStack_34[3] = 0x69c50b;
  puStack_24 = (undefined *)FUN_0045b90e();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  aiStack_34[3] = 0x69c518;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    puStack_24 = (undefined *)(*(int *)(unaff_EBP + -0x20) + -0xc);
    aiStack_34[3] = 0x69c52c;
    FUN_00434e38();
  }
  puStack_24 = (undefined *)(unaff_EBP + -0x20);
  aiStack_34[3] = 0x69c53c;
  puStack_24 = (undefined *)FUN_0045b90e();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  aiStack_34[3] = 0x69c549;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    puStack_24 = (undefined *)(*(int *)(unaff_EBP + -0x20) + -0xc);
    aiStack_34[3] = 0x69c55d;
    FUN_00434e38();
  }
  puStack_24 = (undefined *)0x0;
  aiStack_34[3] = 0;
  aiStack_34[2] = 0x69c568;
  FUN_0045ed72();
  aiStack_34[3] = 0x69c56f;
  FUN_0045ee27();
  puStack_24 = (undefined *)0x0;
  aiStack_34[3] = 0;
  aiStack_34[2] = 0x69c579;
  FUN_0045ed72();
  aiStack_34[3] = 0x69c580;
  FUN_0045ee27();
  puStack_24 = (undefined *)0x0;
  aiStack_34[3] = 0;
  aiStack_34[2] = 0x69c58a;
  FUN_0045ed72();
  aiStack_34[3] = 0x69c591;
  FUN_0045ee27();
  iVar2 = *(int *)(unaff_EBP + -0x18);
  if (iVar2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar2 + -4);
  }
  if (iVar1 < 4) {
LAB_0069c806:
    *(int **)(unaff_EBP + 8) = aiStack_34;
    uVar3 = 0xbe8;
    aiStack_34[0] = extraout_ECX_00;
  }
  else {
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar2 + -4);
    }
    if (0xc < iVar1) goto LAB_0069c806;
    if (*(int *)(DAT_00978368 + 0x2098) == 0) {
      puStack_24 = (undefined *)0x0;
    }
    else {
      puStack_24 = (undefined *)(*(int *)(DAT_00978368 + 0x2098) + 4);
    }
    if (puStack_24 == (undefined *)0x0) {
      puStack_24 = (undefined *)DAT_00980dfc;
    }
    aiStack_34[3] = DAT_00980dfc;
    if (iVar2 != 0) {
      aiStack_34[3] = iVar2;
    }
    aiStack_34[2] = 0x69c5eb;
    iVar2 = FUN_008858f0();
    if (iVar2 == 0) {
      aiStack_34[0] = (int)puStack_24;
      *(int **)(unaff_EBP + 8) = aiStack_34;
      uVar3 = 0xbe9;
    }
    else {
      puStack_24 = (undefined *)0x1;
      aiStack_34[3] = 0;
      aiStack_34[2] = 1;
      aiStack_34[1] = 0x400;
      aiStack_34[0] = 0x69c616;
      aiStack_34[2] = FUN_00415015();
      aiStack_34[1] = 0x69c61c;
      uVar3 = FUN_00471777();
      puStack_24 = (undefined *)0xffffffff;
      *(undefined4 *)(unaff_EBP + -0x20) = uVar3;
      aiStack_34[3] = 0x69c62c;
      FUN_004150c0();
      if (*(int *)(unaff_EBP + -0x20) == 0) {
        *(int **)(unaff_EBP + 8) = aiStack_34;
        uVar3 = 0x11d;
        aiStack_34[0] = extraout_ECX_01;
      }
      else {
        puStack_24 = (undefined *)0x1;
        aiStack_34[3] = 0;
        aiStack_34[2] = 1;
        aiStack_34[1] = 0x400;
        aiStack_34[0] = 0x69c653;
        aiStack_34[2] = FUN_00415015();
        aiStack_34[1] = 0x69c659;
        iVar2 = FUN_00471777();
        puStack_24 = (undefined *)0xffffffff;
        aiStack_34[3] = 0x69c668;
        FUN_004150c0();
        if (iVar2 == 0) {
          puStack_24 = (undefined *)0x0;
          aiStack_34[3] = 0;
          aiStack_34[2] = 0;
          aiStack_34[1] = 0;
          *(int **)(unaff_EBP + 8) = aiStack_34;
          FUN_00679d22(aiStack_34,0x11d);
          FUN_007db3ad();
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (*(int *)(unaff_EBP + -0x10) != 0) {
            puStack_24 = (undefined *)(*(int *)(unaff_EBP + -0x10) + -0xc);
            aiStack_34[3] = 0x69c6a2;
            FUN_00434e38();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (*(int *)(unaff_EBP + -0x14) != 0) {
            puStack_24 = (undefined *)(*(int *)(unaff_EBP + -0x14) + -0xc);
            aiStack_34[3] = 0x69c6b6;
            FUN_00434e38();
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (*(int *)(unaff_EBP + -0x18) != 0) {
            puStack_24 = (undefined *)(*(int *)(unaff_EBP + -0x18) + -0xc);
            aiStack_34[3] = 0x69c6cf;
            FUN_00434e38();
          }
          goto LAB_0069c7f5;
        }
        puStack_24 = &DAT_00964730;
        aiStack_34[3] = unaff_EBP + -0x1c;
        aiStack_34[2] = 0x69c6e6;
        FUN_004653c5();
        puStack_24 = (undefined *)(unaff_EBP + -0x10);
        aiStack_34[3] = unaff_EBP + -0x20;
        *(undefined1 *)(unaff_EBP + -4) = 6;
        aiStack_34[2] = 0x69c6f9;
        puStack_24 = (undefined *)FUN_0045e02d();
        *(undefined1 *)(unaff_EBP + -4) = 7;
        aiStack_34[3] = 0x69c70b;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 6;
        puStack_24 = (undefined *)extraout_ECX_02;
        if (*(int *)(unaff_EBP + -0x20) != 0) {
          puStack_24 = (undefined *)(*(int *)(unaff_EBP + -0x20) + -0xc);
          aiStack_34[3] = 0x69c71f;
          FUN_00434e38();
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (*(int *)(unaff_EBP + -0x1c) != 0) {
          puStack_24 = (undefined *)(*(int *)(unaff_EBP + -0x1c) + -0xc);
          aiStack_34[3] = 0x69c734;
          FUN_00434e38();
        }
        if (((*(char **)(unaff_EBP + -0x14) == (char *)0x0) ||
            (**(char **)(unaff_EBP + -0x14) == '\0')) &&
           ((*(char **)(unaff_EBP + -0x10) == (char *)0x0 ||
            (**(char **)(unaff_EBP + -0x10) == '\0')))) {
          *(int **)(unaff_EBP + 8) = aiStack_34;
          uVar3 = 0xbeb;
          aiStack_34[0] = (int)puStack_24;
        }
        else {
          if (*(int *)(extraout_ECX + 0xa0) == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(*(int *)(extraout_ECX + 0xa0) + -4);
          }
          if (iVar2 < 0x49) {
            *(undefined1 *)(unaff_EBP + -4) = 1;
            puStack_24 = (undefined *)0x69c7c1;
            FUN_00414ebb();
            *(undefined1 *)(unaff_EBP + -4) = 0;
            puStack_24 = (undefined *)0x69c7cc;
            FUN_00414ebb();
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            puStack_24 = (undefined *)0x69c7d8;
            FUN_00414ebb();
            goto LAB_0069c7db;
          }
          *(int **)(unaff_EBP + 8) = aiStack_34;
          uVar3 = 0xbea;
          aiStack_34[0] = (int)puStack_24;
        }
      }
    }
  }
  puStack_24 = (undefined *)0x0;
  aiStack_34[3] = 0;
  aiStack_34[2] = 0;
  aiStack_34[1] = 0;
  FUN_00679d22(aiStack_34,uVar3);
  FUN_007db3ad();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_24 = (undefined *)0x69c79c;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_24 = (undefined *)0x69c7a7;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_24 = (undefined *)0x69c7b3;
  FUN_00414ebb();
LAB_0069c7f5:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


