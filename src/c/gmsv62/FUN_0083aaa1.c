/* FUN_0083aaa1 - 0x0083aaa1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0083aaa1(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *_Str2;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  char *pcVar5;
  int unaff_EBP;
  char *pcStack_50;
  undefined4 uStack_4c;
  char acStack_48 [4];
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  iVar1 = FUN_00455c59();
  iVar1 = *(int *)(iVar1 + 4);
  FUN_0045e4a2();
  if (*(int *)(iVar1 + 0x4a7) == 0) goto LAB_0083acd5;
  if (*(short *)(*(int *)(iVar1 + 0x4ab) + 0xc) != 1) goto LAB_0083acd5;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar2;
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
  pcStack_50 = acStack_48;
  *(char **)(unaff_EBP + -0x14) = acStack_48;
  uStack_4c = 0x1052;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00679d22();
  uStack_4c = 0;
  pcStack_50 = (char *)0x3;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004c2677();
  FUN_007eddac();
  acStack_48[0] = '\f';
  acStack_48[1] = '\0';
  acStack_48[2] = '\0';
  acStack_48[3] = '\0';
  uStack_4c = 4;
  pcStack_50 = &DAT_00978474;
  FUN_007edfe1();
  FUN_007e6e3c();
  iVar2 = FUN_004bc6a2();
  if (iVar2 == 1) {
    FUN_00641b6c();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    acStack_48[0] = -0x5a;
    acStack_48[1] = -0x55;
    acStack_48[2] = -0x7d;
    acStack_48[3] = '\0';
    FUN_0045ed72();
    FUN_0045ee27();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00414ebb();
    _Str2 = (char *)(*(int *)(iVar1 + 0x4ab) + 0x16);
    if (_Str2 == (char *)0x0) {
      _Str2 = DAT_00980dfc;
    }
    pcVar5 = DAT_00980dfc;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      pcVar5 = *(char **)(unaff_EBP + -0x10);
    }
    builtin_strncpy(acStack_48,"髃",4);
    iVar2 = _strcmp(pcVar5,_Str2);
    if (iVar2 == 0) {
LAB_0083ac9c:
      acStack_48[0] = '\0';
      acStack_48[1] = '\0';
      acStack_48[2] = '\0';
      acStack_48[3] = '\0';
      uStack_4c = 0;
      *(char ***)(unaff_EBP + 8) = &pcStack_50;
      pcStack_50 = _Str2;
      FUN_00679d22(&pcStack_50,0x1053);
      FUN_007db3ad();
    }
    else {
      _Str2 = (char *)(*(int *)(iVar1 + 0x4ab) + 0x23);
      if (_Str2 == (char *)0x0) {
        _Str2 = DAT_00980dfc;
      }
      pcVar5 = DAT_00980dfc;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        pcVar5 = *(char **)(unaff_EBP + -0x10);
      }
      acStack_48[0] = '\x17';
      acStack_48[1] = -0x54;
      acStack_48[2] = -0x7d;
      acStack_48[3] = '\0';
      iVar1 = _strcmp(pcVar5,_Str2);
      if (iVar1 == 0) goto LAB_0083ac9c;
      acStack_48[0] = '}';
      acStack_48[1] = '\0';
      acStack_48[2] = '\0';
      acStack_48[3] = '\0';
      uStack_4c = 0x83ac29;
      FUN_0060142b();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_00457cda();
      *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffffc0;
      acStack_48[0] = 'H';
      acStack_48[1] = -0x54;
      acStack_48[2] = -0x7d;
      acStack_48[3] = '\0';
      FUN_00414f8b();
      FUN_00459cb5();
      FUN_00457d37();
      FUN_00457d37();
      FUN_004751b2();
      iVar1 = *(int *)(unaff_EBP + -0x18);
      *(undefined4 *)(iVar1 + 0x208c) = 1;
      uVar4 = FUN_007d1e08();
      *(undefined4 *)(iVar1 + 0x2090) = uVar4;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_0045ebca();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004c26e1();
LAB_0083acd5:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


