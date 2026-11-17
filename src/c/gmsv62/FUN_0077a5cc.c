/* FUN_0077a5cc - 0x0077a5cc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0077a5cc(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  char *extraout_ECX_00;
  char *_Str1;
  int unaff_EBP;
  undefined4 uVar4;
  char *pcStack_4c;
  int iStack_48;
  undefined *puStack_44;
  char *pcVar5;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_007e62e9();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
  *(uint *)(unaff_EBP + -0x20) = -(uint)(uVar3 != 0) & uVar3 - 8;
  FUN_004c26c4();
  pcStack_4c = (char *)&puStack_44;
  *(undefined ***)(unaff_EBP + -0x1c) = &puStack_44;
  iStack_48 = 0x2dd;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00679d22();
  iStack_48 = 0;
  pcStack_4c = (char *)0x3;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004c2677();
  FUN_007eddac();
  puStack_44 = (undefined *)0xc;
  iStack_48 = 4;
  pcStack_4c = &DAT_00978474;
  FUN_007edfe1();
  FUN_007e6e3c();
  iVar2 = FUN_004bc6a2();
  if (iVar2 == 1) {
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00641b6c();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puStack_44 = (undefined *)0x77a6a9;
    FUN_0045ed72();
    FUN_0045ee27();
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00414ebb();
    pcVar5 = (char *)0x1;
    puStack_44 = (undefined *)0x77a6cf;
    iVar2 = FUN_007d1e11();
    if (iVar2 == 0) {
      *(char ***)(unaff_EBP + -0x1c) = &pcStack_4c;
      uVar4 = 0x2df;
      pcStack_4c = pcVar5;
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      iStack_48 = unaff_EBP + -0x1c;
      puStack_44 = &DAT_00964da0;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      pcStack_4c = (char *)0x77a737;
      FUN_00434e21();
      iVar2 = FUN_0045ec92();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00414ebb();
      if (iVar2 == 0) {
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        piVar1 = (int *)(*(int *)(unaff_EBP + -0x18) + 0x14);
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        while ((iVar2 = *piVar1, iVar2 != 0 &&
               (*(uint *)(unaff_EBP + -0x14) < *(uint *)(iVar2 + -4)))) {
          pcVar5 = *(char **)(*(int *)(unaff_EBP + -0x10) + iVar2);
          if (pcVar5 == (char *)0x0) {
            pcVar5 = DAT_00980dfc;
          }
          puStack_44 = (undefined *)0x77a79f;
          iVar2 = FUN_008858f0();
          if (iVar2 == 0) {
            *(char ***)(unaff_EBP + -0x18) = &pcStack_4c;
            uVar4 = 0x2e0;
            pcStack_4c = pcVar5;
            goto LAB_0077a6e4;
          }
          pcVar5 = *(char **)(*(int *)(unaff_EBP + -0x10) + *piVar1);
          if (pcVar5 == (char *)0x0) {
            pcVar5 = DAT_00980dfc;
          }
          _Str1 = DAT_00980dfc;
          if (*(int *)(unaff_EBP + -0x38) != 0) {
            _Str1 = *(char **)(unaff_EBP + -0x38);
          }
          puStack_44 = (undefined *)0x77a7c8;
          iVar2 = _strcmp(_Str1,pcVar5);
          if (iVar2 < 0) break;
          *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x14;
        }
        iVar2 = FUN_0078288a();
        FUN_00414f8b();
        *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(unaff_EBP + -0x34);
        *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(unaff_EBP + -0x30);
        *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(unaff_EBP + -0x2c);
        *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffc4;
        *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(unaff_EBP + -0x28);
        puStack_44 = (undefined *)0x77a81d;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_004f14ee();
        FUN_0047c4e6();
        iVar2 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0x14);
        if (iVar2 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(iVar2 + -4);
        }
        iVar2 = *(int *)(unaff_EBP + -0x18);
        *(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x77c) = uVar4;
        iVar2 = *(int *)(iVar2 + 0x10);
        *(int *)(iVar2 + 0x780) = (*(int *)(iVar2 + 0x77c) + 1) / 2;
        FUN_008161f1();
        if (*(int *)(DAT_00978368 + 0x2d08) != 0) {
          *(undefined1 **)(unaff_EBP + -0x18) = &stack0xffffffc4;
          puStack_44 = (undefined *)0x77a888;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 3;
          FUN_00429303();
          FUN_004f0eb4();
        }
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_00414ebb();
        goto LAB_0077a8a4;
      }
      *(char ***)(unaff_EBP + -0x18) = &pcStack_4c;
      uVar4 = 0x2de;
      pcStack_4c = extraout_ECX_00;
    }
LAB_0077a6e4:
    puStack_44 = (undefined *)0x0;
    iStack_48 = 0;
    FUN_00679d22(&pcStack_4c,uVar4);
    FUN_007db3ad();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x38) != 0) {
      FUN_00434e38();
    }
  }
LAB_0077a8a4:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004c26e1();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


