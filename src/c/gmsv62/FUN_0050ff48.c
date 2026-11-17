/* FUN_0050ff48 - 0x0050ff48 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0050ff48(void)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  int unaff_EBP;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iStack_2c = 0x50ff67;
  cVar1 = FUN_0042452b();
  iStack_2c = 0x50ff71;
  cVar2 = FUN_0042452b();
  if (cVar2 == '\0') {
    if (cVar1 == '\0') {
      iStack_2c = 0x385;
      iStack_30 = unaff_EBP + -0x20;
      uStack_34 = 0x50ffb1;
      iStack_2c = FUN_00679d22();
      *(undefined4 *)(unaff_EBP + -0x10) = 2;
      *(undefined4 *)(unaff_EBP + -4) = 1;
    }
    else {
      iStack_2c = 900;
      iStack_30 = unaff_EBP + -0x24;
      uStack_34 = 0x50ff93;
      iStack_2c = FUN_00679d22();
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      *(undefined4 *)(unaff_EBP + -4) = 0;
    }
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    iStack_30 = 0x50ffca;
    FUN_00414f8b();
    *(undefined4 *)(unaff_EBP + -4) = 4;
    if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
      if (*(int *)(unaff_EBP + -0x20) != 0) {
        iStack_2c = *(int *)(unaff_EBP + -0x20) + -0xc;
        iStack_30 = 0x50ffeb;
        FUN_00434e38();
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 3;
    if (((*(byte *)(unaff_EBP + -0x10) & 1) != 0) && (*(int *)(unaff_EBP + -0x24) != 0)) {
      iStack_2c = *(int *)(unaff_EBP + -0x24) + -0xc;
      iStack_30 = 0x510008;
      FUN_00434e38();
    }
    iStack_2c = 0x510019;
    bVar3 = FUN_0045e4b8();
    if ((bVar3 & 1) != 0) {
      iStack_2c = 0;
      iStack_30 = 0;
      uStack_34 = 0;
      iStack_38 = 0;
      *(undefined4 **)(unaff_EBP + 8) = &uStack_3c;
      FUN_00450368(unaff_EBP + -0x14);
      FUN_007db3ad();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    iStack_2c = 0x386;
    iStack_30 = unaff_EBP + 8;
    uStack_34 = 0x510057;
    FUN_00679d22();
    *(undefined4 *)(unaff_EBP + -4) = 5;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_2c = 0x510075;
    iStack_2c = FUN_0042459a();
    iStack_30 = unaff_EBP + -0x24;
    uStack_34 = 0x510081;
    iStack_2c = FUN_0045a1d8();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_30 = 0x51008e;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_2c = 0x51009a;
    FUN_00414ebb();
    iStack_2c = 0x5100a7;
    iStack_2c = FUN_0042459a();
    iStack_30 = unaff_EBP + -0x28;
    uStack_34 = 0x5100b3;
    iStack_2c = FUN_0045a1d8();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_30 = 0x5100c0;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_2c = 0x5100cc;
    FUN_00414ebb();
    iStack_2c = *(undefined4 *)(unaff_EBP + -0x18);
    iStack_38 = unaff_EBP + 8;
    iStack_30 = *(undefined4 *)(unaff_EBP + -0x1c);
    uStack_34 = *(undefined4 *)(unaff_EBP + 8);
    uStack_3c = 0x5100de;
    FUN_00434e21();
    iStack_2c = 0;
    iStack_30 = 0;
    uStack_34 = 0;
    iStack_38 = 0;
    *(undefined4 **)(unaff_EBP + -0x24) = &uStack_3c;
    FUN_00450368(unaff_EBP + 8);
    FUN_007db3ad();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_2c = 0x510108;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_2c = 0x510114;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  iStack_2c = 0x510120;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


