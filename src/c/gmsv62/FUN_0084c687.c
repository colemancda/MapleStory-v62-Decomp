/* FUN_0084c687 - 0x0084c687 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084c687(void)

{
  undefined4 uVar1;
  int *piVar2;
  char *_Str;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  char *pcStack_34;
  
  FUN_00879bb8();
  uVar1 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
  uVar1 = FUN_00424561();
  *(undefined4 *)(unaff_EBP + 8) = uVar1;
  if (*(int *)(unaff_EBP + -0x14) < 1) {
    pcStack_34 = (char *)0x0;
    iStack_38 = 0;
    iStack_3c = 0;
    *(int **)(unaff_EBP + 8) = &iStack_40;
    FUN_00679d22(&iStack_40,0xd21);
    FUN_007db3ad();
  }
  else {
    pcStack_34 = (char *)(unaff_EBP + -0x1c);
    iStack_38 = 0x84c6ed;
    FUN_0045a1d8();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(short *)(unaff_EBP + 8) < 2) {
      pcStack_34 = (char *)(unaff_EBP + -0x24);
      iStack_38 = 0x84c74c;
      puVar3 = (undefined4 *)FUN_00679d22();
      pcStack_34 = (char *)*puVar3;
      iStack_38 = unaff_EBP + -0x18;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_3c = 0x84c75f;
      FUN_00434e21();
      iVar4 = *(int *)(unaff_EBP + -0x24);
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    else {
      pcStack_34 = (char *)(unaff_EBP + -0x24);
      iStack_38 = 0x84c713;
      piVar2 = (int *)FUN_00679d22();
      iStack_38 = *piVar2;
      pcStack_34 = *(char **)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_3c = unaff_EBP + -0x18;
      iStack_40 = 0x84c72b;
      FUN_00434e21();
      iVar4 = *(int *)(unaff_EBP + -0x24);
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    if (iVar4 != 0) {
      pcStack_34 = (char *)0x84c776;
      FUN_00434e38();
    }
    pcStack_34 = (char *)(unaff_EBP + -0x18);
    iStack_38 = 0x84c782;
    FUN_00471102();
    pcStack_34 = (char *)(unaff_EBP + -0x10);
    iStack_38 = 0x84c794;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    pcStack_34 = (char *)0x84c7a3;
    _strlen(&DAT_00968258);
    pcStack_34 = &DAT_00968258;
    iStack_38 = 0x84c7ae;
    FUN_0045efbb();
    pcStack_34 = (char *)(unaff_EBP + -0x24);
    iStack_38 = 0x84c7be;
    piVar2 = (int *)FUN_00679e4e();
    iVar4 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (iVar4 == 0) {
      _Str = (char *)0x0;
    }
    else {
      _Str = (char *)FUN_00409205();
    }
    pcStack_34 = (char *)0x84c7d9;
    _strlen(_Str);
    iStack_38 = 0x84c7e4;
    pcStack_34 = _Str;
    FUN_0045efbb();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00402fa6();
    pcStack_34 = (char *)(unaff_EBP + -0x24);
    iStack_38 = 0x84c800;
    piVar2 = (int *)FUN_00679e4e();
    iVar4 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (iVar4 == 0) {
      iStack_3c = 0;
    }
    else {
      iStack_3c = FUN_00409205();
    }
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    pcStack_34 = *(char **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_38 = *(int *)(unaff_EBP + -0x14);
    iStack_40 = unaff_EBP + -0x20;
    puVar3 = (undefined4 *)FUN_00434e21();
    pcStack_34 = (char *)*puVar3;
    iStack_38 = 0x84c849;
    FUN_0045efbb();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
    }
    pcStack_34 = (char *)0x84c873;
    _strlen(&DAT_00964314);
    pcStack_34 = &DAT_00964314;
    iStack_38 = 0x84c87e;
    FUN_0045efbb();
    pcStack_34 = (char *)0x84c88d;
    iVar4 = FUN_004029b9();
    *(int *)(unaff_EBP + 8) = iVar4;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_007e62e9();
    }
    uVar5 = -(uint)(iVar4 != 0) & iVar4 + 8U;
    *(uint *)(unaff_EBP + -0x28) = -(uint)(uVar5 != 0) & uVar5 - 8;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_004c26c4();
    pcStack_34 = (char *)0x0;
    iStack_3c = unaff_EBP + -0x10;
    *(int **)(unaff_EBP + 8) = &iStack_38;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_40 = 0x84c8db;
    FUN_00450368();
    iStack_3c = 0x8a1798;
    iStack_40 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_004c2677();
    FUN_007eddac();
    pcStack_34 = (char *)0x0;
    iStack_38 = 0x84c8fe;
    FUN_007edf11();
    FUN_007e6e3c();
    FUN_004bc6a2();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_004c26e1();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


