/* FUN_00846aa3 - 0x00846aa3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00846aa3(void)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  undefined *puStack_60;
  int aiStack_5c [2];
  undefined1 auStack_54 [4];
  undefined4 uStack_50;
  int iStack_4c;
  undefined *puStack_48;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  puStack_48 = (undefined *)0x846ac0;
  FUN_006f54f2();
  puStack_48 = (undefined *)0x10;
  iStack_4c = unaff_EBP + -0x24;
  uStack_50 = 0x846ace;
  FUN_004245d2();
  puStack_48 = &DAT_0097f7a8;
  iStack_4c = unaff_EBP + -0x44;
  uStack_50 = 0x846ae5;
  FUN_006f5b1a();
  puStack_48 = (undefined *)0x846aec;
  cVar1 = FUN_006f5bb6();
  if (cVar1 != '\0') {
    puStack_48 = (undefined *)0x846b01;
    puVar2 = (undefined4 *)FUN_004c2648();
    puStack_48 = (undefined *)*puVar2;
    iStack_4c = 0x846b0a;
    FUN_00793488();
  }
  puStack_48 = &DAT_0097f788;
  iStack_4c = unaff_EBP + -0x44;
  uStack_50 = 0x846b1b;
  FUN_006f5b1a();
  puStack_48 = (undefined *)0x846b22;
  cVar1 = FUN_006f5bb6();
  if (cVar1 != '\0') {
    puStack_48 = (undefined *)0x846b37;
    cVar1 = (**(code **)(**(int **)(extraout_ECX + 0x2a80) + 4))();
    if ((cVar1 != '\0') && (*(int *)(extraout_ECX + 0x2a80) != 0)) {
      puStack_48 = (undefined *)0x846b4e;
      puStack_48 = (undefined *)FUN_005c4af4();
      iStack_4c = 0x846b56;
      piVar3 = (int *)FUN_005d0ba9();
      iStack_4c = *piVar3;
      uStack_50 = 0x846b5f;
      FUN_005d661a();
    }
  }
  *(undefined1 **)(unaff_EBP + -0x14) = auStack_54;
  aiStack_5c[1] = 0x80;
  aiStack_5c[0] = unaff_EBP + -0x24;
  puStack_60 = (undefined *)0x846b76;
  FUN_006f5512();
  aiStack_5c[1] = 0x846b7d;
  FUN_00664410();
  puStack_48 = (undefined *)0x846b82;
  piVar3 = (int *)FUN_005a9f5e();
  puStack_48 = (undefined *)0x0;
  iStack_4c = 0;
  iVar4 = *piVar3;
  *(int **)(unaff_EBP + -0x14) = aiStack_5c;
  puStack_60 = (undefined *)0x80;
  iStack_64 = unaff_EBP + -0x24;
  uStack_68 = 0x846b9c;
  FUN_006f5512();
  puStack_60 = (undefined *)0x846ba1;
  (**(code **)(iVar4 + 0x18))();
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_6c;
  FUN_006f5512(unaff_EBP + -0x24,0x80);
  iVar4 = FUN_00662850();
  if (iVar4 != 0) {
    puStack_60 = (undefined *)0x846bcd;
    puStack_60 = (undefined *)FUN_0042452b();
    iStack_64 = 0x846bd5;
    FUN_007b029d();
  }
  *(undefined4 **)(unaff_EBP + 8) = &uStack_6c;
  FUN_006f5512(unaff_EBP + -0x24,0x80);
  FUN_00684963(0,0);
  puStack_60 = &DAT_0097f798;
  iStack_64 = unaff_EBP + -0x44;
  uStack_68 = 0x846c0a;
  FUN_006f5b1a();
  puStack_60 = (undefined *)0x846c11;
  cVar1 = FUN_006f5bb6();
  if (cVar1 != '\0') {
    puStack_60 = (undefined *)0x846c22;
    FUN_0044581f();
  }
  puStack_60 = (undefined *)0x846c29;
  FUN_00833dbd();
  *(undefined4 **)(unaff_EBP + 8) = &uStack_6c;
  FUN_006f5512(unaff_EBP + -0x24,0x80);
  iVar4 = FUN_00670464();
  if (iVar4 != 0) {
    puStack_60 = (undefined *)0x0;
    iStack_64 = 0;
    uStack_68 = 99;
    uStack_6c = 0x846c53;
    FUN_0060142b();
    puStack_60 = (undefined *)(unaff_EBP + -0x34);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_64 = 0x846c65;
    FUN_004751b2();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    puStack_60 = (undefined *)0x846c71;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


