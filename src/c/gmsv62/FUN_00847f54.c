/* FUN_00847f54 - 0x00847f54 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00847f54(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int unaff_EBP;
  int iVar4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  cVar1 = FUN_0042452b();
  if (cVar1 == '\0') {
    FUN_0045cdbc(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    cVar1 = FUN_0042452b();
    if (cVar1 == '\0') {
      puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x34,0x139);
      uVar2 = *puVar3;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00434e21(unaff_EBP + -0x10,uVar2,*(undefined4 *)(unaff_EBP + 8));
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414ebb();
    }
    else {
      puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x30,0x138);
      uVar2 = *puVar3;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00434e21(unaff_EBP + -0x10,uVar2,*(undefined4 *)(unaff_EBP + 8));
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x30) != 0) {
        FUN_00434e38(*(int *)(unaff_EBP + -0x30) + -0xc);
      }
    }
    if (DAT_0097951c != 0) {
      uVar2 = FUN_0042459a();
      FUN_007667e0(uVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else if (cVar1 == '\x01') {
    uVar2 = FUN_00679d22(unaff_EBP + -0x2c,0x13a);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00414f8b(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else if (cVar1 == '\x02') {
    uVar2 = FUN_00679d22(unaff_EBP + -0x28,0x13b);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00414f8b(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else if (cVar1 == '\x03') {
    uVar2 = FUN_00679d22(unaff_EBP + -0x24,0x13c);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00414f8b(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else if (cVar1 == '\x04') {
    uVar2 = FUN_00679d22(unaff_EBP + -0x20,0x13d);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00414f8b(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else if (cVar1 == '\x05') {
    FUN_0045cdbc(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    cVar1 = FUN_0042452b();
    iVar4 = *(int *)(extraout_ECX + 0x2098);
    if (cVar1 == '\0') {
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + 4;
      }
      puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x1c,0x13f);
      uVar2 = *puVar3;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      FUN_00434e21(unaff_EBP + -0x10,uVar2,*(undefined4 *)(unaff_EBP + 8),iVar4);
      *(undefined1 *)(unaff_EBP + -4) = 8;
    }
    else {
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + 4;
      }
      puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18,0x13e);
      uVar2 = *puVar3;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      FUN_00434e21(unaff_EBP + -0x10,uVar2,*(undefined4 *)(unaff_EBP + 8),iVar4);
      *(undefined1 *)(unaff_EBP + -4) = 8;
    }
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else {
    uVar2 = FUN_00679d22(unaff_EBP + -0x14,0x140);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_00414f8b(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  FUN_00414ebb();
  FUN_00471102(unaff_EBP + -0x10,0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


