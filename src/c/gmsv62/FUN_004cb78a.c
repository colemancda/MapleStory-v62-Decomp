/* FUN_004cb78a - 0x004cb78a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_004cb78a(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *extraout_ECX;
  code *pcVar4;
  int unaff_EBP;
  undefined1 *puStack_60;
  int iStack_5c;
  code *pcStack_58;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  pcStack_58 = (code *)0x6ba;
  iStack_5c = unaff_EBP + -0x24;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  puStack_60 = (undefined1 *)0x4cb7c0;
  puVar1 = (undefined4 *)FUN_00679d22();
  uVar3 = *puVar1;
  pcStack_58 = *(code **)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *(undefined4 *)(unaff_EBP + -0x20) = uVar3;
  iStack_5c = 0x4cb7d3;
  iVar2 = FUN_004cb762();
  pcStack_58 = Unwind_00895440 + iVar2;
  iStack_5c = *(undefined4 *)(unaff_EBP + -0x20);
  puStack_60 = (undefined1 *)(unaff_EBP + -0x1c);
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  pcStack_58 = (code *)0x4cb7f4;
  FUN_00414ebb();
  pcStack_58 = (code *)0x0;
  iStack_5c = 0;
  puStack_60 = (undefined1 *)0x4cb7fe;
  uVar3 = FUN_00449713();
  *(undefined1 ***)(unaff_EBP + 0xc) = &puStack_60;
  FUN_00448a17(uVar3);
  iVar2 = unaff_EBP + -0x34;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0040263d(iVar2);
  FUN_004048a4(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_60 = (undefined1 *)0x4cb82c;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x24) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar2 != 0) {
    pcStack_58 = (code *)(unaff_EBP + -0x24);
    iStack_5c = 0x4cb847;
    pcStack_58 = (code *)FUN_00404b30();
    if (((int)pcStack_58 < 0) && (pcStack_58 != (code *)0x80004002)) {
      iStack_5c = 0x4cb855;
      FUN_00878dfb();
    }
  }
  pcStack_58 = (code *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_5c = 0x4cb862;
  iVar2 = FUN_00402bc3();
  pcVar4 = pcStack_58;
  if (iVar2 < 0) {
    iStack_5c = 0x4cb86d;
    pcStack_58 = (code *)iVar2;
    FUN_00878dfb();
    pcVar4 = (code *)extraout_ECX;
  }
  pcStack_58 = (code *)0x0;
  iStack_5c = 0;
  *(undefined1 ***)(unaff_EBP + 0xc) = &puStack_60;
  puStack_60 = pcVar4;
  FUN_00679e4e(&puStack_60,0x63a);
  iVar2 = unaff_EBP + -0x44;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0040263d(iVar2);
  FUN_004048a4(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_60 = (undefined1 *)0x4cb8a4;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x20) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar2 != 0) {
    pcStack_58 = (code *)(unaff_EBP + -0x20);
    iStack_5c = 0x4cb8ba;
    pcStack_58 = (code *)FUN_00404b30();
    if (((int)pcStack_58 < 0) && (pcStack_58 != (code *)0x80004002)) {
      iStack_5c = 0x4cb8c8;
      FUN_00878dfb();
    }
  }
  pcStack_58 = (code *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_5c = 0x4cb8d5;
  pcStack_58 = (code *)FUN_00402bc3();
  if ((int)pcStack_58 < 0) {
    iStack_5c = 0x4cb8e0;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
  }
  else {
    pcStack_58 = (code *)0x4cb8ed;
    FUN_0087a1b0();
    pcStack_58 = (code *)0x0;
    iStack_5c = 0;
    puStack_60 = &stack0xffffffac;
    uVar3 = FUN_00412335(*(undefined4 *)(unaff_EBP + 0x10));
    *(undefined1 ***)(unaff_EBP + 0x10) = &puStack_60;
    FUN_004033a1(uVar3);
    iVar2 = unaff_EBP + -0x54;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_0040263d(iVar2);
    FUN_004048a4(iVar2);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    puStack_60 = (undefined1 *)0x4cb92f;
    uVar3 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
  }
  iVar2 = *(int *)(unaff_EBP + 0xc);
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *puVar1 = 0;
  if (iVar2 != 0) {
    pcStack_58 = (code *)(unaff_EBP + 0xc);
    iStack_5c = 0x4cb94c;
    pcStack_58 = (code *)FUN_0041a581();
    if (((int)pcStack_58 < 0) && (pcStack_58 != (code *)0x80004002)) {
      iStack_5c = 0x4cb95a;
      FUN_00878dfb();
    }
  }
  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 2;
  *(undefined4 *)(unaff_EBP + -4) = 10;
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    pcStack_58 = (code *)(unaff_EBP + -0x54);
    iStack_5c = 0x4cb978;
    pcStack_58 = (code *)FUN_00402bc3();
    if ((int)pcStack_58 < 0) {
      iStack_5c = 0x4cb983;
      FUN_00878dfb();
    }
  }
  pcStack_58 = *(code **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (pcStack_58 != (code *)0x0) {
    iStack_5c = 0x4cb994;
    (**(code **)(*(int *)pcStack_58 + 8))();
  }
  pcStack_58 = *(code **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (pcStack_58 != (code *)0x0) {
    iStack_5c = 0x4cb9a5;
    (**(code **)(*(int *)pcStack_58 + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  pcStack_58 = (code *)0x4cb9b0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


